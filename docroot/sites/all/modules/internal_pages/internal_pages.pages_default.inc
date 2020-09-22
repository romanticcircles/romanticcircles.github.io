<?php
/**
 * @file
 * internal_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function internal_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a232d29a-545d-4337-8b99-9e3d37c5b18c';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Page Content Override',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'editions_page' => 'editions_page',
              'forthcoming_page' => 'forthcoming_page',
              'pedagogies_page' => 'pedagogies_page',
              'praxis_page' => 'praxis_page',
              'reference_page' => 'reference_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'about',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '79.93607200108156',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_title',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'top_title' => array(
        'type' => 'region',
        'title' => 'Top Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'about' => array(
        'type' => 'region',
        'title' => 'About',
        'width' => '20.06392799891844',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'about' => NULL,
      'top_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1293bd01-ae7f-456f-b7b4-814cc8a51bea';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_a232d29a-545d-4337-8b99-9e3d37c5b18c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e51a4123-bf84-4403-ae3e-e3ed0b1b2c21';
  $pane->panel = 'about';
  $pane->type = 'views';
  $pane->subtype = 'praxis_sidebar_icon';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'e51a4123-bf84-4403-ae3e-e3ed0b1b2c21';
  $display->content['new-e51a4123-bf84-4403-ae3e-e3ed0b1b2c21'] = $pane;
  $display->panels['about'][0] = 'new-e51a4123-bf84-4403-ae3e-e3ed0b1b2c21';
  $pane = new stdClass();
  $pane->pid = 'new-0ebc1e04-0585-46a1-a3ad-6d4b3a36a02f';
  $pane->panel = 'about';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resource_index';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
      'colorbox_node_link' => 0,
      'colorbox_node_classes' => '',
      'colorbox_node_width' => '600',
      'colorbox_node_height' => '600',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '0ebc1e04-0585-46a1-a3ad-6d4b3a36a02f';
  $display->content['new-0ebc1e04-0585-46a1-a3ad-6d4b3a36a02f'] = $pane;
  $display->panels['about'][1] = 'new-0ebc1e04-0585-46a1-a3ad-6d4b3a36a02f';
  $pane = new stdClass();
  $pane->pid = 'new-6856cb66-8ba5-43b7-9419-d97b5271d8a1';
  $pane->panel = 'about';
  $pane->type = 'views';
  $pane->subtype = 'node_metadata';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6856cb66-8ba5-43b7-9419-d97b5271d8a1';
  $display->content['new-6856cb66-8ba5-43b7-9419-d97b5271d8a1'] = $pane;
  $display->panels['about'][2] = 'new-6856cb66-8ba5-43b7-9419-d97b5271d8a1';
  $pane = new stdClass();
  $pane->pid = 'new-83ac07fe-3505-412e-b24e-dd0a76bcef92';
  $pane->panel = 'about';
  $pane->type = 'views';
  $pane->subtype = 'abstracts';
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
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '83ac07fe-3505-412e-b24e-dd0a76bcef92';
  $display->content['new-83ac07fe-3505-412e-b24e-dd0a76bcef92'] = $pane;
  $display->panels['about'][3] = 'new-83ac07fe-3505-412e-b24e-dd0a76bcef92';
  $pane = new stdClass();
  $pane->pid = 'new-f6201ea2-abec-4d9d-8150-35b4802002b5';
  $pane->panel = 'about';
  $pane->type = 'views';
  $pane->subtype = 'about_the_author_s_';
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
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f6201ea2-abec-4d9d-8150-35b4802002b5';
  $display->content['new-f6201ea2-abec-4d9d-8150-35b4802002b5'] = $pane;
  $display->panels['about'][4] = 'new-f6201ea2-abec-4d9d-8150-35b4802002b5';
  $pane = new stdClass();
  $pane->pid = 'new-7613e491-ccd0-472e-a431-2cb2e8ab0fd9';
  $pane->panel = 'about';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Export label',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="teaserItem"><h3 class="center">Exports</h3>',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7613e491-ccd0-472e-a431-2cb2e8ab0fd9';
  $display->content['new-7613e491-ccd0-472e-a431-2cb2e8ab0fd9'] = $pane;
  $display->panels['about'][5] = 'new-7613e491-ccd0-472e-a431-2cb2e8ab0fd9';
  $pane = new stdClass();
  $pane->pid = 'new-031805b2-dffd-44a4-b05f-c39f7799b380';
  $pane->panel = 'about';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a href="/exports/%node:nid/node.json" class="teiButton">JSON</a> <small><a class="colorbox-inline" href="?width=250&height=250&inline=true#id-of-content">What\'s this?</a></small>

<div style="display: none;">
<div id="id-of-content">As you\'re browsing RC, you might see small buttons scattered on various pages. These buttons let you download that page\'s content in a ready-to-use data file! Learn more on our <a href="/data">RC Data</a> page.</div>
</div>',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '031805b2-dffd-44a4-b05f-c39f7799b380';
  $display->content['new-031805b2-dffd-44a4-b05f-c39f7799b380'] = $pane;
  $display->panels['about'][6] = 'new-031805b2-dffd-44a4-b05f-c39f7799b380';
  $pane = new stdClass();
  $pane->pid = 'new-81ef1fc3-44d6-40c7-b984-3aadebe9156a';
  $pane->panel = 'about';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_xml_tei';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '81ef1fc3-44d6-40c7-b984-3aadebe9156a';
  $display->content['new-81ef1fc3-44d6-40c7-b984-3aadebe9156a'] = $pane;
  $display->panels['about'][7] = 'new-81ef1fc3-44d6-40c7-b984-3aadebe9156a';
  $pane = new stdClass();
  $pane->pid = 'new-786b7667-63b1-4ea1-9c69-eeef306160f5';
  $pane->panel = 'about';
  $pane->type = 'panels_mini';
  $pane->subtype = 'export_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '786b7667-63b1-4ea1-9c69-eeef306160f5';
  $display->content['new-786b7667-63b1-4ea1-9c69-eeef306160f5'] = $pane;
  $display->panels['about'][8] = 'new-786b7667-63b1-4ea1-9c69-eeef306160f5';
  $pane = new stdClass();
  $pane->pid = 'new-d6af27c9-e08b-40fb-9b9e-43f614e59961';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
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
  $pane->uuid = 'd6af27c9-e08b-40fb-9b9e-43f614e59961';
  $display->content['new-d6af27c9-e08b-40fb-9b9e-43f614e59961'] = $pane;
  $display->panels['center'][0] = 'new-d6af27c9-e08b-40fb-9b9e-43f614e59961';
  $pane = new stdClass();
  $pane->pid = 'new-9083f85d-dbe4-48aa-bce6-4a9296ea83d0';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '9083f85d-dbe4-48aa-bce6-4a9296ea83d0';
  $display->content['new-9083f85d-dbe4-48aa-bce6-4a9296ea83d0'] = $pane;
  $display->panels['center'][1] = 'new-9083f85d-dbe4-48aa-bce6-4a9296ea83d0';
  $pane = new stdClass();
  $pane->pid = 'new-76443f7b-f32c-42ee-a1d1-d4e9427aac15';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '76443f7b-f32c-42ee-a1d1-d4e9427aac15';
  $display->content['new-76443f7b-f32c-42ee-a1d1-d4e9427aac15'] = $pane;
  $display->panels['center'][2] = 'new-76443f7b-f32c-42ee-a1d1-d4e9427aac15';
  $pane = new stdClass();
  $pane->pid = 'new-c6af2d5a-b037-4813-9d69-edcac554a19d';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'places_mentioned';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'c6af2d5a-b037-4813-9d69-edcac554a19d';
  $display->content['new-c6af2d5a-b037-4813-9d69-edcac554a19d'] = $pane;
  $display->panels['center'][3] = 'new-c6af2d5a-b037-4813-9d69-edcac554a19d';
  $pane = new stdClass();
  $pane->pid = 'new-c17852a3-d6ab-49df-bbe5-14af53d041f5';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'places_mentioned';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c17852a3-d6ab-49df-bbe5-14af53d041f5';
  $display->content['new-c17852a3-d6ab-49df-bbe5-14af53d041f5'] = $pane;
  $display->panels['center'][4] = 'new-c17852a3-d6ab-49df-bbe5-14af53d041f5';
  $pane = new stdClass();
  $pane->pid = 'new-1284dad7-b420-4845-8dca-93e2fea10e0e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'places_mentioned';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1284dad7-b420-4845-8dca-93e2fea10e0e';
  $display->content['new-1284dad7-b420-4845-8dca-93e2fea10e0e'] = $pane;
  $display->panels['center'][5] = 'new-1284dad7-b420-4845-8dca-93e2fea10e0e';
  $pane = new stdClass();
  $pane->pid = 'new-d815de8d-b960-4720-819a-55dfa6b38020';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'pedagogies_hangouts_videos';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd815de8d-b960-4720-819a-55dfa6b38020';
  $display->content['new-d815de8d-b960-4720-819a-55dfa6b38020'] = $pane;
  $display->panels['center'][6] = 'new-d815de8d-b960-4720-819a-55dfa6b38020';
  $pane = new stdClass();
  $pane->pid = 'new-0e8165f5-c5f3-482a-a4dc-840d4e2ecaa5';
  $pane->panel = 'top_title';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
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
  $pane->uuid = '0e8165f5-c5f3-482a-a4dc-840d4e2ecaa5';
  $display->content['new-0e8165f5-c5f3-482a-a4dc-840d4e2ecaa5'] = $pane;
  $display->panels['top_title'][0] = 'new-0e8165f5-c5f3-482a-a4dc-840d4e2ecaa5';
  $pane = new stdClass();
  $pane->pid = 'new-c9692ffb-6c96-42aa-a188-47fa215adc7f';
  $pane->panel = 'top_title';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = FALSE;
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
  $pane->uuid = 'c9692ffb-6c96-42aa-a188-47fa215adc7f';
  $display->content['new-c9692ffb-6c96-42aa-a188-47fa215adc7f'] = $pane;
  $display->panels['top_title'][1] = 'new-c9692ffb-6c96-42aa-a188-47fa215adc7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76443f7b-f32c-42ee-a1d1-d4e9427aac15';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a232d29a-545d-4337-8b99-9e3d37c5b18c'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Resource Content Override',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'editions_index_page' => 'editions_index_page',
              'forthcoming_resource' => 'forthcoming_resource',
              'pedagogies_index_page' => 'pedagogies_index_page',
              'praxis_index_page' => 'praxis_index_page',
              'reference_index_page' => 'reference_index_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'about_related',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '79.95736836041019',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'Top',
        'hide_empty' => 1,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'about_related' => array(
        'type' => 'region',
        'title' => 'About/related',
        'width' => '20.04263163958982',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => array(
        'corner_location' => 'panel',
      ),
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'top' => NULL,
      'about_related' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'da74fcba-21ee-488f-a95d-3a4dc7558631';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f552cd61-2456-414b-a174-a17a372d14a5';
  $pane->panel = 'about_related';
  $pane->type = 'views';
  $pane->subtype = 'related_resources_algorithmic';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '7',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
      1 => '',
    ),
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
  $pane->uuid = 'f552cd61-2456-414b-a174-a17a372d14a5';
  $display->content['new-f552cd61-2456-414b-a174-a17a372d14a5'] = $pane;
  $display->panels['about_related'][0] = 'new-f552cd61-2456-414b-a174-a17a372d14a5';
  $pane = new stdClass();
  $pane->pid = 'new-9d484e6a-e328-47f8-817d-5e6c4ffd7a0b';
  $pane->panel = 'center';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = FALSE;
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
  $pane->uuid = '9d484e6a-e328-47f8-817d-5e6c4ffd7a0b';
  $display->content['new-9d484e6a-e328-47f8-817d-5e6c4ffd7a0b'] = $pane;
  $display->panels['center'][0] = 'new-9d484e6a-e328-47f8-817d-5e6c4ffd7a0b';
  $pane = new stdClass();
  $pane->pid = 'new-5d16089c-9232-4bc5-8b70-5d73979d7740';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5d16089c-9232-4bc5-8b70-5d73979d7740';
  $display->content['new-5d16089c-9232-4bc5-8b70-5d73979d7740'] = $pane;
  $display->panels['center'][1] = 'new-5d16089c-9232-4bc5-8b70-5d73979d7740';
  $pane = new stdClass();
  $pane->pid = 'new-a3ac2d66-d410-4db4-8dd6-4ea790a43e8f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_index_banner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'index_banner',
      'image_link' => 'content',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a3ac2d66-d410-4db4-8dd6-4ea790a43e8f';
  $display->content['new-a3ac2d66-d410-4db4-8dd6-4ea790a43e8f'] = $pane;
  $display->panels['center'][2] = 'new-a3ac2d66-d410-4db4-8dd6-4ea790a43e8f';
  $pane = new stdClass();
  $pane->pid = 'new-a161399e-c4fa-40c4-b701-f163c4569eda';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a161399e-c4fa-40c4-b701-f163c4569eda';
  $display->content['new-a161399e-c4fa-40c4-b701-f163c4569eda'] = $pane;
  $display->panels['center'][3] = 'new-a161399e-c4fa-40c4-b701-f163c4569eda';
  $pane = new stdClass();
  $pane->pid = 'new-a8bfad3e-82b4-405d-a13f-8e655cf90ced';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'pedagogies_hangouts_videos';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pedagogies/hangouts',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a8bfad3e-82b4-405d-a13f-8e655cf90ced';
  $display->content['new-a8bfad3e-82b4-405d-a13f-8e655cf90ced'] = $pane;
  $display->panels['center'][4] = 'new-a8bfad3e-82b4-405d-a13f-8e655cf90ced';
  $pane = new stdClass();
  $pane->pid = 'new-688e8f1e-b812-44dd-9524-e23bcc5cf6a4';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'related_resources_algorithmic';
  $pane->shown = FALSE;
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '688e8f1e-b812-44dd-9524-e23bcc5cf6a4';
  $display->content['new-688e8f1e-b812-44dd-9524-e23bcc5cf6a4'] = $pane;
  $display->panels['center'][5] = 'new-688e8f1e-b812-44dd-9524-e23bcc5cf6a4';
  $pane = new stdClass();
  $pane->pid = 'new-32ec19d8-dd9f-4b57-b838-9ea66913e20e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'pages_also_of_interest';
  $pane->shown = FALSE;
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '32ec19d8-dd9f-4b57-b838-9ea66913e20e';
  $display->content['new-32ec19d8-dd9f-4b57-b838-9ea66913e20e'] = $pane;
  $display->panels['center'][6] = 'new-32ec19d8-dd9f-4b57-b838-9ea66913e20e';
  $pane = new stdClass();
  $pane->pid = 'new-dc38541c-edf0-4e97-8854-a54345ca5324';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'About this Resource',
    'body' => '<!-- -->',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'teaserItemSimple',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'dc38541c-edf0-4e97-8854-a54345ca5324';
  $display->content['new-dc38541c-edf0-4e97-8854-a54345ca5324'] = $pane;
  $display->panels['center'][7] = 'new-dc38541c-edf0-4e97-8854-a54345ca5324';
  $pane = new stdClass();
  $pane->pid = 'new-2f6a72df-3b74-4cfe-8d4e-f72a917f2edd';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Data Export',
    'title' => '',
    'body' => '<span style="font-size:110%;font-weight:bold;">Export:</span> <a href="/data/exports/%node:nid/full-edition.csv" class="teiButton">CSV</a> <small><a class="colorbox-inline" href="?width=250&height=250&inline=true#id-of-content">What\'s this?</a></small>

<div style="display: none;">
<div id="id-of-content">As you\'re browsing RC, you might see small buttons scattered on various pages. These buttons let you download that page\'s content in a ready-to-use data file! Learn more on our <a href="/data">RC Data</a> page.</div>
</div>',
    'format' => '3',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'node-data-export',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '2f6a72df-3b74-4cfe-8d4e-f72a917f2edd';
  $display->content['new-2f6a72df-3b74-4cfe-8d4e-f72a917f2edd'] = $pane;
  $display->panels['center'][8] = 'new-2f6a72df-3b74-4cfe-8d4e-f72a917f2edd';
  $pane = new stdClass();
  $pane->pid = 'new-3dec6c5b-4394-4172-922d-410d3899aff4';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_main_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Author',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '3dec6c5b-4394-4172-922d-410d3899aff4';
  $display->content['new-3dec6c5b-4394-4172-922d-410d3899aff4'] = $pane;
  $display->panels['center'][9] = 'new-3dec6c5b-4394-4172-922d-410d3899aff4';
  $pane = new stdClass();
  $pane->pid = 'new-985c00d5-74dc-4f25-add5-bae74386ea9e';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_authored_by_primary_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Author',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '985c00d5-74dc-4f25-add5-bae74386ea9e';
  $display->content['new-985c00d5-74dc-4f25-add5-bae74386ea9e'] = $pane;
  $display->panels['center'][10] = 'new-985c00d5-74dc-4f25-add5-bae74386ea9e';
  $pane = new stdClass();
  $pane->pid = 'new-6ec4918e-55e0-498a-b2f7-047cc21413d5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_authored_by_secondary_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Author',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '6ec4918e-55e0-498a-b2f7-047cc21413d5';
  $display->content['new-6ec4918e-55e0-498a-b2f7-047cc21413d5'] = $pane;
  $display->panels['center'][11] = 'new-6ec4918e-55e0-498a-b2f7-047cc21413d5';
  $pane = new stdClass();
  $pane->pid = 'new-164b31c3-2e74-4444-a6d3-a5ed9ffadcf8';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_edited_by';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Editor',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '164b31c3-2e74-4444-a6d3-a5ed9ffadcf8';
  $display->content['new-164b31c3-2e74-4444-a6d3-a5ed9ffadcf8'] = $pane;
  $display->panels['center'][12] = 'new-164b31c3-2e74-4444-a6d3-a5ed9ffadcf8';
  $pane = new stdClass();
  $pane->pid = 'new-633f166e-11d2-43ef-b0b3-7a3b868ed31a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_original_publication_date';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:forthcoming_resource:taxonomy_vocabulary_52',
        'settings' => array(
          'taxonomy_vocabulary_52' => array(
            'und' => array(
              0 => array(
                'tid' => '27206',
              ),
            ),
          ),
          'taxonomy_vocabulary_52_tid' => '27206',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'date_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'format_type' => 'rc_published_date',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '633f166e-11d2-43ef-b0b3-7a3b868ed31a';
  $display->content['new-633f166e-11d2-43ef-b0b3-7a3b868ed31a'] = $pane;
  $display->panels['center'][13] = 'new-633f166e-11d2-43ef-b0b3-7a3b868ed31a';
  $pane = new stdClass();
  $pane->pid = 'new-611db4ff-5d55-4539-9dca-8d5df8554cd5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partial_publication_date';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:forthcoming_resource:taxonomy_vocabulary_52',
        'settings' => array(
          'taxonomy_vocabulary_52' => array(
            'und' => array(
              0 => array(
                'tid' => '27206',
              ),
            ),
          ),
          'taxonomy_vocabulary_52_tid' => '27206',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'partial_date_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'format' => 'long',
      'use_override' => 'long',
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
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '611db4ff-5d55-4539-9dca-8d5df8554cd5';
  $display->content['new-611db4ff-5d55-4539-9dca-8d5df8554cd5'] = $pane;
  $display->panels['center'][14] = 'new-611db4ff-5d55-4539-9dca-8d5df8554cd5';
  $pane = new stdClass();
  $pane->pid = 'new-563fbd3f-6b73-4fca-b9e3-1436588e81e1';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'rc_published_date',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Published @ RC',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '563fbd3f-6b73-4fca-b9e3-1436588e81e1';
  $display->content['new-563fbd3f-6b73-4fca-b9e3-1436588e81e1'] = $pane;
  $display->panels['center'][15] = 'new-563fbd3f-6b73-4fca-b9e3-1436588e81e1';
  $pane = new stdClass();
  $pane->pid = 'new-0f8b6a28-a79b-4fb7-b0c1-0ffe5fc68821';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resource_technical_editor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '0f8b6a28-a79b-4fb7-b0c1-0ffe5fc68821';
  $display->content['new-0f8b6a28-a79b-4fb7-b0c1-0ffe5fc68821'] = $pane;
  $display->panels['center'][16] = 'new-0f8b6a28-a79b-4fb7-b0c1-0ffe5fc68821';
  $pane = new stdClass();
  $pane->pid = 'new-54e29f20-7c2d-495e-bd66-7bdde7403b0c';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:taxonomy_vocabulary_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '54e29f20-7c2d-495e-bd66-7bdde7403b0c';
  $display->content['new-54e29f20-7c2d-495e-bd66-7bdde7403b0c'] = $pane;
  $display->panels['center'][17] = 'new-54e29f20-7c2d-495e-bd66-7bdde7403b0c';
  $pane = new stdClass();
  $pane->pid = 'new-029bcbeb-608b-44fe-8248-225b4ffb746c';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_person_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '029bcbeb-608b-44fe-8248-225b4ffb746c';
  $display->content['new-029bcbeb-608b-44fe-8248-225b4ffb746c'] = $pane;
  $display->panels['center'][18] = 'new-029bcbeb-608b-44fe-8248-225b4ffb746c';
  $pane = new stdClass();
  $pane->pid = 'new-38e00c8a-6a60-4ae0-8815-a537a268216a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_city_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '38e00c8a-6a60-4ae0-8815-a537a268216a';
  $display->content['new-38e00c8a-6a60-4ae0-8815-a537a268216a'] = $pane;
  $display->panels['center'][19] = 'new-38e00c8a-6a60-4ae0-8815-a537a268216a';
  $pane = new stdClass();
  $pane->pid = 'new-75895a73-8132-4803-bbbf-aec7dba6fa68';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_provinceorstate_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = '75895a73-8132-4803-bbbf-aec7dba6fa68';
  $display->content['new-75895a73-8132-4803-bbbf-aec7dba6fa68'] = $pane;
  $display->panels['center'][20] = 'new-75895a73-8132-4803-bbbf-aec7dba6fa68';
  $pane = new stdClass();
  $pane->pid = 'new-06692c89-c420-43c2-87ad-27d086bb1e07';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_country_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '06692c89-c420-43c2-87ad-27d086bb1e07';
  $display->content['new-06692c89-c420-43c2-87ad-27d086bb1e07'] = $pane;
  $display->panels['center'][21] = 'new-06692c89-c420-43c2-87ad-27d086bb1e07';
  $pane = new stdClass();
  $pane->pid = 'new-fd4e332e-d4e2-45ba-8d12-d6049b10d8b9';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_region_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = 'fd4e332e-d4e2-45ba-8d12-d6049b10d8b9';
  $display->content['new-fd4e332e-d4e2-45ba-8d12-d6049b10d8b9'] = $pane;
  $display->panels['center'][22] = 'new-fd4e332e-d4e2-45ba-8d12-d6049b10d8b9';
  $pane = new stdClass();
  $pane->pid = 'new-5784c6c9-1fef-4b99-a11c-ca87403a272d';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_continent_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = '5784c6c9-1fef-4b99-a11c-ca87403a272d';
  $display->content['new-5784c6c9-1fef-4b99-a11c-ca87403a272d'] = $pane;
  $display->panels['center'][23] = 'new-5784c6c9-1fef-4b99-a11c-ca87403a272d';
  $pane = new stdClass();
  $pane->pid = 'new-ddd3dcd5-25bd-4bae-83a1-a8ebf3f8fc18';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_naturalfeature_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 24;
  $pane->locks = array();
  $pane->uuid = 'ddd3dcd5-25bd-4bae-83a1-a8ebf3f8fc18';
  $display->content['new-ddd3dcd5-25bd-4bae-83a1-a8ebf3f8fc18'] = $pane;
  $display->panels['center'][24] = 'new-ddd3dcd5-25bd-4bae-83a1-a8ebf3f8fc18';
  $pane = new stdClass();
  $pane->pid = 'new-67b32f25-d5c8-4995-bedc-8e908fd7b031';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'map_per_node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => 'Map',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 25;
  $pane->locks = array();
  $pane->uuid = '67b32f25-d5c8-4995-bedc-8e908fd7b031';
  $display->content['new-67b32f25-d5c8-4995-bedc-8e908fd7b031'] = $pane;
  $display->panels['center'][25] = 'new-67b32f25-d5c8-4995-bedc-8e908fd7b031';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Page Content Colorbox',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'editions_page' => 'editions_page',
              'forthcoming_page' => 'forthcoming_page',
              'pedagogies_page' => 'pedagogies_page',
              'praxis_page' => 'praxis_page',
              'reference_page' => 'reference_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'is_colorbox_node',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_second' => array(
        'corner_location' => 'panel',
      ),
      'middle' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '48162818-2230-4a32-a379-65611040d34e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2031c877-3c5f-424f-b624-6930bbe33980';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'praxis_sidebar_icon';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'leftFloat',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2031c877-3c5f-424f-b624-6930bbe33980';
  $display->content['new-2031c877-3c5f-424f-b624-6930bbe33980'] = $pane;
  $display->panels['middle'][0] = 'new-2031c877-3c5f-424f-b624-6930bbe33980';
  $pane = new stdClass();
  $pane->pid = 'new-9a4fdc77-6cb6-497f-98e3-a4ac80664179';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = FALSE;
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
  $pane->uuid = '9a4fdc77-6cb6-497f-98e3-a4ac80664179';
  $display->content['new-9a4fdc77-6cb6-497f-98e3-a4ac80664179'] = $pane;
  $display->panels['middle'][1] = 'new-9a4fdc77-6cb6-497f-98e3-a4ac80664179';
  $pane = new stdClass();
  $pane->pid = 'new-8074c046-8c9d-4801-b67d-89c23c652544';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8074c046-8c9d-4801-b67d-89c23c652544';
  $display->content['new-8074c046-8c9d-4801-b67d-89c23c652544'] = $pane;
  $display->panels['middle'][2] = 'new-8074c046-8c9d-4801-b67d-89c23c652544';
  $pane = new stdClass();
  $pane->pid = 'new-abf4d1b8-953c-4757-8c88-6e3cf5361cba';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'bodyFloat',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'abf4d1b8-953c-4757-8c88-6e3cf5361cba';
  $display->content['new-abf4d1b8-953c-4757-8c88-6e3cf5361cba'] = $pane;
  $display->panels['middle'][3] = 'new-abf4d1b8-953c-4757-8c88-6e3cf5361cba';
  $pane = new stdClass();
  $pane->pid = 'new-295f85b8-1bd1-4db0-8890-aff15558b0c4';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '295f85b8-1bd1-4db0-8890-aff15558b0c4';
  $display->content['new-295f85b8-1bd1-4db0-8890-aff15558b0c4'] = $pane;
  $display->panels['middle'][4] = 'new-295f85b8-1bd1-4db0-8890-aff15558b0c4';
  $pane = new stdClass();
  $pane->pid = 'new-bdbb6ff5-409b-44e1-83b7-71b2840f1085';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_authored_by_primary_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Author',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'bdbb6ff5-409b-44e1-83b7-71b2840f1085';
  $display->content['new-bdbb6ff5-409b-44e1-83b7-71b2840f1085'] = $pane;
  $display->panels['middle'][5] = 'new-bdbb6ff5-409b-44e1-83b7-71b2840f1085';
  $pane = new stdClass();
  $pane->pid = 'new-d86c3ec4-71ac-43ef-9b51-58c2957db7d2';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_authored_by_secondary_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Author',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd86c3ec4-71ac-43ef-9b51-58c2957db7d2';
  $display->content['new-d86c3ec4-71ac-43ef-9b51-58c2957db7d2'] = $pane;
  $display->panels['middle'][6] = 'new-d86c3ec4-71ac-43ef-9b51-58c2957db7d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}
