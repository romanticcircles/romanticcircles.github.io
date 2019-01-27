<?php
/**
 * @file
 * front_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_blogs';
  $view->description = 'News, notes, and announcements from the RC community';
  $view->tag = 'rcblog';
  $view->base_table = 'node';
  $view->human_name = 'all_blogs';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Romantic Circles Blog';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="alignright" style="display:block;"><a class="colorbox-node" href="/node/37417?width=600&height=600">About the Blogs</a></p>';
  /* Relationship: Feeds item: Owner feed */
  $handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Feed URL */
  $handler->display->display_options['fields']['field_feed_url']['id'] = 'field_feed_url';
  $handler->display->display_options['fields']['field_feed_url']['table'] = 'field_data_field_feed_url';
  $handler->display->display_options['fields']['field_feed_url']['field'] = 'field_feed_url';
  $handler->display->display_options['fields']['field_feed_url']['label'] = '';
  $handler->display->display_options['fields']['field_feed_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_feed_url']['alter']['text'] = '<span class="list-title">[title]</span> ';
  $handler->display->display_options['fields']['field_feed_url']['alter']['path'] = '[field_feed_url-url]';
  $handler->display->display_options['fields']['field_feed_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_feed_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_feed_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feed_url']['click_sort_column'] = 'url';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = '';
  $handler->display->display_options['fields']['field_resource_index']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_index']['alter']['text'] = '<span class="list-title"><a href="[path]">[title]</a></span> << <span class="term">[field_resource_index]<img src="/sites/default/files/logo_small_0.png" width="15px" />';
  $handler->display->display_options['fields']['field_resource_index']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'feed_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'term';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_feed_item_description']['id'] = 'field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['table'] = 'field_data_field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['field'] = 'field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['label'] = '';
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['preserve_tags'] = '<em> <strong>';
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_feed_item_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feed_item_description']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_feed_item_description']['element_wrapper_class'] = 'indent2 desc';
  $handler->display->display_options['fields']['field_feed_item_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<em> <strong>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'indent2 desc';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Feed URL */
  $handler->display->display_options['fields']['field_feed_url_1']['id'] = 'field_feed_url_1';
  $handler->display->display_options['fields']['field_feed_url_1']['table'] = 'field_data_field_feed_url';
  $handler->display->display_options['fields']['field_feed_url_1']['field'] = 'field_feed_url';
  $handler->display->display_options['fields']['field_feed_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_feed_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feed_url_1']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status_1']['id'] = 'status_1';
  $handler->display->display_options['sorts']['status_1']['table'] = 'node';
  $handler->display->display_options['sorts']['status_1']['field'] = 'status';
  $handler->display->display_options['sorts']['status_1']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'feed_item' => 'feed_item',
    'pedagogies_entry' => 'pedagogies_entry',
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['operator'] = '!=';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '91666';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'blogs';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News & Announcements from the RC Community';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_feed_url' => 'field_feed_url',
    'field_resource_index' => 'field_resource_index',
    'title_1' => 'title_1',
    'field_feed_url_1' => 'field_feed_url_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' <<';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'News & Announcements from the RC Community';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'blogs/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $translatables['all_blogs'] = array(
    t('Defaults'),
    t('Romantic Circles Blog'),
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
    t('<div class="alignright" style="display:block;"><a class="colorbox-node" href="/node/37417?width=600&height=600">About the Blogs</a></p>'),
    t('Owner feed'),
    t('<span class="list-title">[title]</span> '),
    t('<span class="list-title"><a href="[path]">[title]</a></span> << <span class="term">[field_resource_index]<img src="/sites/default/files/logo_small_0.png" width="15px" />'),
    t('Page'),
    t('Block'),
    t('News & Announcements from the RC Community'),
    t('Feed'),
  );
  $export['all_blogs'] = $view;

  $view = new view();
  $view->name = 'audio_random';
  $view->description = 'Random audio nodes';
  $view->tag = 'audio';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Random audio';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_audio' => 'general_audio',
    'poets_on_poets_entry' => 'poets_on_poets_entry',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['audio_random'] = array(
    t('Defaults'),
    t('Random audio'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['audio_random'] = $view;

  $view = new view();
  $view->name = 'frontpage_slider_2';
  $view->description = 'View for showing the front page slideshow/carousel for "Featured Resources"';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FrontPage Slider 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FrontPage Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner_1' => 'field_index_banner_1',
    'body' => 0,
    'field_index_banner' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'body' => 0,
    'field_index_banner_1' => 0,
    'field_index_banner' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'body' => 'body',
    'field_index_banner_1' => 'field_index_banner_1',
    'field_index_banner' => 'field_index_banner',
  );
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner_1']['id'] = 'field_index_banner_1';
  $handler->display->display_options['fields']['field_index_banner_1']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner_1']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner_1']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_index_banner_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_index_banner_1']['alter']['link_class'] = '[field_index_banner_1]';
  $handler->display->display_options['fields']['field_index_banner_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner_1']['settings'] = array(
    'image_style' => 'front_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'front_banner',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'frontpageSliderText desc';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'hour';
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
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['frontpage_slider_2'] = array(
    t('Master'),
    t('FrontPage Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['frontpage_slider_2'] = $view;

  $view = new view();
  $view->name = 'gallery_slider';
  $view->description = 'A browser and two teaser blocks for RC Gallery thumbnails and content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Browser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Romantic Circles Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Explore the Gallery';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest first';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'term_node_tid_depth_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'term_node_tid_depth_2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_artist_unknown' => 'field_artist_unknown',
    'field_creator_painter' => 'field_creator_painter',
    'field_creator_engraver' => 'field_creator_engraver',
    'field_creator_illustrator' => 'field_creator_illustrator',
    'field_creator_delineator' => 'field_creator_delineator',
    'field_creator_author' => 'field_creator_author',
    'field_creator_editor' => 'field_creator_editor',
    'field_creator_photographer' => 'field_creator_photographer',
    'field_creator_collaborator' => 'field_creator_collaborator',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This a snapshot of the Romantic Circles Gallery, a fully curated database of Romantic-Era images. Click the "See all" link below to browse the full set of images.  ';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_section_target_id']['id'] = 'field_parent_section_target_id';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['table'] = 'field_data_field_parent_section';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['field'] = 'field_parent_section_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
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
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['label'] = '';
  $handler->display->display_options['fields']['field_image_date']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_image_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Explore the Gallery';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 id="page-title">Images in the Gallery</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h4 class="boldblue" style="text-align:center;">Gallery Editors: [view]</h4>';
  $handler->display->display_options['header']['area_1']['format'] = '3';
  $handler->display->display_options['header']['area_1']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total images';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['label'] = '';
  $handler->display->display_options['fields']['field_image_date']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_image_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'contributor_names_landing_pages';
  $handler->display->display_options['fields']['view']['display'] = 'block_3';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Sort by publication/creation date';
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
    'gallery_image' => 'gallery_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Support Medium using Has Taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'Support Medium using Has Taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Medium';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['description'] = 'Select and item to filter results by artistic medium.';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'support_medium';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
  /* Filter criterion: Creation Technique using Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['ui_name'] = 'Creation Technique using Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Creation Technique';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['description'] = 'Select an item to filter results by creation technique.';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'creation_technique';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '2';
  /* Filter criterion: Style using Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['ui_name'] = 'Style using Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator_id'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['label'] = 'Style';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['description'] = 'Select an item from the list to filter by the image\'s style';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['identifier'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth_2']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['vocabulary'] = 'style';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['depth'] = '2';
  $handler->display->display_options['metatags'] = array(
    'description' => array(
      'value' => 'The Romantic Circles Gallery is a fully curated gallery of Romantic-era images',
    ),
    'keywords' => array(
      'value' => 'gallery, images, Romanticism, art, art history, Romantic Era,',
    ),
    'dcterms.creator' => array(
      'value' => 'Theresa M. Kelley, Richard C. Sha',
    ),
    'dcterms.description' => array(
      'value' => 'The Romantic Circles Gallery is a fully curated gallery of Romantic-era images',
    ),
    'dcterms.publisher' => array(
      'value' => 'Romantic Circles',
    ),
    'dcterms.type' => array(
      'value' => 'Collection',
    ),
  );
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery Slider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['element_label_type'] = 'strong';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nid_2']['element_class'] = 'fullView';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $translatables['gallery_slider'] = array(
    t('Master'),
    t('Romantic Circles Gallery'),
    t('Explore the Gallery'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Newest first'),
    t('Oldest first'),
    t('Advanced options'),
    t('Sort options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('This a snapshot of the Romantic Circles Gallery, a fully curated database of Romantic-Era images. Click the "See all" link below to browse the full set of images.  '),
    t('Content entity referenced from field_parent_section'),
    t('<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>'),
    t('Read full description'),
    t('Painter'),
    t('Delineator'),
    t('Illustrator'),
    t('Engraver'),
    t('Photographer'),
    t('Author'),
    t('Editor'),
    t('Collaborator'),
    t('From the Collection'),
    t('Original publication date -  start date (field_original_publication_date)'),
    t('Page'),
    t('<h1 id="page-title">Images in the Gallery</h1>'),
    t('<h4 class="boldblue" style="text-align:center;">Gallery Editors: [view]</h4>'),
    t('Displaying @start - @end of @total images'),
    t('Sort by publication/creation date'),
    t('Medium'),
    t('Select and item to filter results by artistic medium.'),
    t('Creation Technique'),
    t('Select an item to filter results by creation technique.'),
    t('Style'),
    t('Select an item from the list to filter by the image\'s style'),
    t('Block'),
    t('Gallery Slider'),
    t('more'),
    t('Date'),
    t('<a href="/node/[nid_2]">Full View</a>'),
    t('Random'),
    t('See all'),
    t('Content pane'),
    t('View panes'),
  );
  $export['gallery_slider'] = $view;

  $view = new view();
  $view->name = 'gallery_slider2';
  $view->description = 'A browser and two teaser blocks for RC Gallery thumbnails and content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fiction';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Explore the Gallery';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Selected Images from the RC Gallery';
  $handler->display->display_options['link_url'] = 'gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_galleryimage' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_galleryimage' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '5';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'gallery_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  $translatables['gallery_slider2'] = array(
    t('Master'),
    t('Fiction'),
    t('Explore the Gallery'),
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
    t('<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>'),
    t('Read full description'),
    t('Painter'),
    t('Delineator'),
    t('Illustrator'),
    t('Engraver'),
    t('Photographer'),
    t('Author'),
    t('Editor'),
    t('Collaborator'),
    t('Image Date'),
    t('From the Collection'),
    t('<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>'),
    t('<a href="/node/[nid_2]">Full View</a>'),
    t('Original publication date -  start date (field_original_publication_date)'),
    t('Block'),
    t('Selected Images from the RC Gallery'),
    t('more'),
    t('Random'),
  );
  $export['gallery_slider2'] = $view;

  $view = new view();
  $view->name = 'genre_slider_correspondence';
  $view->description = 'Fiction Genre slider for the front page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Genre Slider - Correspondence';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Correspondence';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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

  /* Display: Correspondence */
  $handler = $view->new_display('block', 'Correspondence', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Correspondence';
  $handler->display->display_options['display_description'] = 'Showing the Correspondence genre';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '3';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_original_publication_date' => 'field_original_publication_date',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'genre_slider__368_x_auto_',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_original_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b> <strong> <em> <i>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'editions_index_page' => 'editions_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27174',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  $translatables['genre_slider_correspondence'] = array(
    t('Master'),
    t('Correspondence'),
    t('See all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Newest first'),
    t('Oldest first'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>'),
    t('Read full description'),
    t('Painter'),
    t('Delineator'),
    t('Illustrator'),
    t('Engraver'),
    t('Photographer'),
    t('Author'),
    t('Editor'),
    t('Collaborator'),
    t('Image Date'),
    t('From the Collection'),
    t('<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>'),
    t('<a href="/node/[nid_2]">Full View</a>'),
    t('Original publication date -  start date (field_original_publication_date)'),
    t('Showing the Correspondence genre'),
    t('more'),
  );
  $export['genre_slider_correspondence'] = $view;

  $view = new view();
  $view->name = 'genre_slider_drama';
  $view->description = 'Fiction Genre slider for the front page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Genre Slider - Drama';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Correspondence';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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

  /* Display: Drama */
  $handler = $view->new_display('block', 'Drama', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Drama';
  $handler->display->display_options['display_description'] = 'Showing the Drama genre';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '3';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_index_banner' => 'field_index_banner',
    'title' => 'title',
    'field_original_publication_date' => 'field_original_publication_date',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'genre_slider__368_x_auto_',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_original_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b> <strong> <em> <i>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'editions_index_page' => 'editions_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27179',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  $translatables['genre_slider_drama'] = array(
    t('Master'),
    t('Correspondence'),
    t('See all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Newest first'),
    t('Oldest first'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>'),
    t('Read full description'),
    t('Painter'),
    t('Delineator'),
    t('Illustrator'),
    t('Engraver'),
    t('Photographer'),
    t('Author'),
    t('Editor'),
    t('Collaborator'),
    t('Image Date'),
    t('From the Collection'),
    t('<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>'),
    t('<a href="/node/[nid_2]">Full View</a>'),
    t('Original publication date -  start date (field_original_publication_date)'),
    t('Drama'),
    t('Showing the Drama genre'),
    t('more'),
  );
  $export['genre_slider_drama'] = $view;

  $view = new view();
  $view->name = 'genre_sliders';
  $view->description = 'Fiction Genre slider for the front page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Genre Slider - Fiction';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Correspondence';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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

  /* Display: Fiction */
  $handler = $view->new_display('block', 'Fiction', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fiction';
  $handler->display->display_options['display_description'] = 'Showing the Fiction genre';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '3';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_original_publication_date' => 'field_original_publication_date',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'genre_slider__368_x_auto_',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_original_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b> <strong> <em> <i>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'editions_index_page' => 'editions_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27181',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  $translatables['genre_sliders'] = array(
    t('Master'),
    t('Correspondence'),
    t('See all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Newest first'),
    t('Oldest first'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>'),
    t('Read full description'),
    t('Painter'),
    t('Delineator'),
    t('Illustrator'),
    t('Engraver'),
    t('Photographer'),
    t('Author'),
    t('Editor'),
    t('Collaborator'),
    t('Image Date'),
    t('From the Collection'),
    t('<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>'),
    t('<a href="/node/[nid_2]">Full View</a>'),
    t('Original publication date -  start date (field_original_publication_date)'),
    t('Fiction'),
    t('Showing the Fiction genre'),
    t('more'),
  );
  $export['genre_sliders'] = $view;

  $view = new view();
  $view->name = 'latest_content_from_reviews_receptions';
  $view->description = 'latest reviews as well as Rom. and Pop culture content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest Content from Reviews & Receptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest from Reviews & Receptions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'The Latest reviews and posts to the "Romanticism and Popular Culture" database. ';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Field: Thumbnail */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['alter']['text'] = '[field_profile_picture]';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_picture']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'media' => 'media',
    'review' => 'review',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_profile_picture' => 'field_profile_picture',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_profile_picture' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['latest_content_from_reviews_receptions'] = array(
    t('Master'),
    t('Latest from Reviews & Receptions'),
    t('See more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('The Latest reviews and posts to the "Romanticism and Popular Culture" database. '),
    t('[field_profile_picture]'),
    t('Block'),
    t('more'),
  );
  $export['latest_content_from_reviews_receptions'] = $view;

  $view = new view();
  $view->name = 'poetry_genre_slider';
  $view->description = 'Genre sliders for the front page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Genre Slider - Poetry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Correspondence';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Painter */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_painter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_painter']['delta_offset'] = '0';
  /* Field: Content: Delineator */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_delineator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_delineator']['delta_offset'] = '0';
  /* Field: Content: Illustrator */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_illustrator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_illustrator']['delta_offset'] = '0';
  /* Field: Content: Engraver */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_engraver']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_engraver']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_photographer']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_photographer']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_author']['delta_offset'] = '0';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_editor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_editor']['delta_offset'] = '0';
  /* Field: Content: Collaborator */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_creator_collaborator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_creator_collaborator']['delta_offset'] = '0';
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'F',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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

  /* Display: Poetry */
  $handler = $view->new_display('block', 'Poetry', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Poetry';
  $handler->display->display_options['display_description'] = 'Showing the Poetry genre';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner' => 0,
    'title' => 0,
    'field_original_publication_date' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '3';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_original_publication_date' => 'field_original_publication_date',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'genre_slider__368_x_auto_',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_original_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b> <strong> <em> <i>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'editions_index_page' => 'editions_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27194',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  $translatables['poetry_genre_slider'] = array(
    t('Master'),
    t('Correspondence'),
    t('See all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Newest first'),
    t('Oldest first'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>'),
    t('Read full description'),
    t('Painter'),
    t('Delineator'),
    t('Illustrator'),
    t('Engraver'),
    t('Photographer'),
    t('Author'),
    t('Editor'),
    t('Collaborator'),
    t('Image Date'),
    t('From the Collection'),
    t('<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>'),
    t('<a href="/node/[nid_2]">Full View</a>'),
    t('Original publication date -  start date (field_original_publication_date)'),
    t('Poetry'),
    t('Showing the Poetry genre'),
    t('more'),
  );
  $export['poetry_genre_slider'] = $view;

  $view = new view();
  $view->name = 'romantic_circles_people_front';
  $view->description = 'A tabular display of authors and their content on the site';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Romantic Circles People - Front';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Historical Authors';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Explore all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_profile_picture' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_profile_picture' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '5';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Below is selection of contemporary authors represented at RC. More information on documents authored by a person can be found by clicking a person\'s name. To view all contemporary authors represented on the site, go <a href="http://dev.rc.umd.edu/rc-secondary-authors">here</a>.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['label'] = 'Resource';
  $handler->display->display_options['fields']['field_resource_index']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'contributor' => 'contributor',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Field: Thumbnail (field_profile_picture:fid) */
  $handler->display->display_options['filters']['field_profile_picture_fid']['id'] = 'field_profile_picture_fid';
  $handler->display->display_options['filters']['field_profile_picture_fid']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['filters']['field_profile_picture_fid']['field'] = 'field_profile_picture_fid';
  $handler->display->display_options['filters']['field_profile_picture_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Pages Authored at RC (field_authored_at_rc1) */
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['id'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['table'] = 'field_data_field_authored_at_rc1';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['field'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['operator'] = 'not empty';

  /* Display: Primary */
  $handler = $view->new_display('page', 'Primary', 'page');
  $handler->display->display_options['display_description'] = 'Primary Authors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_profile_picture' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_profile_picture' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '6';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_profile_picture' => 'field_profile_picture',
    'title' => 'title',
    'field_profile_picture_1' => 'field_profile_picture_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Below is selection of historical authors represented at RC. More information on documents authored by a person can be found by clicking a person\'s name. To view all historical authors represented on the site, go <a href="http://dev.rc.umd.edu/rc-primary-authors">here</a>.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Thumbnail */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'cropped_rc_people',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_picture']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_profile_picture] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Parent Resource (field_resource_index) */
  $handler->display->display_options['sorts']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['sorts']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['sorts']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'rc-primary-authors-2';

  /* Display: Secondary */
  $handler = $view->new_display('page', 'Secondary', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contemporary Authors ';
  $handler->display->display_options['display_description'] = 'Secondary authors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_1' => 'title_1',
    'field_resource_index' => 'field_resource_index',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_authored_by_secondary__node']['id'] = 'reverse_field_authored_by_secondary__node';
  $handler->display->display_options['relationships']['reverse_field_authored_by_secondary__node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_authored_by_secondary__node']['field'] = 'reverse_field_authored_by_secondary__node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_page' => 'forthcoming_page',
  );
  $handler->display->display_options['path'] = 'rc-secondary-authors';

  /* Display: Editors */
  $handler = $view->new_display('page', 'Editors', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Editors';
  $handler->display->display_options['display_description'] = 'Editors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Below is selection of editors at RC. More information on resources by a person can be found by clicking a person\'s name. To view all contemporary authors represented on the site, go <a href="http://dev.rc.umd.edu/rc-editors">here</a>.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_edited_by_target_id']['id'] = 'field_edited_by_target_id';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['table'] = 'field_data_field_edited_by';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['field'] = 'field_edited_by_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_resource' => 'forthcoming_resource',
  );
  $handler->display->display_options['path'] = 'rc-editors';

  /* Display: Contributors */
  $handler = $view->new_display('page', 'Contributors', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Index of Contributors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'title_3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_2' => 'title_2',
    'title_3' => 'title_3',
    'title_1' => 'title_1',
    'field_resource_index' => 'title_1',
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
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '  |  ',
      'empty_column' => 0,
    ),
    'field_resource_index' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_edited_by_target_id']['id'] = 'field_edited_by_target_id';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['table'] = 'field_data_field_edited_by';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['field'] = 'field_edited_by_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_3']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_3']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'field_authored_by_primary__target_id';
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value_1']['id'] = 'field_surname_value_1';
  $handler->display->display_options['sorts']['field_surname_value_1']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value_1']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value_1']['relationship'] = 'field_authored_by_secondary__target_id';
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value_2']['id'] = 'field_surname_value_2';
  $handler->display->display_options['sorts']['field_surname_value_2']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value_2']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value_2']['relationship'] = 'field_edited_by_target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['filters']['title_2']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  $handler->display->display_options['path'] = 'about/rc-contributors';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Thumbnail */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'cropped_rc_people',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_picture']['delta_offset'] = '0';
  $translatables['romantic_circles_people_front'] = array(
    t('Master'),
    t('Historical Authors'),
    t('Explore all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Below is selection of contemporary authors represented at RC. More information on documents authored by a person can be found by clicking a person\'s name. To view all contemporary authors represented on the site, go <a href="http://dev.rc.umd.edu/rc-secondary-authors">here</a>.'),
    t('Content entity referenced from field_authored_by_primary_'),
    t('Resource'),
    t('Primary'),
    t('Primary Authors'),
    t('more'),
    t('Below is selection of historical authors represented at RC. More information on documents authored by a person can be found by clicking a person\'s name. To view all historical authors represented on the site, go <a href="http://dev.rc.umd.edu/rc-primary-authors">here</a>.'),
    t('[field_profile_picture] [title]'),
    t('Secondary'),
    t('Contemporary Authors '),
    t('Secondary authors'),
    t('Content entity referenced from field_authored_by_secondary_'),
    t('Content referencing Content from field_authored_by_secondary_'),
    t('Parent Resource'),
    t('Editors'),
    t('Below is selection of editors at RC. More information on resources by a person can be found by clicking a person\'s name. To view all contemporary authors represented on the site, go <a href="http://dev.rc.umd.edu/rc-editors">here</a>.'),
    t('Content entity referenced from field_edited_by'),
    t('Contributors'),
    t('Index of Contributors'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content pane'),
    t('View panes'),
  );
  $export['romantic_circles_people_front'] = $view;

  return $export;
}
