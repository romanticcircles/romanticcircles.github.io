<?php
/**
 * @file
 * redesign_alert_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function redesign_alert_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'redesign_info';
  $page->task = 'page';
  $page->admin_title = 'Redesign Info';
  $page->admin_description = '';
  $page->path = 'redesign';
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
  $handler->name = 'page_redesign_info__panel';
  $handler->task = 'page';
  $handler->subtask = 'redesign_info';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-redesign',
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
          0 => 5,
          1 => 4,
          2 => 3,
          3 => 2,
          4 => 'main-row',
          5 => 1,
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
        'class' => '',
        'hide_empty' => 1,
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
        'contains' => 'region',
        'children' => array(
          0 => 'phases',
          1 => 'phase_2',
          2 => 'phase_3',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'phases' => array(
        'type' => 'region',
        'title' => 'Phase 1',
        'width' => '33.299933199732806',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'phase_2' => array(
        'type' => 'region',
        'title' => 'Phase 2',
        'width' => '33.29606149621179',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'phase_3' => array(
        'type' => 'region',
        'title' => 'Phase 3',
        'width' => '33.4040053040554',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'example_3_image',
          1 => 'example_1',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'context',
          1 => 'example_2_image',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'context' => array(
        'type' => 'region',
        'title' => 'Example 2 Text',
        'width' => '66.71213350045467',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'example_1' => array(
        'type' => 'region',
        'title' => 'Example 3 Text',
        'width' => '66.71213350045467',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'example_1_',
          1 => 'example_1_text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'example_1_' => array(
        'type' => 'region',
        'title' => 'Example 1 Image',
        'width' => '33.316767054621245',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'context_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'context_' => array(
        'type' => 'region',
        'title' => 'Context',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'example_1_text' => array(
        'type' => 'region',
        'title' => 'Example 1 Text',
        'width' => '66.68323294537875',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'example_2_image' => array(
        'type' => 'region',
        'title' => 'Example 2 Image',
        'width' => '33.28786649954534',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'example_3_image' => array(
        'type' => 'region',
        'title' => 'Example 3 Image',
        'width' => '33.28786649954534',
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
      'phases' => NULL,
      'phase_2' => NULL,
      'phase_3' => NULL,
      'context' => NULL,
      'example_1' => NULL,
      'example_1_' => NULL,
      'context_' => NULL,
      'example_1_text' => NULL,
      'example_2_image' => NULL,
      'example_3_image' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Redesigning <em>Romantic Circles</em>';
  $display->uuid = '0ee9ef62-27d3-4354-b8b3-eaa06a87fc75';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_redesign_info__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3d4836b5-960e-4700-965a-6bb96f9d76bf';
  $pane->panel = 'context';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ex-txt-2',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>We&#39;ve overhauled our underlying search engine to make sure that the most relevant and interesting content rises to the top&mdash;while also making sure that there&#39;s room for exploration and seredipity. We&#39;ve also fine-tuned recommendations across the site&mdash;so while you&#39;re browsing a&nbsp;<em>Praxis</em>&nbsp;volume you can easily surf through related resources and materials.</p>',
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
  $pane->uuid = '3d4836b5-960e-4700-965a-6bb96f9d76bf';
  $display->content['new-3d4836b5-960e-4700-965a-6bb96f9d76bf'] = $pane;
  $display->panels['context'][0] = 'new-3d4836b5-960e-4700-965a-6bb96f9d76bf';
  $pane = new stdClass();
  $pane->pid = 'new-01dbf40b-ab72-4bd8-be48-9707383c55ff';
  $pane->panel = 'context_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="descbig">It\'s more than just a coat of paint: we\'ve redesigned <em>Romantic Circles</em> from top to bottom to expand the horizons of Romantic literary studies.</div>
',
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
  $pane->uuid = '01dbf40b-ab72-4bd8-be48-9707383c55ff';
  $display->content['new-01dbf40b-ab72-4bd8-be48-9707383c55ff'] = $pane;
  $display->panels['context_'][0] = 'new-01dbf40b-ab72-4bd8-be48-9707383c55ff';
  $pane = new stdClass();
  $pane->pid = 'new-15c66a4f-b707-4cc3-a6e5-d69c23ae5e0d';
  $pane->panel = 'context_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'context',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>You&#39;re not just seeing things:&nbsp;<em>Romantic Circles</em>&nbsp;looks different now! Our team of developers has been working for more than a year now on a top-to-bottom redesign of our site. Our focus has been to make&nbsp;<em>RC</em>&nbsp;more intuitive, navigable, and approachable across all devices and for our broad community. And it&#39;s not just a visual redesign&mdash;we&#39;ve been working behind the scenes to improve site performance, search and recommendations, and much more.&nbsp;</p><p>On this page, we&#39;ll share some of the improvements we&#39;ve made and give you a sense of what&#39;s coming down the pike for&nbsp;<em>RC</em>&nbsp;in the months to come. This visual overhaul is just&nbsp;<strong>one part of a three phase redesign process</strong>. After twenty years, we&#39;re still working every day to expand the horizons of Romantic literary studies, and we&#39;re excited to roll out new tools and integrations for exploring both our rich archives and all the great work to come.</p>',
    'format' => '1',
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
  $pane->uuid = '15c66a4f-b707-4cc3-a6e5-d69c23ae5e0d';
  $display->content['new-15c66a4f-b707-4cc3-a6e5-d69c23ae5e0d'] = $pane;
  $display->panels['context_'][1] = 'new-15c66a4f-b707-4cc3-a6e5-d69c23ae5e0d';
  $pane = new stdClass();
  $pane->pid = 'new-eb8bd259-14d1-4ee7-a44e-239889a10efe';
  $pane->panel = 'example_1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ex-txt-3',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Our main sections, from&nbsp;<em>Praxis&nbsp;</em>to&nbsp;<em>Pedagogies Commons</em>&nbsp;to&nbsp;<em>Reviews and Receptions</em>, have all received structural overhauls to make sure that it&#39;s simple to find what you&#39;re looking for. And as a plus,&nbsp;<em>RC</em>&nbsp;now looks better than ever on mobile and tablet devices!</p>',
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
  $pane->uuid = 'eb8bd259-14d1-4ee7-a44e-239889a10efe';
  $display->content['new-eb8bd259-14d1-4ee7-a44e-239889a10efe'] = $pane;
  $display->panels['example_1'][0] = 'new-eb8bd259-14d1-4ee7-a44e-239889a10efe';
  $pane = new stdClass();
  $pane->pid = 'new-37ead5d7-29f3-4621-922e-8e863f0175e0';
  $pane->panel = 'example_1_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ex-img-1',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img src="/sites/default/files/redesign-1.jpg"/>',
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
  $pane->uuid = '37ead5d7-29f3-4621-922e-8e863f0175e0';
  $display->content['new-37ead5d7-29f3-4621-922e-8e863f0175e0'] = $pane;
  $display->panels['example_1_'][0] = 'new-37ead5d7-29f3-4621-922e-8e863f0175e0';
  $pane = new stdClass();
  $pane->pid = 'new-1fd9e95c-9b6b-486c-9717-a234964ce15c';
  $pane->panel = 'example_1_text';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ex-txt-1',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>We&#39;ve overhauled our front page to better surface the broad range of materials we host. Not only can you always find the most recent work we&#39;ve published here, you can also explore our collections by genre, author, or media type. We&#39;ve made it clearer how we organize our content here at&nbsp;<em>RC</em>, so you&#39;ll always be able to find the work that interests you.&nbsp;</p>',
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
  $pane->uuid = '1fd9e95c-9b6b-486c-9717-a234964ce15c';
  $display->content['new-1fd9e95c-9b6b-486c-9717-a234964ce15c'] = $pane;
  $display->panels['example_1_text'][0] = 'new-1fd9e95c-9b6b-486c-9717-a234964ce15c';
  $pane = new stdClass();
  $pane->pid = 'new-a52fe8b6-d654-46ce-9f00-a57bfaadf575';
  $pane->panel = 'example_2_image';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ex-img-2',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img src="/sites/default/files/redesign-2.jpg"/>',
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
  $pane->uuid = 'a52fe8b6-d654-46ce-9f00-a57bfaadf575';
  $display->content['new-a52fe8b6-d654-46ce-9f00-a57bfaadf575'] = $pane;
  $display->panels['example_2_image'][0] = 'new-a52fe8b6-d654-46ce-9f00-a57bfaadf575';
  $pane = new stdClass();
  $pane->pid = 'new-bb6c2a48-ebfb-4061-adbd-d4da4c9d56cc';
  $pane->panel = 'example_3_image';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ex-img-3',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img src="/sites/default/files/redesign-1.jpg"/>',
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
  $pane->uuid = 'bb6c2a48-ebfb-4061-adbd-d4da4c9d56cc';
  $display->content['new-bb6c2a48-ebfb-4061-adbd-d4da4c9d56cc'] = $pane;
  $display->panels['example_3_image'][0] = 'new-bb6c2a48-ebfb-4061-adbd-d4da4c9d56cc';
  $pane = new stdClass();
  $pane->pid = 'new-1b7403b4-bf99-4072-b301-5dfdae459848';
  $pane->panel = 'phases';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'visual redesign',
    'title' => '1. A New Look',
    'title_heading' => 'h2',
    'body' => '<p>You&#39;re looking at the fruits of <b>phase one</b>: we&#39;ve made&nbsp;<em>RC</em>&nbsp;better to look and easier to navigate than ever!</p>',
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
  $pane->uuid = '1b7403b4-bf99-4072-b301-5dfdae459848';
  $display->content['new-1b7403b4-bf99-4072-b301-5dfdae459848'] = $pane;
  $display->panels['phases'][0] = 'new-1b7403b4-bf99-4072-b301-5dfdae459848';
  $pane = new stdClass();
  $pane->pid = 'new-5c8dcef6-1117-4213-80aa-d50dff2b930c';
  $pane->panel = 'phase_2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'rc data',
    'title' => '2. RC Data',
    'title_heading' => 'h2',
    'body' => '<p>For&nbsp;<strong>phase two</strong>, we&#39;re turning&nbsp;<strong><em>RC</em>&#39;s data&nbsp;</strong>into a rich resource for all kinds of projects in Romantic literary studies. You can learn more about this project over at our&nbsp;<a href="/data"><em>RC Data</em>&nbsp;page</a>. We&#39;ll also integrate&nbsp;<em>RC</em>&#39;s resources with annotation and mapping tools, so you can interact with&nbsp;<em>RC</em>&nbsp;in new ways.&nbsp;</p>',
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
  $pane->uuid = '5c8dcef6-1117-4213-80aa-d50dff2b930c';
  $display->content['new-5c8dcef6-1117-4213-80aa-d50dff2b930c'] = $pane;
  $display->panels['phase_2'][0] = 'new-5c8dcef6-1117-4213-80aa-d50dff2b930c';
  $pane = new stdClass();
  $pane->pid = 'new-b35a1814-aac5-46a6-9f17-d1382a8d3f11';
  $pane->panel = 'phase_3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'sga',
    'title' => '3. The Shelley-Godwin Archive',
    'title_heading' => 'h2',
    'body' => '<p>Our&nbsp;<strong>third phase</strong>&nbsp;integrates&nbsp;<em>RC</em>&nbsp;with the&nbsp;<a href="http://shelleygodwinarchive.org"><strong>Shelley-Godwin Archive</strong></a>. The Shelley-Godwin Archive is an unparalled digital resource for Romantic-period manuscripts, and we&#39;re working to bring it into the&nbsp;<em>RC&nbsp;</em>fold so you can search both sites at once, and make better connections across a range of resources.&nbsp;</p>',
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
  $pane->uuid = 'b35a1814-aac5-46a6-9f17-d1382a8d3f11';
  $display->content['new-b35a1814-aac5-46a6-9f17-d1382a8d3f11'] = $pane;
  $display->panels['phase_3'][0] = 'new-b35a1814-aac5-46a6-9f17-d1382a8d3f11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['redesign_info'] = $page;

  return $pages;

}
