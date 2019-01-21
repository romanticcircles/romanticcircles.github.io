<?php
/**
 * @file
 * reviews_and_ficrep.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function reviews_and_ficrep_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__media_items';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Media items',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'media_items',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'media' => 'media',
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
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '69.96747447284275',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
        'class' => 'main-content',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => '30.032525527157247',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 6,
          2 => 7,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_body',
        ),
        'parent' => '2',
        'class' => 'reception-node-main-content',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'other_media',
        ),
        'parent' => '3',
        'class' => 'receptions-node-sidebar-1',
        'hide_empty' => 0,
      ),
      'main_body' => array(
        'type' => 'region',
        'title' => 'Main Body',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'other_media' => array(
        'type' => 'region',
        'title' => 'Other Media',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'receptions-other-media',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'recommender_1',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'recommender_2',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'recommender_1' => array(
        'type' => 'region',
        'title' => 'Recommender 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      'recommender_2' => array(
        'type' => 'region',
        'title' => 'Recommender-2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_bottom' => NULL,
      'two_33_66_second' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'center' => NULL,
      'main_body' => NULL,
      'other_media' => NULL,
      'recommender_1' => NULL,
      'recommender_2' => NULL,
    ),
    'two_33_66_second' => array(
      'style' => '-1',
    ),
    'two_66_33_bottom' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2795e386-de77-4d6b-ab55-00fe7a542e8a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39ba2625-7d13-443f-af8f-26276295c136';
    $pane->panel = 'center';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-taxonomy';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 'menu-taxonomy:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'menu_name' => 'menu-taxonomy',
      'parent_mlid' => '0',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '39ba2625-7d13-443f-af8f-26276295c136';
    $display->content['new-39ba2625-7d13-443f-af8f-26276295c136'] = $pane;
    $display->panels['center'][0] = 'new-39ba2625-7d13-443f-af8f-26276295c136';
    $pane = new stdClass();
    $pane->pid = 'new-dc7ffc9c-6ab6-43b2-a5bc-5bd7584be03b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'superfish-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dc7ffc9c-6ab6-43b2-a5bc-5bd7584be03b';
    $display->content['new-dc7ffc9c-6ab6-43b2-a5bc-5bd7584be03b'] = $pane;
    $display->panels['center'][1] = 'new-dc7ffc9c-6ab6-43b2-a5bc-5bd7584be03b';
    $pane = new stdClass();
    $pane->pid = 'new-bcfca9ce-f2e6-414c-adeb-33b8b2f49b00';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => 'media-node-title',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '%title',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bcfca9ce-f2e6-414c-adeb-33b8b2f49b00';
    $display->content['new-bcfca9ce-f2e6-414c-adeb-33b8b2f49b00'] = $pane;
    $display->panels['center'][2] = 'new-bcfca9ce-f2e6-414c-adeb-33b8b2f49b00';
    $pane = new stdClass();
    $pane->pid = 'new-e891ef1f-8ebd-4cf4-a09b-9aff3c3bc637';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'receptions-node-thumbnail',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e891ef1f-8ebd-4cf4-a09b-9aff3c3bc637';
    $display->content['new-e891ef1f-8ebd-4cf4-a09b-9aff3c3bc637'] = $pane;
    $display->panels['main_body'][0] = 'new-e891ef1f-8ebd-4cf4-a09b-9aff3c3bc637';
    $pane = new stdClass();
    $pane->pid = 'new-c6a3a0ce-39a6-4f98-a82e-c2078dd770cb';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c6a3a0ce-39a6-4f98-a82e-c2078dd770cb';
    $display->content['new-c6a3a0ce-39a6-4f98-a82e-c2078dd770cb'] = $pane;
    $display->panels['main_body'][1] = 'new-c6a3a0ce-39a6-4f98-a82e-c2078dd770cb';
    $pane = new stdClass();
    $pane->pid = 'new-b94081b1-a48b-44c3-9c67-bc987ed841ca';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b94081b1-a48b-44c3-9c67-bc987ed841ca';
    $display->content['new-b94081b1-a48b-44c3-9c67-bc987ed841ca'] = $pane;
    $display->panels['main_body'][2] = 'new-b94081b1-a48b-44c3-9c67-bc987ed841ca';
    $pane = new stdClass();
    $pane->pid = 'new-64827d77-37e2-467d-82a9-1851c18df81f';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '64827d77-37e2-467d-82a9-1851c18df81f';
    $display->content['new-64827d77-37e2-467d-82a9-1851c18df81f'] = $pane;
    $display->panels['main_body'][3] = 'new-64827d77-37e2-467d-82a9-1851c18df81f';
    $pane = new stdClass();
    $pane->pid = 'new-01bfce2d-0d46-4365-bb29-d363987c3a22';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '01bfce2d-0d46-4365-bb29-d363987c3a22';
    $display->content['new-01bfce2d-0d46-4365-bb29-d363987c3a22'] = $pane;
    $display->panels['main_body'][4] = 'new-01bfce2d-0d46-4365-bb29-d363987c3a22';
    $pane = new stdClass();
    $pane->pid = 'new-0e53bd22-0ed5-4e6d-b9f6-2b6ff9cc4c9d';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0e53bd22-0ed5-4e6d-b9f6-2b6ff9cc4c9d';
    $display->content['new-0e53bd22-0ed5-4e6d-b9f6-2b6ff9cc4c9d'] = $pane;
    $display->panels['main_body'][5] = 'new-0e53bd22-0ed5-4e6d-b9f6-2b6ff9cc4c9d';
    $pane = new stdClass();
    $pane->pid = 'new-932eff6a-91a2-4f4b-a40c-8aa8a964310a';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '932eff6a-91a2-4f4b-a40c-8aa8a964310a';
    $display->content['new-932eff6a-91a2-4f4b-a40c-8aa8a964310a'] = $pane;
    $display->panels['main_body'][6] = 'new-932eff6a-91a2-4f4b-a40c-8aa8a964310a';
    $pane = new stdClass();
    $pane->pid = 'new-c9926696-5249-407c-aab4-5e2fe747bb00';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c9926696-5249-407c-aab4-5e2fe747bb00';
    $display->content['new-c9926696-5249-407c-aab4-5e2fe747bb00'] = $pane;
    $display->panels['main_body'][7] = 'new-c9926696-5249-407c-aab4-5e2fe747bb00';
    $pane = new stdClass();
    $pane->pid = 'new-c76bf693-8d41-4bae-8f2c-648d985bba58';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_album';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_plain',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'c76bf693-8d41-4bae-8f2c-648d985bba58';
    $display->content['new-c76bf693-8d41-4bae-8f2c-648d985bba58'] = $pane;
    $display->panels['main_body'][8] = 'new-c76bf693-8d41-4bae-8f2c-648d985bba58';
    $pane = new stdClass();
    $pane->pid = 'new-955e3b66-6d6d-464f-a668-983abe5f962d';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_original_publication_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '955e3b66-6d6d-464f-a668-983abe5f962d';
    $display->content['new-955e3b66-6d6d-464f-a668-983abe5f962d'] = $pane;
    $display->panels['main_body'][9] = 'new-955e3b66-6d6d-464f-a668-983abe5f962d';
    $pane = new stdClass();
    $pane->pid = 'new-9067db78-21ff-41e3-adb0-283b411395b1';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publication_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '9067db78-21ff-41e3-adb0-283b411395b1';
    $display->content['new-9067db78-21ff-41e3-adb0-283b411395b1'] = $pane;
    $display->panels['main_body'][10] = 'new-9067db78-21ff-41e3-adb0-283b411395b1';
    $pane = new stdClass();
    $pane->pid = 'new-eea4a0e3-b797-4a31-a613-2cc725371831';
    $pane->panel = 'main_body';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'eea4a0e3-b797-4a31-a613-2cc725371831';
    $display->content['new-eea4a0e3-b797-4a31-a613-2cc725371831'] = $pane;
    $display->panels['main_body'][11] = 'new-eea4a0e3-b797-4a31-a613-2cc725371831';
    $pane = new stdClass();
    $pane->pid = 'new-acfe5697-82b5-4455-8b39-19fbbf6657b8';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'Tags: ',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata bottom',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'acfe5697-82b5-4455-8b39-19fbbf6657b8';
    $display->content['new-acfe5697-82b5-4455-8b39-19fbbf6657b8'] = $pane;
    $display->panels['main_body'][12] = 'new-acfe5697-82b5-4455-8b39-19fbbf6657b8';
    $pane = new stdClass();
    $pane->pid = 'new-8ef9f36d-8c3a-4fed-93b5-0248f3566a4b';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'Tags',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata bottom',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '8ef9f36d-8c3a-4fed-93b5-0248f3566a4b';
    $display->content['new-8ef9f36d-8c3a-4fed-93b5-0248f3566a4b'] = $pane;
    $display->panels['main_body'][13] = 'new-8ef9f36d-8c3a-4fed-93b5-0248f3566a4b';
    $pane = new stdClass();
    $pane->pid = 'new-9317de0c-45ba-4477-aa24-08cdab3ab752';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_taxonomy_links_2-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata bottom',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '9317de0c-45ba-4477-aa24-08cdab3ab752';
    $display->content['new-9317de0c-45ba-4477-aa24-08cdab3ab752'] = $pane;
    $display->panels['main_body'][14] = 'new-9317de0c-45ba-4477-aa24-08cdab3ab752';
    $pane = new stdClass();
    $pane->pid = 'new-11f92871-601e-42eb-883c-1a8828c56d93';
    $pane->panel = 'main_body';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '11f92871-601e-42eb-883c-1a8828c56d93';
    $display->content['new-11f92871-601e-42eb-883c-1a8828c56d93'] = $pane;
    $display->panels['main_body'][15] = 'new-11f92871-601e-42eb-883c-1a8828c56d93';
    $pane = new stdClass();
    $pane->pid = 'new-f2c7e5d5-738a-43cc-9bde-52effb65acba';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'popular_tags_media_-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'f2c7e5d5-738a-43cc-9bde-52effb65acba';
    $display->content['new-f2c7e5d5-738a-43cc-9bde-52effb65acba'] = $pane;
    $display->panels['main_body'][16] = 'new-f2c7e5d5-738a-43cc-9bde-52effb65acba';
    $pane = new stdClass();
    $pane->pid = 'new-72d3365c-fac4-430f-ae44-d469a07716ef';
    $pane->panel = 'other_media';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h3 class="center"><a style="text-transform: uppercase; font-size: 1.2em;" href="/reference/ficrep/suggestions" target="_blank"><strong>Suggestions/Feedback</strong></a></h3>',
      'format' => '2',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '72d3365c-fac4-430f-ae44-d469a07716ef';
    $display->content['new-72d3365c-fac4-430f-ae44-d469a07716ef'] = $pane;
    $display->panels['other_media'][0] = 'new-72d3365c-fac4-430f-ae44-d469a07716ef';
    $pane = new stdClass();
    $pane->pid = 'new-b78a8bfc-9610-4252-bcc4-2ed84ee3b91e';
    $pane->panel = 'other_media';
    $pane->type = 'views';
    $pane->subtype = 'media_recommender';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
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
    $pane->uuid = 'b78a8bfc-9610-4252-bcc4-2ed84ee3b91e';
    $display->content['new-b78a8bfc-9610-4252-bcc4-2ed84ee3b91e'] = $pane;
    $display->panels['other_media'][1] = 'new-b78a8bfc-9610-4252-bcc4-2ed84ee3b91e';
    $pane = new stdClass();
    $pane->pid = 'new-ca8dad43-d2be-427a-b458-22c0d4e35c52';
    $pane->panel = 'recommender_1';
    $pane->type = 'views';
    $pane->subtype = 'media_genre_creator_recommender';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rec-director',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca8dad43-d2be-427a-b458-22c0d4e35c52';
    $display->content['new-ca8dad43-d2be-427a-b458-22c0d4e35c52'] = $pane;
    $display->panels['recommender_1'][0] = 'new-ca8dad43-d2be-427a-b458-22c0d4e35c52';
    $pane = new stdClass();
    $pane->pid = 'new-99b0164d-6548-4dcd-994c-b753885280f5';
    $pane->panel = 'recommender_1';
    $pane->type = 'views';
    $pane->subtype = 'media_genre_creator_recommender';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rec-recording',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '99b0164d-6548-4dcd-994c-b753885280f5';
    $display->content['new-99b0164d-6548-4dcd-994c-b753885280f5'] = $pane;
    $display->panels['recommender_1'][1] = 'new-99b0164d-6548-4dcd-994c-b753885280f5';
    $pane = new stdClass();
    $pane->pid = 'new-95242e26-7fd7-43f5-b6a0-0862bf81491c';
    $pane->panel = 'recommender_2';
    $pane->type = 'views';
    $pane->subtype = 'media_genre_creator_recommender';
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
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rec-genre',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95242e26-7fd7-43f5-b6a0-0862bf81491c';
    $display->content['new-95242e26-7fd7-43f5-b6a0-0862bf81491c'] = $pane;
    $display->panels['recommender_2'][0] = 'new-95242e26-7fd7-43f5-b6a0-0862bf81491c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__media_items'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__review_override';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Review Override',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'review_override',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'review' => 'review',
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
  $display->layout = 'flexible:2_col_standard';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 6,
        ),
        'parent' => NULL,
      ),
      6 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 7,
          1 => 8,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_',
        ),
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_body',
          1 => 'sidebar',
        ),
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_body' => array(
        'type' => 'region',
        'title' => 'Main body',
        'width' => '69.97157890694012',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '30.028421093059876',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'center' => NULL,
      'col_2_reg_1' => NULL,
      'col_2_reg_2' => NULL,
      'col_2_reg_3' => NULL,
      'col_2_reg_4' => NULL,
      'center_' => NULL,
      'main_body' => NULL,
      'sidebar' => NULL,
      'other_media' => NULL,
      'recommender_1' => NULL,
      'recommender_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c95c31e9-8b8f-408b-8b61-0f9263ef3cc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63f719e8-aa07-40a5-889d-d29d4eac435d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'superfish-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '63f719e8-aa07-40a5-889d-d29d4eac435d';
    $display->content['new-63f719e8-aa07-40a5-889d-d29d4eac435d'] = $pane;
    $display->panels['center'][0] = 'new-63f719e8-aa07-40a5-889d-d29d4eac435d';
    $pane = new stdClass();
    $pane->pid = 'new-c74f2fd5-6058-4d0f-9e8a-dd93fba3c58e';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => 'media-node-title',
      'class' => '',
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
    $pane->uuid = 'c74f2fd5-6058-4d0f-9e8a-dd93fba3c58e';
    $display->content['new-c74f2fd5-6058-4d0f-9e8a-dd93fba3c58e'] = $pane;
    $display->panels['center'][1] = 'new-c74f2fd5-6058-4d0f-9e8a-dd93fba3c58e';
    $pane = new stdClass();
    $pane->pid = 'new-5f6411ca-09e8-48ab-91cd-0f4698a63daf';
    $pane->panel = 'main_body';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '5f6411ca-09e8-48ab-91cd-0f4698a63daf';
    $display->content['new-5f6411ca-09e8-48ab-91cd-0f4698a63daf'] = $pane;
    $display->panels['main_body'][0] = 'new-5f6411ca-09e8-48ab-91cd-0f4698a63daf';
    $pane = new stdClass();
    $pane->pid = 'new-8dd43a96-9f18-4d18-a3b7-7e1e9b636ad5';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_entry_type';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
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
      'css_class' => 'block-title leftFloat',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8dd43a96-9f18-4d18-a3b7-7e1e9b636ad5';
    $display->content['new-8dd43a96-9f18-4d18-a3b7-7e1e9b636ad5'] = $pane;
    $display->panels['main_body'][1] = 'new-8dd43a96-9f18-4d18-a3b7-7e1e9b636ad5';
    $pane = new stdClass();
    $pane->pid = 'new-1e777b1b-77e1-4f78-9785-da86b4a861be';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'reviews_taxonomy_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1e777b1b-77e1-4f78-9785-da86b4a861be';
    $display->content['new-1e777b1b-77e1-4f78-9785-da86b4a861be'] = $pane;
    $display->panels['main_body'][2] = 'new-1e777b1b-77e1-4f78-9785-da86b4a861be';
    $pane = new stdClass();
    $pane->pid = 'new-d4f03b79-0fdf-4cab-9bc8-6bbb7d4df647';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
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
      'css_class' => 'block-title leftFloat',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd4f03b79-0fdf-4cab-9bc8-6bbb7d4df647';
    $display->content['new-d4f03b79-0fdf-4cab-9bc8-6bbb7d4df647'] = $pane;
    $display->panels['main_body'][3] = 'new-d4f03b79-0fdf-4cab-9bc8-6bbb7d4df647';
    $pane = new stdClass();
    $pane->pid = 'new-f2426e4f-1ec5-4f78-aea5-79f34b9c8495';
    $pane->panel = 'main_body';
    $pane->type = 'views_panes';
    $pane->subtype = 'reviews_taxonomy_links-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rc-metadata',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f2426e4f-1ec5-4f78-aea5-79f34b9c8495';
    $display->content['new-f2426e4f-1ec5-4f78-aea5-79f34b9c8495'] = $pane;
    $display->panels['main_body'][4] = 'new-f2426e4f-1ec5-4f78-aea5-79f34b9c8495';
    $pane = new stdClass();
    $pane->pid = 'new-9fe8ef4b-e8c0-48bb-87ae-84da1725752b';
    $pane->panel = 'main_body';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9fe8ef4b-e8c0-48bb-87ae-84da1725752b';
    $display->content['new-9fe8ef4b-e8c0-48bb-87ae-84da1725752b'] = $pane;
    $display->panels['main_body'][5] = 'new-9fe8ef4b-e8c0-48bb-87ae-84da1725752b';
    $pane = new stdClass();
    $pane->pid = 'new-c9324fd7-f85e-4522-b41f-56858716989d';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'review_jacket__175_x_auto_',
        'image_link' => '',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'leftFloat',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c9324fd7-f85e-4522-b41f-56858716989d';
    $display->content['new-c9324fd7-f85e-4522-b41f-56858716989d'] = $pane;
    $display->panels['main_body'][6] = 'new-c9324fd7-f85e-4522-b41f-56858716989d';
    $pane = new stdClass();
    $pane->pid = 'new-e7932f16-3886-4554-a0f9-d7d0a58fa1a3';
    $pane->panel = 'main_body';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bodyFloat',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e7932f16-3886-4554-a0f9-d7d0a58fa1a3';
    $display->content['new-e7932f16-3886-4554-a0f9-d7d0a58fa1a3'] = $pane;
    $display->panels['main_body'][7] = 'new-e7932f16-3886-4554-a0f9-d7d0a58fa1a3';
    $pane = new stdClass();
    $pane->pid = 'new-0a0920f1-e7f2-4b82-a100-bea6a21d961b';
    $pane->panel = 'main_body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:taxonomy_vocabulary_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '0a0920f1-e7f2-4b82-a100-bea6a21d961b';
    $display->content['new-0a0920f1-e7f2-4b82-a100-bea6a21d961b'] = $pane;
    $display->panels['main_body'][8] = 'new-0a0920f1-e7f2-4b82-a100-bea6a21d961b';
    $pane = new stdClass();
    $pane->pid = 'new-95e510af-7776-4950-b077-dc15447b47ae';
    $pane->panel = 'other_media';
    $pane->type = 'views';
    $pane->subtype = 'reviews_archive';
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
      'display' => 'block',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95e510af-7776-4950-b077-dc15447b47ae';
    $display->content['new-95e510af-7776-4950-b077-dc15447b47ae'] = $pane;
    $display->panels['other_media'][0] = 'new-95e510af-7776-4950-b077-dc15447b47ae';
    $pane = new stdClass();
    $pane->pid = 'new-e7098eef-214a-4dc4-b826-c8851c2da328';
    $pane->panel = 'recommender_1';
    $pane->type = 'views';
    $pane->subtype = 'reviews_blog_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
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
    $pane->uuid = 'e7098eef-214a-4dc4-b826-c8851c2da328';
    $display->content['new-e7098eef-214a-4dc4-b826-c8851c2da328'] = $pane;
    $display->panels['recommender_1'][0] = 'new-e7098eef-214a-4dc4-b826-c8851c2da328';
    $pane = new stdClass();
    $pane->pid = 'new-9a11790d-794b-4f17-a77e-559f9acc4b9e';
    $pane->panel = 'recommender_2';
    $pane->type = 'block';
    $pane->subtype = 'tagadelic-64';
    $pane->shown = FALSE;
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
    $pane->uuid = '9a11790d-794b-4f17-a77e-559f9acc4b9e';
    $display->content['new-9a11790d-794b-4f17-a77e-559f9acc4b9e'] = $pane;
    $display->panels['recommender_2'][0] = 'new-9a11790d-794b-4f17-a77e-559f9acc4b9e';
    $pane = new stdClass();
    $pane->pid = 'new-b239b122-57e0-42e4-b5ec-d0f8d215809f';
    $pane->panel = 'recommender_2';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = FALSE;
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
    $pane->uuid = 'b239b122-57e0-42e4-b5ec-d0f8d215809f';
    $display->content['new-b239b122-57e0-42e4-b5ec-d0f8d215809f'] = $pane;
    $display->panels['recommender_2'][1] = 'new-b239b122-57e0-42e4-b5ec-d0f8d215809f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__review_override'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function reviews_and_ficrep_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ficrep';
  $page->task = 'page';
  $page->admin_title = 'Ficrep';
  $page->admin_description = 'Landing page for Fictional Representations. Includes filters on a right sidebar.';
  $page->path = 'reference/ficrep_panel';
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
  $handler->name = 'page_ficrep_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ficrep';
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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'A list of novels, short stories, plays, films, and other fictional representations of historical Romantic figures',
        ),
        'abstract' => array(
          'value' => 'A list of novels, short stories, plays, films, and other fictional representations of historical Romantic figures',
        ),
        'keywords' => array(
          'value' => 'Romanticism, popular culture',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'three_50_25_25_top' => NULL,
      'three_50_25_25_first' => NULL,
      'three_50_25_25_second' => NULL,
      'three_50_25_25_third' => NULL,
      'three_50_25_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Fictional Representations of Romantics and Romanticism';
  $display->uuid = 'f7359a6c-e430-4297-94c7-7c1fe118947e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a9cd3af-7e3e-4fdd-8907-9ef28a895228';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ficrep bannner',
      'title' => '',
      'body' => '<a href="/reference/ficrep/"><img src="/sites/default/files/fict_body_banner.jpg"/></a>',
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
    $pane->uuid = '6a9cd3af-7e3e-4fdd-8907-9ef28a895228';
    $display->content['new-6a9cd3af-7e3e-4fdd-8907-9ef28a895228'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-6a9cd3af-7e3e-4fdd-8907-9ef28a895228';
    $pane = new stdClass();
    $pane->pid = 'new-3b5c1447-9e65-4bac-8099-a46c06aaf328';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ficrep-panel_pane_1';
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
    $pane->uuid = '3b5c1447-9e65-4bac-8099-a46c06aaf328';
    $display->content['new-3b5c1447-9e65-4bac-8099-a46c06aaf328'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-3b5c1447-9e65-4bac-8099-a46c06aaf328';
    $pane = new stdClass();
    $pane->pid = 'new-f9d2ea15-68ad-4bba-859b-04f86688a8f9';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-ficrep-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'side-filters',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f9d2ea15-68ad-4bba-859b-04f86688a8f9';
    $display->content['new-f9d2ea15-68ad-4bba-859b-04f86688a8f9'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-f9d2ea15-68ad-4bba-859b-04f86688a8f9';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-3b5c1447-9e65-4bac-8099-a46c06aaf328';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ficrep'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'review_entries_panel';
  $page->task = 'page';
  $page->admin_title = 'Review entries panel';
  $page->admin_description = 'panel for review entries';
  $page->path = 'rev-entries-panel';
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
  $handler->name = 'page_review_entries_panel__panel_context_486d3651-2e5c-4d89-94c2-6206f45ae91e';
  $handler->task = 'page';
  $handler->subtask = 'review_entries_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel rev',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'rev-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
          0 => 6,
          1 => 3,
        ),
        'parent' => 'canvas',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_left',
          1 => 'footer_center',
        ),
        'parent' => 'main',
        'class' => 'footer',
        'hide_empty' => 0,
      ),
      'footer_left' => array(
        'type' => 'region',
        'title' => 'footer left',
        'width' => '33.35168085814157',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'footer-left',
        'hide_empty' => 0,
      ),
      'footer_center' => array(
        'type' => 'region',
        'title' => 'footer center',
        'width' => '33.47236664524211',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'footer-center',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 10,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => '81.96711575273312',
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 11,
          1 => 9,
          2 => 12,
        ),
        'class' => 'column-left',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'empty_left',
          1 => 'column_right',
        ),
        'parent' => '8',
        'class' => 'col-row',
        'hide_empty' => 0,
      ),
      'column_right' => array(
        'type' => 'region',
        'title' => 'center-right',
        'width' => '60.4326201286285',
        'width_type' => '%',
        'parent' => '9',
        'class' => 'center-right',
        'hide_empty' => 0,
      ),
      'empty_left' => array(
        'type' => 'region',
        'title' => 'center-left',
        'width' => '39.5673798713715',
        'width_type' => '%',
        'parent' => '9',
        'class' => 'center-left',
        'hide_empty' => 1,
      ),
      10 => array(
        'type' => 'column',
        'width' => '18.032884247266885',
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 13,
        ),
        'class' => 'column-right',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left_',
          1 => 'top_center_',
        ),
        'parent' => '8',
        'class' => 'top-row',
        'hide_empty' => 0,
      ),
      'top_left_' => array(
        'type' => 'region',
        'title' => 'top-left',
        'width' => '56.80378918720888',
        'width_type' => '%',
        'parent' => '11',
        'class' => 'top-left',
        'hide_empty' => 0,
      ),
      'top_center_' => array(
        'type' => 'region',
        'title' => 'top-center',
        'width' => '43.19621081279112',
        'width_type' => '%',
        'parent' => '11',
        'class' => 'top-center',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_left_',
          1 => 'bottom_center_',
          2 => 'bottom_right_',
        ),
        'parent' => '8',
        'class' => 'bottom-left-row',
        'hide_empty' => 0,
      ),
      'bottom_left_' => array(
        'type' => 'region',
        'title' => 'bottom-left',
        'width' => '33.51389543099388',
        'width_type' => '%',
        'parent' => '12',
        'class' => 'bottom-left',
        'hide_empty' => 0,
      ),
      'bottom_center_' => array(
        'type' => 'region',
        'title' => 'bottom-center',
        'width' => '33.49793418166593',
        'width_type' => '%',
        'parent' => '12',
        'class' => 'bottom-center',
        'hide_empty' => 0,
      ),
      'bottom_right_' => array(
        'type' => 'region',
        'title' => 'bottom-right',
        'width' => '32.988170387340205',
        'width_type' => '%',
        'parent' => '12',
        'class' => 'bottom-right',
        'hide_empty' => 0,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_right_region',
        ),
        'parent' => '10',
        'class' => 'column-right-row',
        'hide_empty' => 0,
      ),
      'column_right_region' => array(
        'type' => 'region',
        'title' => 'column-right-region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'column-right-region',
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
      'left_region' => NULL,
      'right_region' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'bottom_center' => NULL,
      'top_center' => NULL,
      'top_left' => NULL,
      'footer_left' => NULL,
      'footer_center' => NULL,
      'footer_right' => NULL,
      'column_region' => NULL,
      'column_right_region' => NULL,
      'header_left_region' => NULL,
      'center_blank' => NULL,
      'blank_col' => NULL,
      'bottom_blank' => NULL,
      'column_right' => NULL,
      'empty_left' => NULL,
      'top_left_' => NULL,
      'top_center_' => NULL,
      'bottom_left_' => NULL,
      'bottom_center_' => NULL,
      'bottom_right_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Romantic Receptions';
  $display->uuid = '41e4a897-354d-4f13-8b89-6d3c2ee745c3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7788d4d7-eb99-49b3-b595-2da4090b45f2';
    $pane->panel = 'bottom_center_';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
      'display' => 'block_7',
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
    $pane->uuid = '7788d4d7-eb99-49b3-b595-2da4090b45f2';
    $display->content['new-7788d4d7-eb99-49b3-b595-2da4090b45f2'] = $pane;
    $display->panels['bottom_center_'][0] = 'new-7788d4d7-eb99-49b3-b595-2da4090b45f2';
    $pane = new stdClass();
    $pane->pid = 'new-dfc54c2f-6d43-414f-9e69-b6ee9d72063a';
    $pane->panel = 'bottom_left_';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
      'display' => 'block_4',
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
    $pane->uuid = 'dfc54c2f-6d43-414f-9e69-b6ee9d72063a';
    $display->content['new-dfc54c2f-6d43-414f-9e69-b6ee9d72063a'] = $pane;
    $display->panels['bottom_left_'][0] = 'new-dfc54c2f-6d43-414f-9e69-b6ee9d72063a';
    $pane = new stdClass();
    $pane->pid = 'new-d9467724-7a39-48e4-88b4-ec690eab9cdb';
    $pane->panel = 'bottom_right_';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
      'display' => 'block_5',
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
    $pane->uuid = 'd9467724-7a39-48e4-88b4-ec690eab9cdb';
    $display->content['new-d9467724-7a39-48e4-88b4-ec690eab9cdb'] = $pane;
    $display->panels['bottom_right_'][0] = 'new-d9467724-7a39-48e4-88b4-ec690eab9cdb';
    $pane = new stdClass();
    $pane->pid = 'new-ad8eeebe-32c1-4638-9820-a52d4c26a9df';
    $pane->panel = 'column_right';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
    $pane->uuid = 'ad8eeebe-32c1-4638-9820-a52d4c26a9df';
    $display->content['new-ad8eeebe-32c1-4638-9820-a52d4c26a9df'] = $pane;
    $display->panels['column_right'][0] = 'new-ad8eeebe-32c1-4638-9820-a52d4c26a9df';
    $pane = new stdClass();
    $pane->pid = 'new-2b698d96-51d6-4625-b692-aabb10875925';
    $pane->panel = 'column_right_region';
    $pane->type = 'views';
    $pane->subtype = 'ficrep';
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
    $pane->uuid = '2b698d96-51d6-4625-b692-aabb10875925';
    $display->content['new-2b698d96-51d6-4625-b692-aabb10875925'] = $pane;
    $display->panels['column_right_region'][0] = 'new-2b698d96-51d6-4625-b692-aabb10875925';
    $pane = new stdClass();
    $pane->pid = 'new-fbec61e9-b25a-4423-b8d5-9d540293d170';
    $pane->panel = 'empty_left';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
      'display' => 'block_6',
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
    $pane->uuid = 'fbec61e9-b25a-4423-b8d5-9d540293d170';
    $display->content['new-fbec61e9-b25a-4423-b8d5-9d540293d170'] = $pane;
    $display->panels['empty_left'][0] = 'new-fbec61e9-b25a-4423-b8d5-9d540293d170';
    $pane = new stdClass();
    $pane->pid = 'new-7a981761-7ab0-4882-945f-9e33403293a7';
    $pane->panel = 'footer_center';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
      'display' => 'page_1',
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
    $pane->uuid = '7a981761-7ab0-4882-945f-9e33403293a7';
    $display->content['new-7a981761-7ab0-4882-945f-9e33403293a7'] = $pane;
    $display->panels['footer_center'][0] = 'new-7a981761-7ab0-4882-945f-9e33403293a7';
    $pane = new stdClass();
    $pane->pid = 'new-a7b1087d-e30d-4404-abfe-d1eaa980ab9a';
    $pane->panel = 'footer_left';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = 'a7b1087d-e30d-4404-abfe-d1eaa980ab9a';
    $display->content['new-a7b1087d-e30d-4404-abfe-d1eaa980ab9a'] = $pane;
    $display->panels['footer_left'][0] = 'new-a7b1087d-e30d-4404-abfe-d1eaa980ab9a';
    $pane = new stdClass();
    $pane->pid = 'new-02cb42de-1823-40ce-bdc4-170821a87f2d';
    $pane->panel = 'top_center_';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
    $pane->uuid = '02cb42de-1823-40ce-bdc4-170821a87f2d';
    $display->content['new-02cb42de-1823-40ce-bdc4-170821a87f2d'] = $pane;
    $display->panels['top_center_'][0] = 'new-02cb42de-1823-40ce-bdc4-170821a87f2d';
    $pane = new stdClass();
    $pane->pid = 'new-04489c36-56f3-4f70-8b7a-f3a9bf7ae74f';
    $pane->panel = 'top_left_';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
    $pane->uuid = '04489c36-56f3-4f70-8b7a-f3a9bf7ae74f';
    $display->content['new-04489c36-56f3-4f70-8b7a-f3a9bf7ae74f'] = $pane;
    $display->panels['top_left_'][0] = 'new-04489c36-56f3-4f70-8b7a-f3a9bf7ae74f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-04489c36-56f3-4f70-8b7a-f3a9bf7ae74f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['review_entries_panel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'romantic_reception_hm_';
  $page->task = 'page';
  $page->admin_title = 'Romantic Receptions';
  $page->admin_description = '';
  $page->path = 'reviews-and-receptions';
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
  $handler->name = 'page_romantic_reception_hm___panel_context_b38671f2-d2c8-4611-969f-4e9eb86b5042';
  $handler->task = 'page';
  $handler->subtask = 'romantic_reception_hm_';
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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The new Romantic Circles Reviews and Receptions section is an innovative venture in contemporary Romantic scholarship, comprising short reviews of recent work, live BookChats, listicles, a forum for debate, and an evolving compendium of appearances of Romanticism in popular culture.',
        ),
        'abstract' => array(
          'value' => 'The new Romantic Circles Reviews and Receptions section is an innovative venture in contemporary Romantic scholarship, comprising short reviews of recent work, live BookChats, listicles, a forum for debate, and an evolving compendium of appearances of Romanticism in popular culture.',
        ),
        'keywords' => array(
          'value' => 'Reviews, book reviews, reception, reception history, lists, listicles, google hangouts',
        ),
      ),
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
          1 => 2,
          2 => 11,
          3 => 12,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'title-header-receptions',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'title-header-romantic-receptions',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
          2 => 5,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
          1 => 7,
        ),
        'class' => 'c1',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 8,
        ),
        'class' => 'c2',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 9,
          1 => 10,
        ),
        'class' => 'c3',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'c1_r1_reg1',
        ),
        'parent' => '3',
        'class' => 'c1-r1',
        'hide_empty' => 0,
      ),
      'c1_r1_reg1' => array(
        'type' => 'region',
        'title' => 'c1-r1-reg1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'c1-r1-reg1',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'c1_r2_reg1',
          1 => 'c1_r1_reg2',
        ),
        'parent' => '3',
        'class' => 'c1-r2',
        'hide_empty' => 0,
      ),
      'c1_r2_reg1' => array(
        'type' => 'region',
        'title' => 'c1-r2-reg1',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => 'c1-r1-reg1',
        'hide_empty' => 0,
      ),
      'c1_r1_reg2' => array(
        'type' => 'region',
        'title' => 'c1-r1-reg2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => 'c1-r1-reg2',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'c2_r1_reg1',
        ),
        'parent' => '4',
        'class' => 'c2-r1',
        'hide_empty' => 0,
      ),
      'c2_r1_reg1' => array(
        'type' => 'region',
        'title' => 'c2-r1-reg1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => 'c2-r1-reg1',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'c3_r1_reg1',
        ),
        'parent' => '5',
        'class' => 'c3-r1',
        'hide_empty' => 0,
      ),
      'c3_r1_reg1' => array(
        'type' => 'region',
        'title' => 'c3-r1-reg1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => 'c3-r1-reg1',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'c3_r2_reg2',
        ),
        'parent' => '5',
        'class' => 'c3-r2',
        'hide_empty' => 0,
      ),
      'c3_r2_reg2' => array(
        'type' => 'region',
        'title' => 'c3-r2-reg2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'c3-r2-reg2',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r2_reg1',
          1 => 'r2_reg2',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'r2_reg1' => array(
        'type' => 'region',
        'title' => 'r2-reg1',
        'width' => 50,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'r2-reg1',
        'hide_empty' => 0,
      ),
      'r2_reg2' => array(
        'type' => 'region',
        'title' => 'r2-reg2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'r2-reg2',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'search_receptions_button',
          1 => 'all_stuffs',
        ),
        'parent' => 'main',
        'class' => 'search-receptions',
        'hide_empty' => 0,
      ),
      'search_receptions_button' => array(
        'type' => 'region',
        'title' => 'search-receptions-button',
        'width' => 50,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'search-receptions-button',
        'hide_empty' => 0,
      ),
      'all_stuffs' => array(
        'type' => 'region',
        'title' => 'all-stuffs',
        'width' => 50,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'all-stuffs',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'row_1_mid' => NULL,
      'row_1_right' => NULL,
      'row_2_far_left' => NULL,
      'row_2_mid_left' => NULL,
      'row_2_mid_right' => NULL,
      'row_2_far_right' => NULL,
      'row_3_left' => NULL,
      'row_3_right' => NULL,
      'submit_receptions_button' => NULL,
      'search_bar' => NULL,
      'all_stuffs' => NULL,
      'far_left' => NULL,
      'row_3_far_right' => NULL,
      'forthcoming' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'mid_left' => NULL,
      'mid_center' => NULL,
      'mid_left_' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'about_region' => NULL,
      'submit_receptions_button_' => NULL,
      'all_stuffs_' => NULL,
      'right_col_top_row' => NULL,
      'right_col_row_2_region_2' => NULL,
      'mid_col_row_1_region_1' => NULL,
      'block_layout_row_2_col_2_row_1_region_1' => NULL,
      'block_layout_row_2_col_2_row_1_region_1_' => NULL,
      'search_receptions_buttons' => NULL,
      'block_layout_row_1_col_3_row_2_region_2' => NULL,
      'block_layout_row_1_col_3_row_1_region_1' => NULL,
      'block_layout_row_1_col_2_row_1_region_1' => NULL,
      'block_layout_row_1_col_1_row_2_region_1' => NULL,
      'block_layout_row_1_col_1_row_2_region_1_' => NULL,
      'block_layout_row_1_col_1_row_2_region_2' => NULL,
      'block_layout_row_2_region_1' => NULL,
      'block_layout_row_2_region_2' => NULL,
      'search_receptions_button' => NULL,
      'c1_r1_reg1' => NULL,
      'c1_r2_reg1' => NULL,
      'c1_r1_reg2' => NULL,
      'c2_r1_reg1' => NULL,
      'c3_r1_reg1' => NULL,
      'c3_r2_reg2' => NULL,
      'r2_reg1' => NULL,
      'r2_reg2' => NULL,
    ),
    'header' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Reviews & Receptions';
  $display->uuid = '949efee4-3a0d-4f21-8a47-3c773e0f768b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-32d0600b-4f18-48fc-989f-68d1734422f4';
    $pane->panel = 'all_stuffs';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
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
      'display' => 'page_1',
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
    $pane->uuid = '32d0600b-4f18-48fc-989f-68d1734422f4';
    $display->content['new-32d0600b-4f18-48fc-989f-68d1734422f4'] = $pane;
    $display->panels['all_stuffs'][0] = 'new-32d0600b-4f18-48fc-989f-68d1734422f4';
    $pane = new stdClass();
    $pane->pid = 'new-b47f772e-b570-44d7-ae2c-9f505cca86c8';
    $pane->panel = 'all_stuffs';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2>To browse reviews&nbsp;in our older blog format, click <a href="/reviews-blog">here</a>.</h2>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b47f772e-b570-44d7-ae2c-9f505cca86c8';
    $display->content['new-b47f772e-b570-44d7-ae2c-9f505cca86c8'] = $pane;
    $display->panels['all_stuffs'][1] = 'new-b47f772e-b570-44d7-ae2c-9f505cca86c8';
    $pane = new stdClass();
    $pane->pid = 'new-c87e8349-5363-4f24-9c4d-a0815988834a';
    $pane->panel = 'c1_r1_reg1';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-short',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c87e8349-5363-4f24-9c4d-a0815988834a';
    $display->content['new-c87e8349-5363-4f24-9c4d-a0815988834a'] = $pane;
    $display->panels['c1_r1_reg1'][0] = 'new-c87e8349-5363-4f24-9c4d-a0815988834a';
    $pane = new stdClass();
    $pane->pid = 'new-9ac8817a-c140-4a8d-b548-e5b42da82a9d';
    $pane->panel = 'c1_r1_reg1';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => 'block-long',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9ac8817a-c140-4a8d-b548-e5b42da82a9d';
    $display->content['new-9ac8817a-c140-4a8d-b548-e5b42da82a9d'] = $pane;
    $display->panels['c1_r1_reg1'][1] = 'new-9ac8817a-c140-4a8d-b548-e5b42da82a9d';
    $pane = new stdClass();
    $pane->pid = 'new-bc8abe05-57a1-4b9f-bcce-12e8ca67b0a4';
    $pane->panel = 'c1_r1_reg2';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '7',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_9',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-audio',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc8abe05-57a1-4b9f-bcce-12e8ca67b0a4';
    $display->content['new-bc8abe05-57a1-4b9f-bcce-12e8ca67b0a4'] = $pane;
    $display->panels['c1_r1_reg2'][0] = 'new-bc8abe05-57a1-4b9f-bcce-12e8ca67b0a4';
    $pane = new stdClass();
    $pane->pid = 'new-6a6892c9-95ff-48a9-8d06-bea308adb6c6';
    $pane->panel = 'c1_r1_reg2';
    $pane->type = 'views';
    $pane->subtype = 'receptions_audio';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => 'Audio',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-audio',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6a6892c9-95ff-48a9-8d06-bea308adb6c6';
    $display->content['new-6a6892c9-95ff-48a9-8d06-bea308adb6c6'] = $pane;
    $display->panels['c1_r1_reg2'][1] = 'new-6a6892c9-95ff-48a9-8d06-bea308adb6c6';
    $pane = new stdClass();
    $pane->pid = 'new-5d624c29-2c2c-492f-a8a6-01576bdc9b44';
    $pane->panel = 'c1_r2_reg1';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_5',
      'override_title' => 0,
      'override_title_text' => 'Book<br/>Chats',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-google',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5d624c29-2c2c-492f-a8a6-01576bdc9b44';
    $display->content['new-5d624c29-2c2c-492f-a8a6-01576bdc9b44'] = $pane;
    $display->panels['c1_r2_reg1'][0] = 'new-5d624c29-2c2c-492f-a8a6-01576bdc9b44';
    $pane = new stdClass();
    $pane->pid = 'new-23994e0a-f6f3-47d0-8f86-2c2c4afdeb05';
    $pane->panel = 'c2_r1_reg1';
    $pane->type = 'views';
    $pane->subtype = 'ficrep';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => 'block-ficrep',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23994e0a-f6f3-47d0-8f86-2c2c4afdeb05';
    $display->content['new-23994e0a-f6f3-47d0-8f86-2c2c4afdeb05'] = $pane;
    $display->panels['c2_r1_reg1'][0] = 'new-23994e0a-f6f3-47d0-8f86-2c2c4afdeb05';
    $pane = new stdClass();
    $pane->pid = 'new-1eb95a7b-beec-4b79-abce-017755a8757e';
    $pane->panel = 'c3_r1_reg1';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '29715',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'About',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-about',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1eb95a7b-beec-4b79-abce-017755a8757e';
    $display->content['new-1eb95a7b-beec-4b79-abce-017755a8757e'] = $pane;
    $display->panels['c3_r1_reg1'][0] = 'new-1eb95a7b-beec-4b79-abce-017755a8757e';
    $pane = new stdClass();
    $pane->pid = 'new-a80fa487-9ae0-4c19-b870-9ded7b63d1bf';
    $pane->panel = 'c3_r2_reg2';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_8',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-questions',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a80fa487-9ae0-4c19-b870-9ded7b63d1bf';
    $display->content['new-a80fa487-9ae0-4c19-b870-9ded7b63d1bf'] = $pane;
    $display->panels['c3_r2_reg2'][0] = 'new-a80fa487-9ae0-4c19-b870-9ded7b63d1bf';
    $pane = new stdClass();
    $pane->pid = 'new-2e0a63cc-357b-4344-9411-247f6e4f3ea0';
    $pane->panel = 'header';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'header-text-receptions',
      'id' => 'header-text-receptions',
      'override_title' => 0,
      'override_title_text' => 'Romantic Receptions',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'reception-page-title',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e0a63cc-357b-4344-9411-247f6e4f3ea0';
    $display->content['new-2e0a63cc-357b-4344-9411-247f6e4f3ea0'] = $pane;
    $display->panels['header'][0] = 'new-2e0a63cc-357b-4344-9411-247f6e4f3ea0';
    $pane = new stdClass();
    $pane->pid = 'new-5aed8992-9258-4e3d-b5e5-75683b97d1de';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'New Banner',
      'title' => '',
      'body' => '<div class="rev_banner"><img src="/sites/default/files/rev_banner.png"></div>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5aed8992-9258-4e3d-b5e5-75683b97d1de';
    $display->content['new-5aed8992-9258-4e3d-b5e5-75683b97d1de'] = $pane;
    $display->panels['header'][1] = 'new-5aed8992-9258-4e3d-b5e5-75683b97d1de';
    $pane = new stdClass();
    $pane->pid = 'new-df10b6b3-d214-4391-b215-31d92ee9a2ea';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Editors',
      'title' => '',
      'body' => '<div class="ed-collective">Edited by Suzanne L. Barnett, Roger Whitson, and Ross Wilson</div>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df10b6b3-d214-4391-b215-31d92ee9a2ea';
    $display->content['new-df10b6b3-d214-4391-b215-31d92ee9a2ea'] = $pane;
    $display->panels['header'][2] = 'new-df10b6b3-d214-4391-b215-31d92ee9a2ea';
    $pane = new stdClass();
    $pane->pid = 'new-cc1a7bb6-9769-4a0d-a75c-f331f50d5f2e';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'review_entries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'recent-horizontal',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cc1a7bb6-9769-4a0d-a75c-f331f50d5f2e';
    $display->content['new-cc1a7bb6-9769-4a0d-a75c-f331f50d5f2e'] = $pane;
    $display->panels['header'][3] = 'new-cc1a7bb6-9769-4a0d-a75c-f331f50d5f2e';
    $pane = new stdClass();
    $pane->pid = 'new-a83b204b-c0a7-485f-947a-db46e25b4ad8';
    $pane->panel = 'r2_reg1';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_6',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-digital',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a83b204b-c0a7-485f-947a-db46e25b4ad8';
    $display->content['new-a83b204b-c0a7-485f-947a-db46e25b4ad8'] = $pane;
    $display->panels['r2_reg1'][0] = 'new-a83b204b-c0a7-485f-947a-db46e25b4ad8';
    $pane = new stdClass();
    $pane->pid = 'new-736343f9-9446-499f-9e22-6dc7cbda4f5a';
    $pane->panel = 'r2_reg2';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-lists',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '736343f9-9446-499f-9e22-6dc7cbda4f5a';
    $display->content['new-736343f9-9446-499f-9e22-6dc7cbda4f5a'] = $pane;
    $display->panels['r2_reg2'][0] = 'new-736343f9-9446-499f-9e22-6dc7cbda4f5a';
    $pane = new stdClass();
    $pane->pid = 'new-729cb70e-0d95-40bb-94ce-1c024c3932f1';
    $pane->panel = 'search_receptions_button';
    $pane->type = 'views';
    $pane->subtype = 'review_entries';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = '729cb70e-0d95-40bb-94ce-1c024c3932f1';
    $display->content['new-729cb70e-0d95-40bb-94ce-1c024c3932f1'] = $pane;
    $display->panels['search_receptions_button'][0] = 'new-729cb70e-0d95-40bb-94ce-1c024c3932f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2e0a63cc-357b-4344-9411-247f6e4f3ea0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['romantic_reception_hm_'] = $page;

  return $pages;

}
