<?php
/**
 * @file
 * footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'footer';
  $mini->admin_title = 'Footer';
  $mini->admin_description = 'This is the content that goes in the footer';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bfd2460d-852f-4816-98cc-4eaa86a167e5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-88180494-023c-4796-b9ad-e23dfc1e67f3';
  $pane->panel = 'left';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '88180494-023c-4796-b9ad-e23dfc1e67f3';
  $display->content['new-88180494-023c-4796-b9ad-e23dfc1e67f3'] = $pane;
  $display->panels['left'][0] = 'new-88180494-023c-4796-b9ad-e23dfc1e67f3';
  $pane = new stdClass();
  $pane->pid = 'new-8a01ce93-4161-40fd-91be-0c1867489b65';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-secondary-menu';
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
  $pane->uuid = '8a01ce93-4161-40fd-91be-0c1867489b65';
  $display->content['new-8a01ce93-4161-40fd-91be-0c1867489b65'] = $pane;
  $display->panels['middle'][0] = 'new-8a01ce93-4161-40fd-91be-0c1867489b65';
  $pane = new stdClass();
  $pane->pid = 'new-3af1351c-6113-4412-97d9-189beaa174dc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-90';
  $pane->shown = FALSE;
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
  $pane->uuid = '3af1351c-6113-4412-97d9-189beaa174dc';
  $display->content['new-3af1351c-6113-4412-97d9-189beaa174dc'] = $pane;
  $display->panels['middle'][1] = 'new-3af1351c-6113-4412-97d9-189beaa174dc';
  $pane = new stdClass();
  $pane->pid = 'new-264567cc-f396-4685-a078-56ed161c9436';
  $pane->panel = 'right';
  $pane->type = 'contact';
  $pane->subtype = 'contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Contact Us',
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
  $pane->uuid = '264567cc-f396-4685-a078-56ed161c9436';
  $display->content['new-264567cc-f396-4685-a078-56ed161c9436'] = $pane;
  $display->panels['right'][0] = 'new-264567cc-f396-4685-a078-56ed161c9436';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-88180494-023c-4796-b9ad-e23dfc1e67f3';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
