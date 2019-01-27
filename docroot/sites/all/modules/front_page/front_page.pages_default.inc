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
  $page->path = 'lorem';
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
          0 => 4,
          1 => 'main-row',
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'test',
        ),
        'parent' => 'main',
        'class' => 'explore-tabs',
        'hide_empty' => 0,
      ),
      'test' => array(
        'type' => 'region',
        'title' => 'Tabs',
        'width' => 100,
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
        'class' => 'core-sections',
        'hide_empty' => 0,
      ),
      'genre_slider_' => array(
        'type' => 'region',
        'title' => 'Core Sections',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tertiary',
        ),
        'parent' => 'main',
        'class' => 'tertiary',
        'hide_empty' => 0,
      ),
      'tertiary' => array(
        'type' => 'region',
        'title' => 'Tertiary',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'tertiary',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'slider',
          1 => 'about',
        ),
        'parent' => 'main',
        'class' => 'front-top',
        'hide_empty' => 0,
      ),
      'slider' => array(
        'type' => 'region',
        'title' => 'Slider',
        'width' => '74.58040480854169',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'about' => array(
        'type' => 'region',
        'title' => 'About',
        'width' => '25.419595191458313',
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
      'center' => NULL,
      'test' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => 'main-tabs',
        'panel_tab_id_pattern' => 'region',
      ),
      'genre_slider' => NULL,
      'explore_' => NULL,
      'connect_' => NULL,
      'visualize_' => NULL,
      'more_' => NULL,
      'tertiary' => NULL,
      'about_text' => NULL,
      'slider' => NULL,
      'about' => NULL,
      'genre_slider_' => NULL,
    ),
    'genre_slider_' => array(
      'style' => '-1',
    ),
    'about_text' => array(
      'style' => '-1',
    ),
    'test' => array(
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
  $pane->panel = 'about';
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
    'override_title_text' => '',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-front',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd17eb16-b07d-4ffa-b46b-5fe631d42e8d';
  $display->content['new-dd17eb16-b07d-4ffa-b46b-5fe631d42e8d'] = $pane;
  $display->panels['about'][0] = 'new-dd17eb16-b07d-4ffa-b46b-5fe631d42e8d';
  $pane = new stdClass();
  $pane->pid = 'new-2f6885a9-f85b-4953-8873-2823d8500d8e';
  $pane->panel = 'about';
  $pane->type = 'block';
  $pane->subtype = 'block-87';
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
  $pane->uuid = '2f6885a9-f85b-4953-8873-2823d8500d8e';
  $display->content['new-2f6885a9-f85b-4953-8873-2823d8500d8e'] = $pane;
  $display->panels['about'][1] = 'new-2f6885a9-f85b-4953-8873-2823d8500d8e';
  $pane = new stdClass();
  $pane->pid = 'new-f9818be6-a002-4be7-a698-da86b9439d86';
  $pane->panel = 'genre_slider_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1 style="text-align: center;font-size:2.7em;">RC Sections</h1>',
    'format' => '2',
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
  $pane->uuid = 'f9818be6-a002-4be7-a698-da86b9439d86';
  $display->content['new-f9818be6-a002-4be7-a698-da86b9439d86'] = $pane;
  $display->panels['genre_slider_'][0] = 'new-f9818be6-a002-4be7-a698-da86b9439d86';
  $pane = new stdClass();
  $pane->pid = 'new-b6a29f9c-5151-45c8-89c2-ef8b065aabc9';
  $pane->panel = 'genre_slider_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Menu Re-stating',
    'title' => '',
    'body' => '<a href="/praxis"><div id="pub-praxis" class="pub-vertical">
<div class="pub-title">Praxis Series</div>
<img src="/sites/default/files/prax-front-bg2.png"/>
<div class="contentHover">
	<span class="pub-caption">Digital scholarly essays organized thematically by volume: from the gothic to discourses of empire, and many others.</span>
</div>
</div>
</a>
<a href="/editions">
<div id="pub-editions" class="pub-vertical">
<div class="pub-title">Electronic Editions</div>
<img src="/sites/default/files/ed-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">Scholar-edited editions of literary works and other Romantic-era productions: from novels and poetry to letters and travel writing. </span>
</div>
</div>
</a>
<a href="/pedagogies">
<div id="pub-pedagogies" class="pub-vertical">
<div class="pub-title">Pedagogies</div>
<img src="/sites/default/files/ped-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">Resources for teachers of Romantic Studies, including essays on teaching Romanticism in the Pedagogies Commons Series.</span>
</div>
</div>
</a>
<a href="/reference">
<div id="pub-resources" class="pub-vertical">
<div class="pub-title">Scholarly Resources</div>
<img src="/sites/default/files/ref-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">Chronologies, Bibliographies, Concordances, and other resources to aide in the study and teaching of Romanticism</span>
</div>
</div>
</a>
<a href="/gallery">
<div id="pub-gallery" class="pub-vertical">
<div class="pub-title">The Gallery</div>
<img src="/sites/default/files/gallery-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">A fully curated gallery of Romantic-era images</span>
</div>
</div>
</a>
<a href="/reviews-and-receptions">
<div id="pub-randr" class="pub-vertical">
<div class="pub-title">Reviews & Receptions</div>
<img src="/sites/default/files/reviews-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">Includes short reviews of recent work, live BookChats, listicles, and an evolving compendium of appearances of Romanticism in popular culture.</span>
</div>
</div>
</a>
<a href="/data">
<div id="pub-randr" class="pub-vertical">
<div class="pub-title">RC Data</div>
<img src="/sites/default/files/about-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">Learn more about <em>Romantic Circles</em>\'s experiments with data both big and small.</span>
</div>
</div>
</a>
<a href="http://shelleygodwinarchive.org/">
<div id="pub-randr" class="pub-vertical">
<div class="pub-title">The Shelley-Godwin Archive</div>
<img src="/sites/default/files/sga-front-bg.png"/>
<div class="contentHover">
	<span class="pub-caption">The Shelley-Godwin Archive provides the digitized manuscripts of Percy Bysshe Shelley, Mary Wollstonecraft Shelley, William Godwin, and Mary Wollstonecraft.</span>
</div>
</div>
</a>',
    'format' => '3',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6a29f9c-5151-45c8-89c2-ef8b065aabc9';
  $display->content['new-b6a29f9c-5151-45c8-89c2-ef8b065aabc9'] = $pane;
  $display->panels['genre_slider_'][1] = 'new-b6a29f9c-5151-45c8-89c2-ef8b065aabc9';
  $pane = new stdClass();
  $pane->pid = 'new-fb8add5e-c51f-4a57-aa73-967d55434c49';
  $pane->panel = 'slider';
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
  $display->panels['slider'][0] = 'new-fb8add5e-c51f-4a57-aa73-967d55434c49';
  $pane = new stdClass();
  $pane->pid = 'new-185abe7d-984c-4ef1-b2e7-8ebbc14bee46';
  $pane->panel = 'tertiary';
  $pane->type = 'views';
  $pane->subtype = 'all_blogs';
  $pane->shown = FALSE;
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
  $pane->uuid = '185abe7d-984c-4ef1-b2e7-8ebbc14bee46';
  $display->content['new-185abe7d-984c-4ef1-b2e7-8ebbc14bee46'] = $pane;
  $display->panels['tertiary'][0] = 'new-185abe7d-984c-4ef1-b2e7-8ebbc14bee46';
  $pane = new stdClass();
  $pane->pid = 'new-31c392fd-cd38-4f65-805b-fde61821c3e6';
  $pane->panel = 'test';
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
  $display->panels['test'][0] = 'new-31c392fd-cd38-4f65-805b-fde61821c3e6';
  $pane = new stdClass();
  $pane->pid = 'new-5ca0a03c-b368-4486-9e30-db1999d4bff1';
  $pane->panel = 'test';
  $pane->type = 'panels_mini';
  $pane->subtype = 'people';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'AUTHORS',
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
  $pane->uuid = '5ca0a03c-b368-4486-9e30-db1999d4bff1';
  $display->content['new-5ca0a03c-b368-4486-9e30-db1999d4bff1'] = $pane;
  $display->panels['test'][1] = 'new-5ca0a03c-b368-4486-9e30-db1999d4bff1';
  $pane = new stdClass();
  $pane->pid = 'new-9638eb9e-d8d7-45ba-ab55-134397492dca';
  $pane->panel = 'test';
  $pane->type = 'panels_mini';
  $pane->subtype = 'labs';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'LABS',
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
  $pane->uuid = '9638eb9e-d8d7-45ba-ab55-134397492dca';
  $display->content['new-9638eb9e-d8d7-45ba-ab55-134397492dca'] = $pane;
  $display->panels['test'][2] = 'new-9638eb9e-d8d7-45ba-ab55-134397492dca';
  $pane = new stdClass();
  $pane->pid = 'new-13f3700c-e142-499f-a008-7114d5a03a27';
  $pane->panel = 'test';
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
  $display->panels['test'][3] = 'new-13f3700c-e142-499f-a008-7114d5a03a27';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['alt_front_page'] = $page;

  return $pages;

}
