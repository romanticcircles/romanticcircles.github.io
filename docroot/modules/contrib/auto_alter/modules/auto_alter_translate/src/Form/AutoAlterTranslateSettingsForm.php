<?php

namespace Drupal\auto_alter_translate\Form;

use Drupal\auto_alter_translate\AutoAlterTranslateCredentials;
use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\auto_alter_translate\AzureTranslate;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Class AutoAlterTranslateSettingsForm.
 *
 * @package Drupal\auto_alter_translate\Form
 */
class AutoAlterTranslateSettingsForm extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'auto_alter_translate_form';
  }

  /**
   * {@inheritdoc}
   */
  public function getEditableConfigNames() {
    return [
      'auto_alter_translate.settings',
    ];
  }

  /**
   * The file AzureVision service.
   *
   * @var Drupal\auto_alter_translate\AzureTranslate
   */
  protected $azuretranslate;

  /**
   * Class constructor.
   */
  public function __construct(AzureTranslate $azure_translate) {
    $this->azuretranslate = $azure_translate;
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container) {
    // Instantiates this form class.
    return new static(
      // Load the service required to construct this class.
      $container->get('auto_alter_translate.get_translation')
    );
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $config = $this->config('auto_alter_translate.settings');

    $form['settings'] = [
      '#type' => 'details',
      '#title' => $this->t('Automatic Alternative Text Translation settings'),
      '#open' => TRUE,
      '#description' => $this->t('The Azure Cognitive Service returns Image description in english only. Use this submodule to translate description with <a href="@url" target="_blank">Microsoft Azure translation API</a> to your current language.', [
        '@url' => 'https://azure.microsoft.com/en-us/services/cognitive-services/translator-text-api/',
      ]),
    ];

    $form['settings']['active'] = [
      '#type' => 'checkbox',
      '#required' => FALSE,
      '#title' => $this->t('Enable translation'),
      '#default_value' => $config->get('active'),
      '#description' => $this->t('Only if checked, configuration of api_key and endpoint is required.'),
    ];

    $section =& $form['settings'];

    $section['credentials'] = [
      '#id' => 'credentials',
      '#type' => 'details',
      '#title' => $this->t('Credentials'),
      '#open' => TRUE,
      '#tree' => TRUE,
    ];

    $section['credentials']['credential_provider'] = [
      '#type' => 'select',
      '#title' => $this->t('Credential provider'),
      '#options' => [
        'config' => $this->t('Local configuration'),
      ],
      '#default_value' => $config->get('credential_provider'),
    ];

    $section['credentials']['providers'] = [
      '#type' => 'item',
      '#id' => 'credentials_configuration',
    ];

    $provider_config_state = [':input[name="credentials[credential_provider]"]' => ['value' => 'config']];
    $section['credentials']['providers']['config']['api_key'] = [
      '#type' => 'textfield',
      '#title' => $this->t('API Key (config)'),
      '#default_value' => $config->get('credentials.config.api_key'),
      '#states' => [
        'visible' => $provider_config_state,
        'required' => $provider_config_state,
      ],
   ];

    if (\Drupal::moduleHandler()->moduleExists('key')) {
      $section['credentials']['credential_provider']['#options']['key'] = $this->t('Key Module');
      $provider_key_state = [':input[name="credentials[credential_provider]"]' => ['value' => 'key']];
      $section['credentials']['providers']['key']['api_key_key'] = [
        '#type' => 'key_select',
        '#title' => $this->t('API Key (Key)'),
        '#default_value' => $config->get('credentials.key.api_key_key'),
        '#empty_option' => $this->t('- Please select -'),
        '#key_filters' => ['type' => 'authentication'],
        '#description' => $this->t('Your API key stored as a secure key.'),
        '#states' => [
          'visible' => $provider_key_state,
          'required' => $provider_key_state,
        ],
      ];
    }
    else {
      $section['credentials']['credential_provider']['#value'] = 'config';
      $section['credentials']['credential_provider']['#disabled'] = TRUE;
    }

    $form['settings']['endpoint'] = [
      '#type' => 'textfield',
      '#required' => TRUE,
      '#title' => $this->t('URL of Endpoint'),
        '#default_value' => $config->get('endpoint'),
        '#description' => $this->t('Enter the URL of your Endpoint here. fe. https://api.cognitive.microsofttranslator.com/translate?api-version=3.0'),
    ];

      $form['settings']['region'] = [
          '#type' => 'textfield',
          '#title' => $this->t('Region'),
          '#default_value' => $config->get('region'),
          '#description' => $this->t('The value is the region of the multi-service or regional translator resource. This value is optional when using a global translator resource.'),
      ];

    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function validateForm(array &$form, FormStateInterface $form_state) {
    $values = $form_state->getValues();
    $active = $values['active'];
    $endpoint = $values['endpoint'];
    $region = $values['region'];
    $credentials = new AutoAlterTranslateCredentials();
    $credential_provider = $form_state->getValue(['credentials', 'credential_provider']);
    $credentials_values = $form_state->getValue(['credentials', 'providers']);
    $credentials->setCredentials($credential_provider, $credentials_values ?? []);
    $api_key = $credentials->getApikey();

    if ($active) {
      $request = $this->azuretranslate->gettranslation('Please translate this text', $region, $endpoint, $api_key, "en", "de");
      if (isset($request) && $request !== FALSE && $request->getStatusCode() == 200) {
        \Drupal::messenger()->addStatus($this->t('Your settings have been successfully validated'));
      }
      else {
        if (isset($request) && $request !== FALSE && ($request->getStatusCode() == 400 || $request->getStatusCode() == 401)) {
          $form_state->setErrorByName('credentials', $this->t('The API Key seems to be wrong. Please check in your Azure Console.'));
        }
        elseif (isset($request)) {
          $form_state->setErrorByName('endpoint', $this->t('The URL for the endpoint seems to be wrong. Please check in your Azure Console.'));
        }
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $values = $form_state->getValues();
    $credential_provider = $form_state->getValue(['credentials', 'credential_provider']);
    $credentials = $form_state->getValue([
      'credentials',
      'providers',
      $credential_provider,
    ]);

    $this->config('auto_alter_translate.settings')
      ->set('endpoint', $values['endpoint'])
      ->set('region', $values['region'])
      ->set('credential_provider', $credential_provider)
      ->set('credentials', [])
      ->set("credentials.$credential_provider", $credentials)
      ->set('active', $values['active'])
      ->save();

    parent::submitForm($form, $form_state);
  }

}
