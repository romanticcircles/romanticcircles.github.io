<?php
/**
 * @file
 * rcfrankenstein.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rcfrankenstein_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frankenstein_content_at_rc';
  $page->task = 'page';
  $page->admin_title = 'Frankenstein content at RC';
  $page->admin_description = '';
  $page->path = 'frankenstein';
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
  $handler->name = 'page_frankenstein_content_at_rc__panel';
  $handler->task = 'page';
  $handler->subtask = 'frankenstein_content_at_rc';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
          0 => 3,
          1 => 1,
          2 => 'main-row',
          3 => 2,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left2',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Right2',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left2' => array(
        'type' => 'region',
        'title' => 'left2',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left3',
          1 => 'bottom1',
        ),
        'parent' => 'main',
        'class' => 'bottom1',
        'hide_empty' => 0,
      ),
      'bottom1' => array(
        'type' => 'region',
        'title' => 'Right3',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'top',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom1_',
        ),
        'parent' => 'main',
        'class' => 'left3',
        'hide_empty' => 0,
      ),
      'left3' => array(
        'type' => 'region',
        'title' => 'left3',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom1_' => array(
        'type' => 'region',
        'title' => 'bottom1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left2' => NULL,
      'bottom1' => NULL,
      'top' => NULL,
      'left3' => NULL,
      'bottom1_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Frankenstein at RC';
  $display->uuid = '399ae787-d232-42e6-8d10-ccd937f76645';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_frankenstein_content_at_rc__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-216e8880-b57f-4898-9c25-f944064712a9';
  $pane->panel = 'bottom1';
  $pane->type = 'views_panes';
  $pane->subtype = 'FrankensteinatRC2-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '216e8880-b57f-4898-9c25-f944064712a9';
  $display->content['new-216e8880-b57f-4898-9c25-f944064712a9'] = $pane;
  $display->panels['bottom1'][0] = 'new-216e8880-b57f-4898-9c25-f944064712a9';
  $pane = new stdClass();
  $pane->pid = 'new-6d9b7d3f-58b8-4113-9087-0b0a4d9b2c28';
  $pane->panel = 'bottom1_';
  $pane->type = 'views_panes';
  $pane->subtype = 'FrankensteinatRC2-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d9b7d3f-58b8-4113-9087-0b0a4d9b2c28';
  $display->content['new-6d9b7d3f-58b8-4113-9087-0b0a4d9b2c28'] = $pane;
  $display->panels['bottom1_'][0] = 'new-6d9b7d3f-58b8-4113-9087-0b0a4d9b2c28';
  $pane = new stdClass();
  $pane->pid = 'new-6aef4c4b-d7ab-4301-b6d2-7a7e36f9cf69';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'FrankensteinatRC2-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6aef4c4b-d7ab-4301-b6d2-7a7e36f9cf69';
  $display->content['new-6aef4c4b-d7ab-4301-b6d2-7a7e36f9cf69'] = $pane;
  $display->panels['center'][0] = 'new-6aef4c4b-d7ab-4301-b6d2-7a7e36f9cf69';
  $pane = new stdClass();
  $pane->pid = 'new-6c946b6e-da5e-4bd0-b7b7-15cb895a0ed9';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'FrankensteinatRC2-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6c946b6e-da5e-4bd0-b7b7-15cb895a0ed9';
  $display->content['new-6c946b6e-da5e-4bd0-b7b7-15cb895a0ed9'] = $pane;
  $display->panels['left'][0] = 'new-6c946b6e-da5e-4bd0-b7b7-15cb895a0ed9';
  $pane = new stdClass();
  $pane->pid = 'new-fe2b85f4-2018-4d39-b393-f20950fd8456';
  $pane->panel = 'left2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="pub-praxis" class="pub-vertical">
<div class="pub-title">Praxis Series</div>
<img src="/sites/default/files/prax-front-bg2.png"/>
<div class="contentHover">
	<span class="pub-caption">Digital scholarly essays organized thematically by volume: from the gothic to discourses of empire, and many others.</span>
</div>
</div>',
    'format' => '3',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fe2b85f4-2018-4d39-b393-f20950fd8456';
  $display->content['new-fe2b85f4-2018-4d39-b393-f20950fd8456'] = $pane;
  $display->panels['left2'][0] = 'new-fe2b85f4-2018-4d39-b393-f20950fd8456';
  $pane = new stdClass();
  $pane->pid = 'new-d69b16ed-e4a5-41dd-b70e-4bf24edf77c5';
  $pane->panel = 'left2';
  $pane->type = 'views_panes';
  $pane->subtype = 'FrankensteinatRC2-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd69b16ed-e4a5-41dd-b70e-4bf24edf77c5';
  $display->content['new-d69b16ed-e4a5-41dd-b70e-4bf24edf77c5'] = $pane;
  $display->panels['left2'][1] = 'new-d69b16ed-e4a5-41dd-b70e-4bf24edf77c5';
  $pane = new stdClass();
  $pane->pid = 'new-9025bcb7-efc2-4c0d-9b13-65fa6c81885e';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'FrankensteinatRC2-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9025bcb7-efc2-4c0d-9b13-65fa6c81885e';
  $display->content['new-9025bcb7-efc2-4c0d-9b13-65fa6c81885e'] = $pane;
  $display->panels['right'][0] = 'new-9025bcb7-efc2-4c0d-9b13-65fa6c81885e';
  $pane = new stdClass();
  $pane->pid = 'new-a509c116-2bc0-4e2c-ac3b-f603814e3176';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="descbig">This is a "custom content" pane in the Panel that we can use to add a description of what users are seeing on this page.</div>',
    'format' => '3',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a509c116-2bc0-4e2c-ac3b-f603814e3176';
  $display->content['new-a509c116-2bc0-4e2c-ac3b-f603814e3176'] = $pane;
  $display->panels['top'][0] = 'new-a509c116-2bc0-4e2c-ac3b-f603814e3176';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6c946b6e-da5e-4bd0-b7b7-15cb895a0ed9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frankenstein_content_at_rc'] = $page;

  return $pages;

}
