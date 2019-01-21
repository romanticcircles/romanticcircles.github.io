<?php
/**
 * @file
 * front_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function front_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'connect';
  $mini->category = 'front';
  $mini->admin_title = 'Connect';
  $mini->admin_description = 'The connect tab for the front page';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CONNECT';
  $display->uuid = '156cbb1f-2499-4a0d-8930-5a714cefe32e';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'connect';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c6701063-0f8d-4378-b3b5-51a7728f2041';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'all_blogs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '6',
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
  $pane->uuid = 'c6701063-0f8d-4378-b3b5-51a7728f2041';
  $display->content['new-c6701063-0f8d-4378-b3b5-51a7728f2041'] = $pane;
  $display->panels['one_main'][0] = 'new-c6701063-0f8d-4378-b3b5-51a7728f2041';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c6701063-0f8d-4378-b3b5-51a7728f2041';
  $mini->display = $display;
  $export['connect'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'front_page_genres';
  $mini->category = 'front';
  $mini->admin_title = 'Front page genres';
  $mini->admin_description = 'Shows all the relevant front page genres';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
    'one_main' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'EXPLORE';
  $display->uuid = 'c9c5b783-4bad-4886-981a-8c9340c2fa16';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'front_page_genres';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-76e8d142-8eec-4203-9fd2-441fc2c3776c';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'genre_sliders';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '30',
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
  $pane->uuid = '76e8d142-8eec-4203-9fd2-441fc2c3776c';
  $display->content['new-76e8d142-8eec-4203-9fd2-441fc2c3776c'] = $pane;
  $display->panels['one_main'][0] = 'new-76e8d142-8eec-4203-9fd2-441fc2c3776c';
  $pane = new stdClass();
  $pane->pid = 'new-71bcc334-5136-4456-8530-73a7b095f8bd';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'poetry_genre_slider';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '30',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '71bcc334-5136-4456-8530-73a7b095f8bd';
  $display->content['new-71bcc334-5136-4456-8530-73a7b095f8bd'] = $pane;
  $display->panels['one_main'][1] = 'new-71bcc334-5136-4456-8530-73a7b095f8bd';
  $pane = new stdClass();
  $pane->pid = 'new-fde29e5d-ea6a-4983-a723-2b23035f14a9';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'genre_slider_drama';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '30',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fde29e5d-ea6a-4983-a723-2b23035f14a9';
  $display->content['new-fde29e5d-ea6a-4983-a723-2b23035f14a9'] = $pane;
  $display->panels['one_main'][2] = 'new-fde29e5d-ea6a-4983-a723-2b23035f14a9';
  $pane = new stdClass();
  $pane->pid = 'new-5251b472-3a88-4e0a-8ac6-2adab6bbe996';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'genre_slider_correspondence';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '30',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5251b472-3a88-4e0a-8ac6-2adab6bbe996';
  $display->content['new-5251b472-3a88-4e0a-8ac6-2adab6bbe996'] = $pane;
  $display->panels['one_main'][3] = 'new-5251b472-3a88-4e0a-8ac6-2adab6bbe996';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76e8d142-8eec-4203-9fd2-441fc2c3776c';
  $mini->display = $display;
  $export['front_page_genres'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'media';
  $mini->category = 'front';
  $mini->admin_title = 'Media';
  $mini->admin_description = 'The Media tab for the front page. Contains gallery, audio, and Fictional Representations content';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'MEDIA';
  $display->uuid = '5970a4e1-f239-454a-8353-04d4f44de37d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'media';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-26b81507-7a34-45bc-843c-259c46bafb92';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Here, we might also include audio and Media content from the Reviews and Receptions section</p>',
    'format' => '1',
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
  $pane->uuid = '26b81507-7a34-45bc-843c-259c46bafb92';
  $display->content['new-26b81507-7a34-45bc-843c-259c46bafb92'] = $pane;
  $display->panels['one_main'][0] = 'new-26b81507-7a34-45bc-843c-259c46bafb92';
  $pane = new stdClass();
  $pane->pid = 'new-7d0ee10d-2153-4d7a-a730-7a8768833c7f';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'gallery_slider2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '30',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->uuid = '7d0ee10d-2153-4d7a-a730-7a8768833c7f';
  $display->content['new-7d0ee10d-2153-4d7a-a730-7a8768833c7f'] = $pane;
  $display->panels['one_main'][1] = 'new-7d0ee10d-2153-4d7a-a730-7a8768833c7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['media'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'visualize';
  $mini->category = 'front';
  $mini->admin_title = 'Visualize';
  $mini->admin_description = 'The visualize tab for the front page';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'VISUALIZE';
  $display->uuid = '18ed06c4-51cd-4d58-976d-a7dd6ced7428';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'visualize';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-866c1718-3fa9-476f-a08c-05c2d7faa3c9';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Nothing here yet. Stay tuned.&nbsp;</p>',
    'format' => '1',
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
  $pane->uuid = '866c1718-3fa9-476f-a08c-05c2d7faa3c9';
  $display->content['new-866c1718-3fa9-476f-a08c-05c2d7faa3c9'] = $pane;
  $display->panels['one_main'][0] = 'new-866c1718-3fa9-476f-a08c-05c2d7faa3c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-866c1718-3fa9-476f-a08c-05c2d7faa3c9';
  $mini->display = $display;
  $export['visualize'] = $mini;

  return $export;
}
