<?php
/**
 * @file
 * rcfrankenstein.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rcfrankenstein_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'FrankensteinatRC2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frankenstein Resources2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'from Scholarly Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_resource_index' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_index' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = 'Scholarly Resource';
  $handler->display->display_options['fields']['field_resource_index']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_index']['alter']['text'] = '[field_resource_index]<br/>';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Parent Resource (field_resource_index) */
  $handler->display->display_options['sorts']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['sorts']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['sorts']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'reference_page' => 'reference_page',
    'reference_index_page' => 'reference_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1321 => '1321',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_3)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Person (opencalais_person_tags) */
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['id'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['field'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['value'] = array(
    0 => '17071',
    1 => '23114',
    2 => '19805',
    3 => '24040',
    4 => '16748',
    5 => '19803',
  );
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['group'] = 2;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['vocabulary'] = 'person';
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';

  /* Display: from Praxis */
  $handler = $view->new_display('panel_pane', 'from Praxis', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'from the Praxis Series';

  /* Display: from Editions */
  $handler = $view->new_display('panel_pane', 'from Editions', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'from Editions';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = 'Edition';
  $handler->display->display_options['fields']['field_resource_index']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_index']['alter']['text'] = '[field_resource_index]<br/>';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'editions_page' => 'editions_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1321 => '1321',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_3)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Person (opencalais_person_tags) */
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['id'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['field'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['value'] = array(
    0 => '17071',
    1 => '23114',
    2 => '19805',
    3 => '24040',
    4 => '16748',
    5 => '19803',
  );
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['group'] = 2;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['vocabulary'] = 'person';

  /* Display: from Pedagogies */
  $handler = $view->new_display('panel_pane', 'from Pedagogies', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'from Pedagogies';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'pedagogies_page' => 'pedagogies_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1321 => '1321',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_3)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Person (opencalais_person_tags) */
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['id'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['field'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['value'] = array(
    0 => '17071',
    1 => '23114',
    2 => '19805',
    3 => '24040',
    4 => '16748',
    5 => '19803',
  );
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['group'] = 2;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['vocabulary'] = 'person';

  /* Display: from Media */
  $handler = $view->new_display('panel_pane', 'from Media', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'from Media';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_resource_index' => 'field_resource_index',
    'field_profile_picture' => 'field_profile_picture',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '28';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = '';
  $handler->display->display_options['fields']['field_resource_index']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_index']['alter']['text'] = '[field_resource_index]<br/>';
  $handler->display->display_options['fields']['field_resource_index']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Thumbnail */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_picture']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'collection' => 'collection',
    'galler_exhibit' => 'galler_exhibit',
    'gallery_exhibit_item' => 'gallery_exhibit_item',
    'gallery_image' => 'gallery_image',
    'gallery_review' => 'gallery_review',
    'general_audio' => 'general_audio',
    'gallery' => 'gallery',
    'media' => 'media',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1321 => '1321',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_3)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Person (opencalais_person_tags) */
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['id'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['field'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['value'] = array(
    0 => '17071',
    1 => '23114',
    2 => '19805',
    3 => '24040',
    4 => '16748',
    5 => '19803',
  );
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['group'] = 2;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['vocabulary'] = 'person';

  /* Display: from Reviews */
  $handler = $view->new_display('panel_pane', 'from Reviews', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'from Reviews and Receptions';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1321 => '1321',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_3)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Person (opencalais_person_tags) */
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['id'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['field'] = 'opencalais_person_tags_tid';
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['value'] = array(
    0 => '17071',
    1 => '23114',
    2 => '19805',
    3 => '24040',
    4 => '16748',
    5 => '19803',
  );
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['group'] = 2;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['opencalais_person_tags_tid']['vocabulary'] = 'person';
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['body_value']['group'] = 2;

  /* Display: from Scholarly Resources */
  $handler = $view->new_display('panel_pane', 'from Scholarly Resources', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'from Scholarly Resources';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'reference_page' => 'reference_page',
    'reference_index_page' => 'reference_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Frankenstein';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['value'] = 'six-week';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  $translatables['FrankensteinatRC2'] = array(
    t('Master'),
    t('from Scholarly Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Scholarly Resource'),
    t('[field_resource_index]<br/>'),
    t('Tags (taxonomy_vocabulary_3)'),
    t('from Praxis'),
    t('from the Praxis Series'),
    t('View panes'),
    t('from Editions'),
    t('Edition'),
    t('from Pedagogies'),
    t('from Media'),
    t('from Reviews'),
    t('from Reviews and Receptions'),
  );
  $export['FrankensteinatRC2'] = $view;

  return $export;
}
