<?php
/**
 * @file
 * rc_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gallery_collection_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Collection Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in this Collection';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_in_this_collection_target_id']['id'] = 'field_images_in_this_collection_target_id';
  $handler->display->display_options['relationships']['field_images_in_this_collection_target_id']['table'] = 'field_data_field_images_in_this_collection';
  $handler->display->display_options['relationships']['field_images_in_this_collection_target_id']['field'] = 'field_images_in_this_collection_target_id';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_images_in_this_collection_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_images_in_this_collection_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['gallery_collection_images'] = array(
    t('Master'),
    t('Images in this Collection'),
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
    t('Content entity referenced from field_images_in_this_collection'),
    t('All'),
    t('Block'),
  );
  $export['gallery_collection_images'] = $view;

  $view = new view();
  $view->name = 'gallery_collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 id="page-title">Gallery Collections</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
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
    'collection' => 'collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery/collections';
  $translatables['gallery_collections'] = array(
    t('Master'),
    t('Gallery Collections'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h1 id="page-title">Gallery Collections</h1>'),
    t('Page'),
  );
  $export['gallery_collections'] = $view;

  $view = new view();
  $view->name = 'gallery_contributor_section';
  $view->description = 'The section that appears on Contributor pages with gallery content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Contributor Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contributions to the RC Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid2';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['relationships']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['relationships']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Illustrated (field_illustrated) */
  $handler->display->display_options['filters']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['filters']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['relationships']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['relationships']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_painted_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_painted_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_painted_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Painted (field_painted) */
  $handler->display->display_options['filters']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['filters']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Painted';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['relationships']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['relationships']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_illustrated_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_illustrated_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_illustrated_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Illustrated';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 3 */
  $handler = $view->new_display('panel_pane', 'Content pane 3', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['relationships']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['relationships']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_delineated_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_delineated_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_delineated_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Delineated (field_delineated) */
  $handler->display->display_options['filters']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['filters']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Delineated';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 4 */
  $handler = $view->new_display('panel_pane', 'Content pane 4', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Engraved (field_engraved) */
  $handler->display->display_options['filters']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['filters']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Engraved';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 5 */
  $handler = $view->new_display('panel_pane', 'Content pane 5', 'panel_pane_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['relationships']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['relationships']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_photographed_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_photographed_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_photographed_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Photographed (field_photographed) */
  $handler->display->display_options['filters']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['filters']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Photographed';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 6 */
  $handler = $view->new_display('panel_pane', 'Content pane 6', 'panel_pane_6');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['relationships']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['relationships']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_work_editor_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_work_editor_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_work_editor_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Work Editor (field_work_editor) */
  $handler->display->display_options['filters']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['filters']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Work Editor';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 7 */
  $handler = $view->new_display('panel_pane', 'Content pane 7', 'panel_pane_7');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['relationships']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['relationships']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Work Illustrated in (field_work_illustrated_in) */
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Work illustrated in';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 8 */
  $handler = $view->new_display('panel_pane', 'Content pane 8', 'panel_pane_8');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['relationships']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['relationships']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Collaborated On (field_collaborated_on) */
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Work collaborated on';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 9 */
  $handler = $view->new_display('panel_pane', 'Content pane 9', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 style="text-transform:uppercase; color:#2e2e2e; letter-spacing:2px;">Contributions to the RC Gallery</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'boldblue';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Collaborated On (field_collaborated_on) */
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['group'] = 1;
  /* Filter criterion: Content: Delineated (field_delineated) */
  $handler->display->display_options['filters']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['filters']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delineated_target_id']['group'] = 1;
  /* Filter criterion: Content: Engraved (field_engraved) */
  $handler->display->display_options['filters']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['filters']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_engraved_target_id']['group'] = 1;
  /* Filter criterion: Content: Illustrated (field_illustrated) */
  $handler->display->display_options['filters']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['filters']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_illustrated_target_id']['group'] = 1;
  /* Filter criterion: Content: Painted (field_painted) */
  $handler->display->display_options['filters']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['filters']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_painted_target_id']['group'] = 1;
  /* Filter criterion: Content: Photographed (field_photographed) */
  $handler->display->display_options['filters']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['filters']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_photographed_target_id']['group'] = 1;
  /* Filter criterion: Content: Work Editor (field_work_editor) */
  $handler->display->display_options['filters']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['filters']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_editor_target_id']['group'] = 1;
  /* Filter criterion: Content: Work Illustrated in (field_work_illustrated_in) */
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['gallery_contributor_section'] = array(
    t('Master'),
    t('Contributions to the RC Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_engraved'),
    t('([field_text_date])'),
    t('All'),
    t('Content pane'),
    t('Content entity referenced from field_painted'),
    t('Painted'),
    t('View panes'),
    t('Content pane 2'),
    t('Content entity referenced from field_illustrated'),
    t('Illustrated'),
    t('Content pane 3'),
    t('Content entity referenced from field_delineated'),
    t('Delineated'),
    t('Content pane 4'),
    t('Engraved'),
    t('Content pane 5'),
    t('Content entity referenced from field_photographed'),
    t('Photographed'),
    t('Content pane 6'),
    t('Content entity referenced from field_work_editor'),
    t('Work Editor'),
    t('Content pane 7'),
    t('Content entity referenced from field_work_illustrated_in'),
    t('Work illustrated in'),
    t('Content pane 8'),
    t('Content entity referenced from field_collaborated_on'),
    t('Work collaborated on'),
    t('Content pane 9'),
    t('<h2 style="text-transform:uppercase; color:#2e2e2e; letter-spacing:2px;">Contributions to the RC Gallery</h2>'),
  );
  $export['gallery_contributor_section'] = $view;

  $view = new view();
  $view->name = 'gallery_creators';
  $view->description = 'An aggregator of contributors whose work appears in the gallery';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Creators';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Artist';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'path';
  $handler->display->display_options['style_options']['text'] = 'Select';
  $handler->display->display_options['style_options']['choose'] = '- Find a Creator -';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  /* Sort criterion: Content: First/Middle name (field_firstname) */
  $handler->display->display_options['sorts']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['sorts']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['sorts']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: Collaborated On (field_collaborated_on) */
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['group'] = 1;
  /* Filter criterion: Content: Delineated (field_delineated) */
  $handler->display->display_options['filters']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['filters']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delineated_target_id']['group'] = 1;
  /* Filter criterion: Content: Engraved (field_engraved) */
  $handler->display->display_options['filters']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['filters']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_engraved_target_id']['group'] = 1;
  /* Filter criterion: Content: Illustrated (field_illustrated) */
  $handler->display->display_options['filters']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['filters']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_illustrated_target_id']['group'] = 1;
  /* Filter criterion: Content: Painted (field_painted) */
  $handler->display->display_options['filters']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['filters']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_painted_target_id']['group'] = 1;
  /* Filter criterion: Content: Photographed (field_photographed) */
  $handler->display->display_options['filters']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['filters']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_photographed_target_id']['group'] = 1;
  /* Filter criterion: Content: Work Editor (field_work_editor) */
  $handler->display->display_options['filters']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['filters']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_editor_target_id']['group'] = 1;
  /* Filter criterion: Content: Work Illustrated in (field_work_illustrated_in) */
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contributor' => 'contributor',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Surname (field_surname) */
  $handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_surname_value']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['gallery_creators'] = array(
    t('Master'),
    t('Artist'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['gallery_creators'] = $view;

  $view = new view();
  $view->name = 'gallery_exhibit_images';
  $view->description = 'A view drawn in by a panel to show thumbnails of images in each exhibit';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Exhibit Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in this Exhibit';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_item_description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_item_description' => 'field_item_description',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gallery_items_in_this_exhi_target_id']['id'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['relationships']['field_gallery_items_in_this_exhi_target_id']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['relationships']['field_gallery_items_in_this_exhi_target_id']['field'] = 'field_gallery_items_in_this_exhi_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_image_target_id']['id'] = 'field_related_image_target_id';
  $handler->display->display_options['relationships']['field_related_image_target_id']['table'] = 'field_data_field_related_image';
  $handler->display->display_options['relationships']['field_related_image_target_id']['field'] = 'field_related_image_target_id';
  $handler->display->display_options['relationships']['field_related_image_target_id']['relationship'] = 'field_gallery_items_in_this_exhi_target_id';
  /* Field: Content: Item Description */
  $handler->display->display_options['fields']['field_item_description']['id'] = 'field_item_description';
  $handler->display->display_options['fields']['field_item_description']['table'] = 'field_data_field_item_description';
  $handler->display->display_options['fields']['field_item_description']['field'] = 'field_item_description';
  $handler->display->display_options['fields']['field_item_description']['relationship'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['fields']['field_item_description']['label'] = 'Exhibit Description';
  $handler->display->display_options['fields']['field_item_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_item_description']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_item_description']['group_columns'] = array(
    'entity_id' => 'entity_id',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '[field_galleryimage-title]';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_for_exhibits',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'main',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['field_description']['label'] = 'Main Description';
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Go to the main image page';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Gallery Items in this Exhibit (field_gallery_items_in_this_exhi:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'galler_exhibit' => 'galler_exhibit',
    'gallery_exhibit_item' => 'gallery_exhibit_item',
  );
  /* Filter criterion: Content: Gallery Items in this Exhibit (field_gallery_items_in_this_exhi) */
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['id'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['field'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Preview of images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_item_description' => 'field_item_description',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<em>Click an image above to view it in a lightbox</em>. <em>Scroll down to see the full entry for each image</em>.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '[field_galleryimage-title]';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => '40px_icon',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'preview',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Preview of images';
  $translatables['gallery_exhibit_images'] = array(
    t('Master'),
    t('Images in this Exhibit'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_gallery_items_in_this_exhi'),
    t('Content entity referenced from field_related_image'),
    t('Exhibit Description'),
    t('[field_galleryimage-title]'),
    t('Main Description'),
    t('Go to the main image page'),
    t('All'),
    t('Block'),
    t('Preview of images'),
    t('<em>Click an image above to view it in a lightbox</em>. <em>Scroll down to see the full entry for each image</em>.'),
  );
  $export['gallery_exhibit_images'] = $view;

  $view = new view();
  $view->name = 'gallery_exhibit_images_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Exhibit Images 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in this Exhibit';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_in_exhibit_target_id']['id'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['relationships']['field_images_in_exhibit_target_id']['table'] = 'field_data_field_images_in_exhibit';
  $handler->display->display_options['relationships']['field_images_in_exhibit_target_id']['field'] = 'field_images_in_exhibit_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'main',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['field_description']['label'] = 'Main Description';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'strong';
  /* Sort criterion: Content: Images in Exhibit (field_images_in_exhibit:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_images_in_exhibit';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Items in this Exhibit (field_gallery_items_in_this_exhi) */
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['id'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['field'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['operator'] = 'empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Preview of images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<em>Click an image above to view it in a lightbox</em>. <em>Scroll down to see the full entry for each image</em>.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => '40px_icon',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'preview',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Preview of images';
  $translatables['gallery_exhibit_images_2'] = array(
    t('Master'),
    t('Images in this Exhibit'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_images_in_exhibit'),
    t('Main Description'),
    t('All'),
    t('Block'),
    t('Block 2'),
    t('Preview of images'),
    t('<em>Click an image above to view it in a lightbox</em>. <em>Scroll down to see the full entry for each image</em>.'),
  );
  $export['gallery_exhibit_images_2'] = $view;

  $view = new view();
  $view->name = 'gallery_exhibits';
  $view->description = 'Landing page/browser for Gallery exhibits';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Exhibits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Exhibits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_exhibit_icon' => 'field_exhibit_icon',
    'title' => 'title',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 id="page-title">Gallery Exhibits</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total Exhibits
<br/>
<br/>';
  /* Field: Content: Exhibit Icon */
  $handler->display->display_options['fields']['field_exhibit_icon']['id'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['table'] = 'field_data_field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['field'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_icon']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_wrapper_class'] = 'alignleft';
  $handler->display->display_options['fields']['field_exhibit_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '1000';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_description']['element_wrapper_class'] = 'desc';
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_credits']['id'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['table'] = 'field_data_field_credits';
  $handler->display->display_options['fields']['field_credits']['field'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['label'] = 'Exhibit Created by';
  $handler->display->display_options['fields']['field_credits']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['fields']['field_credits']['element_wrapper_class'] = 'right';
  $handler->display->display_options['fields']['field_credits']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'galler_exhibit' => 'galler_exhibit',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery/exhibits';
  $translatables['gallery_exhibits'] = array(
    t('Master'),
    t('Gallery Exhibits'),
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
    t('<h1 id="page-title">Gallery Exhibits</h1>'),
    t('Displaying @start - @end of @total Exhibits
<br/>
<br/>'),
    t('Read more'),
    t('Exhibit Created by'),
    t('Page'),
  );
  $export['gallery_exhibits'] = $view;

  $view = new view();
  $view->name = 'gallery_images_with_locations';
  $view->description = 'This collects all the Gallery images that have location fields populated and exports that as XML. For adding geolocation data';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery images with locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery images without locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_gallery_location' => 'field_gallery_location',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gallery_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_gallery_location']['id'] = 'field_gallery_location';
  $handler->display->display_options['fields']['field_gallery_location']['table'] = 'field_data_field_gallery_location';
  $handler->display->display_options['fields']['field_gallery_location']['field'] = 'field_gallery_location';
  $handler->display->display_options['fields']['field_gallery_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gallery_location']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Location (field_gallery_location) */
  $handler->display->display_options['filters']['field_gallery_location_tid']['id'] = 'field_gallery_location_tid';
  $handler->display->display_options['filters']['field_gallery_location_tid']['table'] = 'field_data_field_gallery_location';
  $handler->display->display_options['filters']['field_gallery_location_tid']['field'] = 'field_gallery_location_tid';
  $handler->display->display_options['filters']['field_gallery_location_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_gallery_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_gallery_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gallery_location_tid']['expose']['operator_id'] = 'field_gallery_location_tid_op';
  $handler->display->display_options['filters']['field_gallery_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_gallery_location_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_gallery_location_tid']['expose']['operator'] = 'field_gallery_location_tid_op';
  $handler->display->display_options['filters']['field_gallery_location_tid']['expose']['identifier'] = 'field_gallery_location_tid';
  $handler->display->display_options['filters']['field_gallery_location_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_gallery_location_tid']['vocabulary'] = 'gallery_locations';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery-images-with-locations';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'listPlace';
  $handler->display->display_options['style_options']['item_node'] = 'place';
  $handler->display->display_options['path'] = 'gallery_images_with_locations/placesGeo';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['gallery_images_with_locations'] = array(
    t('Master'),
    t('Gallery images without locations'),
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
    t('Nid'),
    t('Title'),
    t('Location'),
    t('Page'),
    t('Data export'),
  );
  $export['gallery_images_with_locations'] = $view;

  $view = new view();
  $view->name = 'gallery_map';
  $view->description = 'This maps all the Gallery images associated with a place';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'gallery_map';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Latitude/Longitude */
  $handler->display->display_options['fields']['field_latitude_longitude']['id'] = 'field_latitude_longitude';
  $handler->display->display_options['fields']['field_latitude_longitude']['table'] = 'field_data_field_latitude_longitude';
  $handler->display->display_options['fields']['field_latitude_longitude']['field'] = 'field_latitude_longitude';
  $handler->display->display_options['fields']['field_latitude_longitude']['label'] = 'Latitude';
  $handler->display->display_options['fields']['field_latitude_longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latitude_longitude']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_latitude_longitude']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_latitude_longitude']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_latitude_longitude']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Latitude/Longitude */
  $handler->display->display_options['fields']['field_latitude_longitude_1']['id'] = 'field_latitude_longitude_1';
  $handler->display->display_options['fields']['field_latitude_longitude_1']['table'] = 'field_data_field_latitude_longitude';
  $handler->display->display_options['fields']['field_latitude_longitude_1']['field'] = 'field_latitude_longitude';
  $handler->display->display_options['fields']['field_latitude_longitude_1']['label'] = 'Longitude';
  $handler->display->display_options['fields']['field_latitude_longitude_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latitude_longitude_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_latitude_longitude_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_latitude_longitude_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_latitude_longitude_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description_1']['id'] = 'field_description_1';
  $handler->display->display_options['fields']['field_description_1']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description_1']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description_1']['label'] = '';
  $handler->display->display_options['fields']['field_description_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description_1']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_description_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description_1']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_1']['empty'] = 'No description available.';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<div class="leftFloat">[field_galleryimage]</div>[field_description_1]';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => '100px_ed_icon',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Latitude/Longitude (field_latitude_longitude:lat) */
  $handler->display->display_options['filters']['field_latitude_longitude_lat']['id'] = 'field_latitude_longitude_lat';
  $handler->display->display_options['filters']['field_latitude_longitude_lat']['table'] = 'field_data_field_latitude_longitude';
  $handler->display->display_options['filters']['field_latitude_longitude_lat']['field'] = 'field_latitude_longitude_lat';
  $handler->display->display_options['filters']['field_latitude_longitude_lat']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery/gallery-map';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'field_latitude_longitude',
    'other_lon' => 'field_latitude_longitude_1',
    'wkt' => 'title',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_galleryimage',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_description_1' => 'field_description_1',
    'field_galleryimage' => 'field_galleryimage',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['gallery_map'] = array(
    t('Master'),
    t('Gallery Map'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Latitude'),
    t('Longitude'),
    t('No description available.'),
    t('<div class="leftFloat">[field_galleryimage]</div>[field_description_1]'),
    t('Page'),
    t('OpenLayers Data Overlay'),
  );
  $export['gallery_map'] = $view;

  return $export;
}
