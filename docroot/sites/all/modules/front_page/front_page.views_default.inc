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
  $handler->display->display_options['title'] = 'Fiction';
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

  /* Display: Gallery Home */
  $handler = $view->new_display('page', 'Gallery Home', 'galleryhome');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Content: Main Author */
  $handler->display->display_options['fields']['field_main_author']['id'] = 'field_main_author';
  $handler->display->display_options['fields']['field_main_author']['table'] = 'field_data_field_main_author';
  $handler->display->display_options['fields']['field_main_author']['field'] = 'field_main_author';
  $handler->display->display_options['fields']['field_main_author']['label'] = 'by';
  $handler->display->display_options['fields']['field_main_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_author']['delta_offset'] = '0';
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    27181 => '27181',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
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
  $handler->display->display_options['title'] = 'Selected Images from the RC Gallery';
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
    'nid_1' => 0,
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
    'nid_1' => 0,
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

  /* Display: Featured */
  $handler = $view->new_display('block', 'Featured', 'featured');
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
  $translatables['gallery_slider'] = array(
    t('Master'),
    t('Fiction'),
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
    t('Gallery Home'),
    t('<h1 id="page-title">Images in the Gallery</h1>'),
    t('<h4 class="boldblue" style="text-align:center;">Gallery Editors: [view]</h4>'),
    t('Displaying @start - @end of @total images'),
    t('by'),
    t('Block'),
    t('Selected Images from the RC Gallery'),
    t('more'),
    t('Random'),
    t('Featured'),
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
  $handler->display->display_options['use_more_text'] = 'See all';
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
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
    t('See all'),
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
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
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
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
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
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
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
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
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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

  return $export;
}
