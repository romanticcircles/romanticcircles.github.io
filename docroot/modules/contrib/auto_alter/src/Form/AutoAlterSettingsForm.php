<?php

namespace Drupal\auto_alter\Form;

use Drupal\auto_alter\AutoAlterCredentials;
use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\auto_alter\AzureVision;
use Drupal\Core\Extension\ModuleHandlerInterface;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Class AutoAlterSettingsForm.
 *
 * @package Drupal\auto_alter\Form
 */
class AutoAlterSettingsForm extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'auto_alter_form';
  }

  /**
   * {@inheritdoc}
   */
  public function getEditableConfigNames() {
    return [
      'auto_alter.settings',
    ];
  }

  /**
   * The file AzureVision service.
   *
   * @var Drupal\auto_alter\AzureVision
   */
  protected $azurevision;

  /**
   * The Module Handler.
   *
   * @var Drupal\Core\Extension\ModuleHandlerInterface
   */
  protected $modulehandler;

  /**
   * Class constructor.
   */
  public function __construct(AzureVision $azure_vision, ModuleHandlerInterface $module_handler) {
    $this->azurevision = $azure_vision;
    $this->modulehandler = $module_handler;
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container) {
    // Instantiates this form class.
    return new static(
      // Load the service required to construct this class.
      $container->get('auto_alter.get_description'),
      $container->get('module_handler')
    );
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $config = $this->config('auto_alter.settings');

    $form['settings'] = [
      '#type' => 'details',
      '#title' => $this->t('Automatic Alternative Text settings'),
      '#open' => TRUE,
      '#description' => $this->t('Thanks for installing Automatic Alternative Text! To start receiving alt text, enter your API key. Don\'t have one yet? Sign up <a href="@url" target="_blank">@url</a>.', [
        '@url' => 'https://www.microsoft.com/cognitive-services',
      ]),
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
      '#description' => $this->t('Enter the URL of your Endpoint here. fe. https://westeurope.api.cognitive.microsoft.com/vision/v1.0/describe?maxCandidates=1 for West Europe'),
    ];

    $form['settings']['status'] = [
      '#type' => 'checkbox',
      '#required' => FALSE,
      '#title' => $this->t('Show status message to user'),
      '#default_value' => $config->get('status'),
      '#description' => $this->t('If checked, a status message is generated after saving: "Alternate text has been changed to: "%text" by a confidence of %confidence"'),
    ];

    $form['settings']['suggestion'] = [
      '#type' => 'checkbox',
      '#required' => FALSE,
      '#title' => $this->t('Make suggestion for alternative text'),
      '#default_value' => $config->get('suggestion'),
      '#description' => $this->t('If checked and alternative text is enabled for the field, a suggestion for the alternative text is created, when image is uploaded to the system.'),
    ];
    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function validateForm(array &$form, FormStateInterface $form_state) {
    $values = $form_state->getValues();
    $endpoint = $values['endpoint'];
    $credentials = new AutoAlterCredentials();
    $credential_provider = $form_state->getValue(['credentials', 'credential_provider']);
    $credentials_values = $form_state->getValue(['credentials', 'providers']);
    $credentials->setCredentials($credential_provider, $credentials_values ?? []);
    $api_key = $credentials->getApikey();
    $path = $this->modulehandler->getModule('auto_alter')->getPath();

    $request = $this->azurevision->getdescription($path . '/image/test.jpg', $endpoint, $api_key);

    if ($request !== FALSE && $request->getStatusCode() == 200) {
      \Drupal::messenger()->addStatus($this->t('Your settings have been successfully validated'));
    }
    else {
      if ($request !== FALSE && $request->getStatusCode() == 401) {
        $form_state->setErrorByName('credentials', $this->t('The API Key seems to be wrong. Please check in your Azure Console.'));
      }
      else {
        $form_state->setErrorByName('endpoint', $this->t('The URL for the endpoint seems to be wrong. Please check in your Azure Console.'));
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
    $this->config('auto_alter.settings')
      ->set('endpoint', $values['endpoint'])
      ->set('credential_provider', $credential_provider)
      ->set('credentials', [])
      ->set("credentials.$credential_provider", $credentials)
      ->set('status', $values['status'])
      ->set('suggestion', $values['suggestion'])
      ->save();

    parent::submitForm($form, $form_state);
  }

}
