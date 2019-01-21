<?php
/**
 * @file
 * front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'alt_front_page';
  $page->task = 'page';
  $page->admin_title = 'Alt Front Page';
  $page->admin_description = 'An alternative redesign for the front page.';
  $page->path = 'alt_front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_alt_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'alt_front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'test',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '25.007265320483206',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'test' => array(
        'type' => 'region',
        'title' => 'About',
        'width' => '74.9927346795168',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'genre_slider_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'genre_slider_' => array(
        'type' => 'region',
        'title' => 'Genre Slider',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'test' => NULL,
      'genre_slider' => NULL,
      'genre_slider_' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => 'main-tabs',
        'panel_tab_id_pattern' => 'region',
      ),
      'explore_' => NULL,
      'connect_' => NULL,
      'visualize_' => NULL,
      'more_' => NULL,
    ),
    'genre_slider_' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '048d1083-76b7-455e-8218-2201c8a2dc03';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_alt_front_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dd17eb16-b07d-4ffa-b46b-5fe631d42e8d';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '22319',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd17eb16-b07d-4ffa-b46b-5fe631d42e8d';
  $display->content['new-dd17eb16-b07d-4ffa-b46b-5fe631d42e8d'] = $pane;
  $display->panels['center'][0] = 'new-dd17eb16-b07d-4ffa-b46b-5fe631d42e8d';
  $pane = new stdClass();
  $pane->pid = 'new-2f6885a9-f85b-4953-8873-2823d8500d8e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-87';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f6885a9-f85b-4953-8873-2823d8500d8e';
  $display->content['new-2f6885a9-f85b-4953-8873-2823d8500d8e'] = $pane;
  $display->panels['center'][1] = 'new-2f6885a9-f85b-4953-8873-2823d8500d8e';
  $pane = new stdClass();
  $pane->pid = 'new-31c392fd-cd38-4f65-805b-fde61821c3e6';
  $pane->panel = 'genre_slider_';
  $pane->type = 'panels_mini';
  $pane->subtype = 'front_page_genres';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '31c392fd-cd38-4f65-805b-fde61821c3e6';
  $display->content['new-31c392fd-cd38-4f65-805b-fde61821c3e6'] = $pane;
  $display->panels['genre_slider_'][0] = 'new-31c392fd-cd38-4f65-805b-fde61821c3e6';
  $pane = new stdClass();
  $pane->pid = 'new-3d0810ea-62ed-40c5-97f6-1a29011abf46';
  $pane->panel = 'genre_slider_';
  $pane->type = 'panels_mini';
  $pane->subtype = 'connect';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3d0810ea-62ed-40c5-97f6-1a29011abf46';
  $display->content['new-3d0810ea-62ed-40c5-97f6-1a29011abf46'] = $pane;
  $display->panels['genre_slider_'][1] = 'new-3d0810ea-62ed-40c5-97f6-1a29011abf46';
  $pane = new stdClass();
  $pane->pid = 'new-c31ccbe6-83c4-432b-a2df-3133674c316f';
  $pane->panel = 'genre_slider_';
  $pane->type = 'panels_mini';
  $pane->subtype = 'visualize';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c31ccbe6-83c4-432b-a2df-3133674c316f';
  $display->content['new-c31ccbe6-83c4-432b-a2df-3133674c316f'] = $pane;
  $display->panels['genre_slider_'][2] = 'new-c31ccbe6-83c4-432b-a2df-3133674c316f';
  $pane = new stdClass();
  $pane->pid = 'new-13f3700c-e142-499f-a008-7114d5a03a27';
  $pane->panel = 'genre_slider_';
  $pane->type = 'panels_mini';
  $pane->subtype = 'media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '13f3700c-e142-499f-a008-7114d5a03a27';
  $display->content['new-13f3700c-e142-499f-a008-7114d5a03a27'] = $pane;
  $display->panels['genre_slider_'][3] = 'new-13f3700c-e142-499f-a008-7114d5a03a27';
  $pane = new stdClass();
  $pane->pid = 'new-fb8add5e-c51f-4a57-aa73-967d55434c49';
  $pane->panel = 'test';
  $pane->type = 'views';
  $pane->subtype = 'frontpage_slider_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fb8add5e-c51f-4a57-aa73-967d55434c49';
  $display->content['new-fb8add5e-c51f-4a57-aa73-967d55434c49'] = $pane;
  $display->panels['test'][0] = 'new-fb8add5e-c51f-4a57-aa73-967d55434c49';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['alt_front_page'] = $page;

  return $pages;

}
