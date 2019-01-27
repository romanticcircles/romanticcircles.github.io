<?php
/**
 * @file
 * rc_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export_interface';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export Interface';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '1';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: NINES Genre(s) */
  $handler->display->display_options['fields']['field_nines_genre_s_']['id'] = 'field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['field'] = 'field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['label'] = 'genre';
  $handler->display->display_options['fields']['field_nines_genre_s_']['delta_offset'] = '0';
  /* Field: Content: Authored by (Primary) */
  $handler->display->display_options['fields']['field_authored_by_primary_']['id'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['field'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['label'] = 'primary-author';
  $handler->display->display_options['fields']['field_authored_by_primary_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_authored_by_primary_']['delta_offset'] = '0';
  /* Field: Content: Authored by (Secondary) */
  $handler->display->display_options['fields']['field_authored_by_secondary_']['id'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['field'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['label'] = 'secondary-author';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_authored_by_secondary_']['delta_offset'] = '0';
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'date-published';
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Edited By */
  $handler->display->display_options['fields']['field_edited_by']['id'] = 'field_edited_by';
  $handler->display->display_options['fields']['field_edited_by']['table'] = 'field_data_field_edited_by';
  $handler->display->display_options['fields']['field_edited_by']['field'] = 'field_edited_by';
  $handler->display->display_options['fields']['field_edited_by']['label'] = 'editor';
  $handler->display->display_options['fields']['field_edited_by']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_edited_by']['delta_offset'] = '0';
  /* Field: Content: NINES Discipline(s) */
  $handler->display->display_options['fields']['field_nines_discipline_s_']['id'] = 'field_nines_discipline_s_';
  $handler->display->display_options['fields']['field_nines_discipline_s_']['table'] = 'field_data_field_nines_discipline_s_';
  $handler->display->display_options['fields']['field_nines_discipline_s_']['field'] = 'field_nines_discipline_s_';
  $handler->display->display_options['fields']['field_nines_discipline_s_']['label'] = 'discipline';
  $handler->display->display_options['fields']['field_nines_discipline_s_']['delta_offset'] = '0';
  /* Field: Content: NINES Type(s) */
  $handler->display->display_options['fields']['field_nines_type_s_']['id'] = 'field_nines_type_s_';
  $handler->display->display_options['fields']['field_nines_type_s_']['table'] = 'field_data_field_nines_type_s_';
  $handler->display->display_options['fields']['field_nines_type_s_']['field'] = 'field_nines_type_s_';
  $handler->display->display_options['fields']['field_nines_type_s_']['label'] = 'type';
  $handler->display->display_options['fields']['field_nines_type_s_']['delta_offset'] = '0';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = 'parent-resource';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Parent Section */
  $handler->display->display_options['fields']['field_parent_section']['id'] = 'field_parent_section';
  $handler->display->display_options['fields']['field_parent_section']['table'] = 'field_data_field_parent_section';
  $handler->display->display_options['fields']['field_parent_section']['field'] = 'field_parent_section';
  $handler->display->display_options['fields']['field_parent_section']['label'] = 'parent-section';
  $handler->display->display_options['fields']['field_parent_section']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['label'] = 'section';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['label'] = 'tags';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
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
    'blog' => 'blog',
    'editions_page' => 'editions_page',
    'editions_index_page' => 'editions_index_page',
    'exhibitt' => 'exhibitt',
    'exhibit_item' => 'exhibit_item',
    'collection' => 'collection',
    'galler_exhibit' => 'galler_exhibit',
    'gallery_exhibit_item' => 'gallery_exhibit_item',
    'gallery_image' => 'gallery_image',
    'gallery_review' => 'gallery_review',
    'general_audio' => 'general_audio',
    'gallery' => 'gallery',
    'media' => 'media',
    'pedagogies_entry' => 'pedagogies_entry',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'pedagogies_page' => 'pedagogies_page',
    'praxis_page' => 'praxis_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_page' => 'reference_page',
    'reference_index_page' => 'reference_index_page',
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    7 => '7',
    5 => '5',
    8 => '8',
    10 => '10',
    4 => '4',
    9 => '9',
    3 => '3',
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Dynamic Fields */
  $handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['table'] = 'node';
  $handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Fields';
  $handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
  $handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
    'title' => 'title',
    'field_nines_genre_s_' => 'field_nines_genre_s_',
  );
  $handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
    'title' => 0,
    'field_nines_genre_s_' => 0,
  );
  $handler->display->display_options['filters']['dynamic-field']['checkboxes'] = 1;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['multiple'] = TRUE;
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
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/exports/RCData_download';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = '/exports';
  $handler->display->display_options['segment_size'] = '500';
  $translatables['export_interface'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('title'),
    t('genre'),
    t('primary-author'),
    t('secondary-author'),
    t('date-published'),
    t('editor'),
    t('discipline'),
    t('type'),
    t('parent-resource'),
    t('parent-section'),
    t('section'),
    t('tags'),
    t('Type'),
    t('Fields'),
    t('Tags'),
    t('Data export'),
  );
  $export['export_interface'] = $view;

  $view = new view();
  $view->name = 'exports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
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

  /* Display: Contextual Button for CSV Exports */
  $handler = $view->new_display('views_data_export', 'Contextual Button for CSV Exports', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'data/exports/%/full-edition.csv';

  /* Display: Date browser */
  $handler = $view->new_display('date_nav', 'Date browser', 'date_nav_1');
  $translatables['exports'] = array(
    t('Master'),
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
    t('title'),
    t('Contextual Button for CSV Exports'),
    t('Date browser'),
  );
  $export['exports'] = $view;

  return $export;
}
