<?php
/**
 * @file
 * internal_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function internal_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_the_author_s_';
  $view->description = 'A simple block view to show a contributor\'s profile via a lightbox on a Praxis page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About the Author(s)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About the Author(s)';
  $handler->display->display_options['css_class'] = 'teaserItemSimple';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'teaserItem';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'instruction';
  $handler->display->display_options['header']['area']['content'] = '<em>Click an author\'s name to view his or her complete profile</em>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Field: Biography */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_wrapper_type'] = 'p';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Field: Biography */
  $handler->display->display_options['fields']['field_bio_1']['id'] = 'field_bio_1';
  $handler->display->display_options['fields']['field_bio_1']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio_1']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio_1']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['field_bio_1']['label'] = '';
  $handler->display->display_options['fields']['field_bio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_1']['element_wrapper_type'] = 'p';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['group'] = 2;
  /* Filter criterion: Content: Authored by (Primary) (field_authored_by_primary_) */
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/about';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About the Author';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'floatViewBlocks';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links"><a class="colorbox-node" href="/node/[nid]/about?width=450&height=400">About the Author(s)</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
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
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['group'] = 2;
  /* Filter criterion: Content: Authored by (Primary) (field_authored_by_primary_) */
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_page' => 'forthcoming_page',
    'pedagogies_page' => 'pedagogies_page',
    'praxis_page' => 'praxis_page',
  );
  $translatables['about_the_author_s_'] = array(
    t('Master'),
    t('About the Author(s)'),
    t('More'),
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
    t('instruction'),
    t('<em>Click an author\'s name to view his or her complete profile</em>'),
    t('Content entity referenced from field_authored_by_secondary_'),
    t('Content entity referenced from field_authored_by_primary_'),
    t('All'),
    t('Page'),
    t('more'),
    t('Block'),
    t('About the Author'),
    t('<div class="links"><a class="colorbox-node" href="/node/[nid]/about?width=450&height=400">About the Author(s)</a></div>'),
  );
  $export['about_the_author_s_'] = $view;

  $view = new view();
  $view->name = 'abstracts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Abstracts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Abstract';
  $handler->display->display_options['css_class'] = 'floatViewBlocks';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'forthcoming_page' => 'forthcoming_page',
    'pedagogies_page' => 'pedagogies_page',
    'praxis_page' => 'praxis_page',
  );
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27175',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/abstract';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links"><a class="colorbox-node" href="/node/[nid]/abstract?width=500&height=400">Abstract</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'forthcoming_page' => 'forthcoming_page',
    'pedagogies_page' => 'pedagogies_page',
    'praxis_page' => 'praxis_page',
  );
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27175',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  /* Filter criterion: Content: Body (body:summary) */
  $handler->display->display_options['filters']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['operator'] = 'not empty';
  $translatables['abstracts'] = array(
    t('Master'),
    t('Abstract'),
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
    t('All'),
    t('Page'),
    t('Block'),
    t('<div class="links"><a class="colorbox-node" href="/node/[nid]/abstract?width=500&height=400">Abstract</a></div>'),
  );
  $export['abstracts'] = $view;

  $view = new view();
  $view->name = 'node_metadata';
  $view->description = 'Collects all the metadata on node fields and opens in a colorbox link';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Node Metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Node Metadata';
  $handler->display->display_options['css_class'] = 'teaserItemSimple';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_original_publication_date']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['field_original_publication_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Published @ RC';
  $handler->display->display_options['fields']['field_published']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_published']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['field_published']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Authored by (Primary) */
  $handler->display->display_options['fields']['field_authored_by_primary_']['id'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['field'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['label'] = 'Author';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_primary_']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_authored_by_primary_']['multi_type'] = 'ul';
  /* Field: Content: Authored by (Secondary) */
  $handler->display->display_options['fields']['field_authored_by_secondary_']['id'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['field'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['label'] = 'Author';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_secondary_']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['separator'] = '<br/>';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Person */
  $handler->display->display_options['fields']['opencalais_person_tags']['id'] = 'opencalais_person_tags';
  $handler->display->display_options['fields']['opencalais_person_tags']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['fields']['opencalais_person_tags']['field'] = 'opencalais_person_tags';
  $handler->display->display_options['fields']['opencalais_person_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_person_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_person_tags']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Metadata in %1';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_authored_by_primary_' => 'field_authored_by_primary_',
    'field_authored_by_secondary_' => 'field_authored_by_secondary_',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'map_per_node:block_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/metadata';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'floatViewBlocks';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links"><a class="colorbox-node" href="/node/[nid]/metadata?width=350&height=350">About this Page</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $translatables['node_metadata'] = array(
    t('Master'),
    t('Node Metadata'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Original publication date'),
    t('Published @ RC'),
    t('Author'),
    t('Tags'),
    t('Person'),
    t('All'),
    t('Metadata in %1'),
    t('Page'),
    t('Block'),
    t('<div class="links"><a class="colorbox-node" href="/node/[nid]/metadata?width=350&height=350">About this Page</a></div>'),
  );
  $export['node_metadata'] = $view;

  $view = new view();
  $view->name = 'pages_also_of_interest';
  $view->description = 'Shows related pages based on several taxonomy vocabularies';
  $view->tag = 'recommender, similar';
  $view->base_table = 'node';
  $view->human_name = 'Related Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Pages';
  $handler->display->display_options['css_class'] = 'teaserItemSimple';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_authored_by_primary_' => 'field_authored_by_primary_',
    'field_authored_by_secondary_' => 'field_authored_by_secondary_',
    'field_resource_index' => 'field_resource_index',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_resource_index] | [field_parent_section])';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Authored by (Primary) */
  $handler->display->display_options['fields']['field_authored_by_primary_']['id'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['field'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['label'] = 'by';
  $handler->display->display_options['fields']['field_authored_by_primary_']['alter']['text'] = 'by [field_authored_by_primary_]';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_primary_']['delta_offset'] = '0';
  /* Field: Content: Authored by (Secondary) */
  $handler->display->display_options['fields']['field_authored_by_secondary_']['id'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['field'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['label'] = 'by';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['alter']['text'] = 'by [field_authored_by_secondary_]';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_secondary_']['delta_offset'] = '0';
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Exhibit Icon */
  $handler->display->display_options['fields']['field_exhibit_icon']['id'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['table'] = 'field_data_field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['field'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_exhibit_icon']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = 'From';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'vocabulary_3' => 'vocabulary_3',
    'city' => 'city',
    'person' => 'person',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'gallery_image' => 'gallery_image',
    'general_audio' => 'general_audio',
    'pedagogies_entry' => 'pedagogies_entry',
    'pedagogies_page' => 'pedagogies_page',
    'poets_on_poets_entry' => 'poets_on_poets_entry',
    'praxis_page' => 'praxis_page',
    'reference_page' => 'reference_page',
    'review' => 'review',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
    'author_primary_' => 0,
    'author' => 0,
    'editor' => 0,
    'person' => 0,
    'vocabulary_3' => 0,
    'city' => 0,
    'vocabulary_59' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'creation_technique' => 0,
    'flagged_gallery_categories' => 0,
    'gallery_locations' => 0,
    'gallery_tags' => 0,
    'vocabulary_63' => 0,
    'style' => 0,
    'support_medium' => 0,
    'video_categories' => 0,
    'vocabulary_61' => 0,
    'academic_interests' => 0,
    'audio_categories' => 0,
    'continent' => 0,
    'country' => 0,
    'movie' => 0,
    'music_album' => 0,
    'music_group' => 0,
    'natural_feature' => 0,
    'organization' => 0,
    'province_or_state' => 0,
    'region' => 0,
    'vocabulary_64' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Related Pages';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/related-pages';
  $translatables['pages_also_of_interest'] = array(
    t('Master'),
    t('Related Pages'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[title] ([field_resource_index] | [field_parent_section])'),
    t('by'),
    t('by [field_authored_by_primary_]'),
    t('by [field_authored_by_secondary_]'),
    t('From'),
    t('All'),
    t('Type'),
    t('Block'),
    t('term'),
    t('Content entity referenced from field_resource_index'),
    t('Page'),
  );
  $export['pages_also_of_interest'] = $view;

  $view = new view();
  $view->name = 'praxis_sidebar_icon';
  $view->description = 'puts the 100px icon on the sidebar of Praxis vols. For "branding" purposes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sidebar Icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sidebar Icons';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['required'] = TRUE;
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['praxis_sidebar_icon'] = array(
    t('Master'),
    t('Sidebar Icons'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_resource_index'),
    t('All'),
    t('Block'),
  );
  $export['praxis_sidebar_icon'] = $view;

  $view = new view();
  $view->name = 'related_resources_algorithmic';
  $view->description = 'Shows related resources based on several taxonomy vocabularies';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Resources Algorithmic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Exhibit Icon */
  $handler->display->display_options['fields']['field_exhibit_icon']['id'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['table'] = 'field_data_field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['field'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'vocabulary_3' => 'vocabulary_3',
    'city' => 'city',
    'person' => 'person',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
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
    'editions_index_page' => 'editions_index_page',
    'galler_exhibit' => 'galler_exhibit',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['similar_nid']['vocabularies'] = array(
    'person' => 'person',
    'vocabulary_3' => 'vocabulary_3',
    'vocabulary_52' => 0,
    'author_primary_' => 0,
    'author' => 0,
    'editor' => 0,
    'city' => 0,
    'vocabulary_59' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'vocabulary_63' => 0,
    'media_type' => 0,
    'gallery_tags' => 0,
    'video_categories' => 0,
    'gallery_locations' => 0,
    'style' => 0,
    'creation_technique' => 0,
    'support_medium' => 0,
    'flagged_gallery_categories' => 0,
    'exhibit_categories' => 0,
    'nines_type' => 0,
    'nines_discipline' => 0,
    'nines_genre' => 0,
    'syllabi_categories' => 0,
    'place_anchors' => 0,
    'person_anchors' => 0,
    'guide_to_the_lakes_place_tags' => 0,
    'title' => 0,
    'person_fictional' => 0,
    'receptions_topic' => 0,
    'review_type' => 0,
    'characters' => 0,
    'conflict' => 0,
    'body' => 0,
    'font' => 0,
    'setting' => 0,
    'color' => 0,
    'vocabulary_61' => 0,
    'tags' => 0,
    'annotation_categories' => 0,
    'audio_categories' => 0,
    'continent' => 0,
    'country' => 0,
    'movie' => 0,
    'music_album' => 0,
    'music_group' => 0,
    'natural_feature' => 0,
    'vocabulary_64' => 0,
    'organization' => 0,
    'province_or_state' => 0,
    'region' => 0,
  );
  $handler->display->display_options['arguments']['similar_nid']['include_args'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Related Resources';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
    'author_primary_' => 0,
    'author' => 0,
    'editor' => 0,
    'person' => 0,
    'vocabulary_3' => 0,
    'city' => 0,
    'vocabulary_59' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'creation_technique' => 0,
    'flagged_gallery_categories' => 0,
    'gallery_locations' => 0,
    'gallery_tags' => 0,
    'vocabulary_63' => 0,
    'style' => 0,
    'support_medium' => 0,
    'video_categories' => 0,
    'vocabulary_61' => 0,
    'academic_interests' => 0,
    'audio_categories' => 0,
    'continent' => 0,
    'country' => 0,
    'movie' => 0,
    'music_album' => 0,
    'music_group' => 0,
    'natural_feature' => 0,
    'organization' => 0,
    'province_or_state' => 0,
    'region' => 0,
    'vocabulary_64' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Related Resources2';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['similar_nid']['title'] = 'Resources Related to %1';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/related-resources';
  $translatables['related_resources_algorithmic'] = array(
    t('Master'),
    t('Related Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('All'),
    t('Block'),
    t('Related Resources2'),
    t('Page'),
    t('Resources Related to %1'),
  );
  $export['related_resources_algorithmic'] = $view;

  return $export;
}
