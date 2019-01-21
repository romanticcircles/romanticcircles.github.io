<?php
/**
 * @file
 * services_rc.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_rc_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'service_gallery_image';
  $view->description = 'The view creating the data output for the Gallery Image service';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Gallery Image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '[field_galleryimage]';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['path'] = '[field_galleryimage]';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'services';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_original_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_original_publication_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['label'] = 'collection';
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'description';
  $handler->display->display_options['fields']['field_description']['type'] = 'services';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'gallery_image';
  $translatables['service_gallery_image'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_galleryimage]'),
    t('collection'),
    t('description'),
    t('Services'),
  );
  $export['service_gallery_image'] = $view;

  return $export;
}
