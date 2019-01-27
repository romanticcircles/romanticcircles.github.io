<?php
/**
 * @file
 * rc_data.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rc_data_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data';
  $page->task = 'page';
  $page->admin_title = 'Data';
  $page->admin_description = 'Home page for the Data vertical';
  $page->path = 'data';
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
  $handler->name = 'page_data__panel';
  $handler->task = 'page';
  $handler->subtask = 'data';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-data',
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
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
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
        'contains' => 'region',
        'children' => array(
          0 => 'description',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'description' => array(
        'type' => 'region',
        'title' => 'Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'projects',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'projects' => array(
        'type' => 'region',
        'title' => 'Corpora',
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
          0 => 'exports_____info',
          1 => 'exports_____links',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'exports_____info' => array(
        'type' => 'region',
        'title' => 'Exports — Info',
        'width' => '25.168350168350166',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'exports_____links' => array(
        'type' => 'region',
        'title' => 'Tools',
        'width' => '74.83164983164984',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contact',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'contact' => array(
        'type' => 'region',
        'title' => 'Contact',
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
      'center' => NULL,
      'description' => NULL,
      'projects' => NULL,
      'exports_____info' => NULL,
      'exports_____links' => NULL,
      'contact' => NULL,
    ),
    'exports_____info' => array(
      'style' => '-1',
    ),
    'projects' => array(
      'style' => '-1',
    ),
    'exports_____links' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'RC Data';
  $display->uuid = '06beac1d-fdd6-40da-8e0a-35a833e47478';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-43fd517c-ae47-45f4-a9c6-9007912e1c0e';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="descbig"><span class="boldblue">RC Data</span> gives you access to <em>Romantic Circles</em>\' rich trove of data, and highlights new approaches to integrating Romantic studies and the digital humanities.</div>',
    'format' => '3',
    'substitute' => TRUE,
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
  $pane->uuid = '43fd517c-ae47-45f4-a9c6-9007912e1c0e';
  $display->content['new-43fd517c-ae47-45f4-a9c6-9007912e1c0e'] = $pane;
  $display->panels['center'][0] = 'new-43fd517c-ae47-45f4-a9c6-9007912e1c0e';
  $pane = new stdClass();
  $pane->pid = 'new-20e6237e-ca42-428a-a462-94fda8e644c8';
  $pane->panel = 'contact';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Contact',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>Share your creations</h1>
<p>Have you made something that you\'d like to share with us? Do you have ideas for data-driven projects using <em>Romantic Circles</em> resources?
 Are you looking to take your data collection to the next level, and want to learn more about our APIs and batched corpus downloaders? Do you want to get in touch to learn more about our plans for <em>RC Data</em>, or to just learn more about how to go about doing digital humanities work? Use the contact form in the footer to get in touch with us!</p>',
    'format' => '3',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'data-page',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '20e6237e-ca42-428a-a462-94fda8e644c8';
  $display->content['new-20e6237e-ca42-428a-a462-94fda8e644c8'] = $pane;
  $display->panels['contact'][0] = 'new-20e6237e-ca42-428a-a462-94fda8e644c8';
  $pane = new stdClass();
  $pane->pid = 'new-269e661c-05ca-4d49-8976-d3e43a2b2c96';
  $pane->panel = 'description';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><em>RC Data</em>&nbsp;turns two decades of&nbsp;<em>Romantic Circles</em>&nbsp;into a rich resource for digital humanities work. As a part of our redesign, we&#39;re building new and exciting ways to interact with&nbsp;<em>Romantic Circles</em>, from participatory annotation, to mapping and timelines, to accessing a range of corpuses upon which to build your own scholarship.&nbsp;<em>RC Data</em>&nbsp;is an experimental and evolving space, and we look forward to sharing more with you in the days to come.&nbsp;</p><p>Right now, you can learn more about experimenting with our data in a variety of ways. We have prepared three small examples of data-driven work out of&nbsp;<em>Romantic Circles</em>&#39; holdings, as well as a list of example tools that our team has already started using to learn more about our trove. Click the links below to see these projects and learn more about our data!</p><p>For those interested in a deeper dive into our TEI, you can visit our <a href="https://github.com/romanticcircles/rc-tei-archive">GitHub repository</a> to find the authoritative TEI records for all of our recent material.&nbsp;</p>',
    'format' => '1',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'data-page',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '269e661c-05ca-4d49-8976-d3e43a2b2c96';
  $display->content['new-269e661c-05ca-4d49-8976-d3e43a2b2c96'] = $pane;
  $display->panels['description'][0] = 'new-269e661c-05ca-4d49-8976-d3e43a2b2c96';
  $pane = new stdClass();
  $pane->pid = 'new-023eb18f-38d7-4839-a0dd-deaa4c21213b';
  $pane->panel = 'exports_____info';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>What about those buttons?</h2>
<p>As you\'re browsing <em>RC</em>, you might see small <span class="teiButton">buttons</span> scattered on various pages. These <span class="teiButton">buttons</span> let you download that page\'s content in a ready-to-use data file!</p>',
    'format' => '3',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'button-faq',
    'css_class' => 'data-page',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '023eb18f-38d7-4839-a0dd-deaa4c21213b';
  $display->content['new-023eb18f-38d7-4839-a0dd-deaa4c21213b'] = $pane;
  $display->panels['exports_____info'][0] = 'new-023eb18f-38d7-4839-a0dd-deaa4c21213b';
  $pane = new stdClass();
  $pane->pid = 'new-945a7ed0-84b5-4078-a7fb-98c73f72a3e1';
  $pane->panel = 'exports_____links';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>Tools</h1>
<p>You\'ve got our data, but now do you use it? Here are some tools that we recommend using to get started playing our with our resources, as well as some examples of those tools in action!</p>

<div class="fun-list">

<div class="clear">
<div class="one-fourth column-bottom clear subcat"><img src="/sites/default/files/voyant.jpg"/></div>
<div class="three-fourths column-last column-bottom clear"><a href="https://voyant-tools.org/">Voyant</a>, a drag-and-drop tool for developing data visualizations from corpuses of text. <a href="https://www.rc.umd.edu/praxis/multi-media/praxis.2016.multi-media.singer.html">In this essay from 2016</a>, Kate Singer uses Voyant to examine the reoccurrence and density of words in the work of poet Leticia Elizabeth Landon.</div>
</div>

<div class="clear">
<div class="one-fourth column-bottom clear subcat"><img src="/sites/default/files/juxta.jpg"/></div>
<div class="three-fourths column-last column-bottom clear"><a href="http://juxtacommons.org/">Juxta</a>, an easy way to collate texts, so that you can see the differences across multiple editions and versions. <a href="http://juxtacommons.org/shares/Nme50n">Here\'s an example</a> of Juxta in action, comparing multiple versions of <em>Frankenstein</em>.</div>
</div>

<div class="clear">
<div class="one-fourth column-bottom clear subcat"><img src="/sites/default/files/hypothesis.jpg"/></div>
<div class="three-fourths column-last column-bottom clear">You can also use tools like <a href="https://web.hypothes.is/">Hypothes.is</a> to annotate <em>RC</em>\'s holdings. Watch this space for our own annotation integration, so that you can log in and share annotations with the <em>RC</em> community!</div>
</div>

</div>',
    'format' => '3',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'data-page',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '945a7ed0-84b5-4078-a7fb-98c73f72a3e1';
  $display->content['new-945a7ed0-84b5-4078-a7fb-98c73f72a3e1'] = $pane;
  $display->panels['exports_____links'][0] = 'new-945a7ed0-84b5-4078-a7fb-98c73f72a3e1';
  $pane = new stdClass();
  $pane->pid = 'new-3f0e4b62-933f-47ca-a9e6-f3d8abc2914b';
  $pane->panel = 'projects';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="corpus-column">
	<span class="corpus-title">Praxis Corpus</span>
	<p class="corpus-info">The full XML-TEI for an example <em>Praxis</em> volume, <em>Romanticism and the Rights of the Negative</em>. Features each essay and attendant metadata.</p>
	<a href="/data/praxis" class="corpus-btn">Learn More</a>
</div>
<div class="corpus-column">
	<span class="corpus-title">Frankendata</span>
	<p class="corpus-info">Learn more about our ongoing collaborations with the the <a href="https://github.com/ebeshero/Pittsburgh_Frankenstein">Pittsburgh Frankenstein Project</a>.</p>
	<a href="/data/frankendata" class="corpus-btn">Learn More</a>
</div>
<div class="corpus-column">
	<span class="corpus-title">Space and Place</span>
	<p class="corpus-info">A collection of geolocation data about the people and places in the <a href="https://www.rc.umd.edu/editions/southey_letters/">Southey Letters</a>.</p>
	<a href="/data/space-place" class="corpus-btn">Learn More</a>
</div>
<!-- <div class="corpus-column">
	<span class="corpus-title">RC as Data</span>
	<p class="corpus-info">We can also produce corpuses of data about RC as an enterprise. This file collects metadata about every Praxis, Pedagogies Commons, or Editions volume we\'ve published.</p>
	<a href="/data/rc-as-data" class="corpus-btn">Learn More</a>
</div> -->',
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
  $pane->uuid = '3f0e4b62-933f-47ca-a9e6-f3d8abc2914b';
  $display->content['new-3f0e4b62-933f-47ca-a9e6-f3d8abc2914b'] = $pane;
  $display->panels['projects'][0] = 'new-3f0e4b62-933f-47ca-a9e6-f3d8abc2914b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-43fd517c-ae47-45f4-a9c6-9007912e1c0e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_frankendata_corpus';
  $page->task = 'page';
  $page->admin_title = 'Data Frankendata Corpus';
  $page->admin_description = '';
  $page->path = 'data/frankendata';
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
  $handler->name = 'page_data_frankendata_corpus__panel';
  $handler->task = 'page';
  $handler->subtask = 'data_frankendata_corpus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-corpus',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:data_corpus_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'how_we_made_it' => NULL,
      'downloads' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '09420b6d-9df2-4437-8357-58d7248ec9a4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data_frankendata_corpus__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ac60e066-5885-40b5-a1d1-8531cf0f726a';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img src="/sites/default/files/pitt-frankenstein.jpg"/>',
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
  $pane->uuid = 'ac60e066-5885-40b5-a1d1-8531cf0f726a';
  $display->content['new-ac60e066-5885-40b5-a1d1-8531cf0f726a'] = $pane;
  $display->panels['center'][0] = 'new-ac60e066-5885-40b5-a1d1-8531cf0f726a';
  $pane = new stdClass();
  $pane->pid = 'new-1874d886-400d-455f-8f94-4382cfea0069';
  $pane->panel = 'how_we_made_it';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>TBD</p>',
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
  $pane->uuid = '1874d886-400d-455f-8f94-4382cfea0069';
  $display->content['new-1874d886-400d-455f-8f94-4382cfea0069'] = $pane;
  $display->panels['how_we_made_it'][0] = 'new-1874d886-400d-455f-8f94-4382cfea0069';
  $pane = new stdClass();
  $pane->pid = 'new-51adc6d9-753a-4741-bdf2-a857edc49b5b';
  $pane->panel = 'title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>Frankendata</h1>
<p>An ongoing collaboration between <em>Romantic Circles</em> and the <a href="https://ebeshero.github.io/Pittsburgh_Frankenstein/">Pittsburgh Frankenstein Project</a> to produce a new digital scholarly edition of <em>Frankenstein</em>.</p>',
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
  $pane->uuid = '51adc6d9-753a-4741-bdf2-a857edc49b5b';
  $display->content['new-51adc6d9-753a-4741-bdf2-a857edc49b5b'] = $pane;
  $display->panels['title'][0] = 'new-51adc6d9-753a-4741-bdf2-a857edc49b5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_frankendata_corpus'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_praxis_corpus';
  $page->task = 'page';
  $page->admin_title = 'Data Praxis Corpus';
  $page->admin_description = '';
  $page->path = 'data/praxis';
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
  $handler->name = 'page_data_praxis_corpus__panel';
  $handler->task = 'page';
  $handler->subtask = 'data_praxis_corpus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-corpus',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:data_corpus_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'how_we_made_it' => NULL,
      'downloads' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Data Praxis Corpus';
  $display->uuid = 'df202ed2-778a-4183-b6fb-698bb9c61950';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data_praxis_corpus__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-55165528-e9e7-4952-88c7-690d29a09f23';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<!--	Exported from Voyant Tools (voyant-tools.org).
The iframe src attribute below uses a relative protocol to better function with both
http and https sites, but if you\'re embedding this into a local web page (file protocol)
you should add an explicit protocol (https if you\'re using voyant-tools.org, otherwise
it depends on this server.
Feel free to change the height and width values or other styling below: -->
<iframe style=\'width: 100%; height: 800px;\' src=\'//voyant-tools.org/?panels=cirrus%2Creader%2Ctrends%2Csummary%2Ccontexts&corpus=735981d5fc18f4f2636c8392c17f166c\'></iframe>',
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
  $pane->uuid = '55165528-e9e7-4952-88c7-690d29a09f23';
  $display->content['new-55165528-e9e7-4952-88c7-690d29a09f23'] = $pane;
  $display->panels['center'][0] = 'new-55165528-e9e7-4952-88c7-690d29a09f23';
  $pane = new stdClass();
  $pane->pid = 'new-1f93cc5e-9788-4d0c-9a62-b8246eaa0e9c';
  $pane->panel = 'downloads';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>Downloads</h2>
<p><a href="https://www.rc.umd.edu/sites/default/files/imported/data/corpuses/1-praxisCorpus.xml">Here you can download</a> an .xml corpus file for <em>Romanticism and the Rights of the Negative</em> for use in your own research. TEI-compliant XML files are also available on most essays pages by clicking the button marked "TEI".</p>
</ul>',
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
  $pane->uuid = '1f93cc5e-9788-4d0c-9a62-b8246eaa0e9c';
  $display->content['new-1f93cc5e-9788-4d0c-9a62-b8246eaa0e9c'] = $pane;
  $display->panels['downloads'][0] = 'new-1f93cc5e-9788-4d0c-9a62-b8246eaa0e9c';
  $pane = new stdClass();
  $pane->pid = 'new-acda2e45-71c1-46ee-bc57-f97e9d106225';
  $pane->panel = 'how_we_made_it';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>How We Made This</h2>
<p>With Voyant, you can start either with a pre-existing corpus, or simply tell Voyant to link to any number of web pages. For this visualization, we opted the second approach, and copied in all of the URLs corresponding to the essays in <em>Romanticism and the Rights of the Negative</em>. From there, Voyant pulls the text from the web pages and calculates the occurrences of various words, trends over the course of the corpus, and so on. If you\'re interested in next steps,
 you could consider using XXXXX to get started with topic modeling, or a more robust visualization tool like <a href="https://gephi.org/">Gephi</a>.</p>',
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
  $pane->uuid = 'acda2e45-71c1-46ee-bc57-f97e9d106225';
  $display->content['new-acda2e45-71c1-46ee-bc57-f97e9d106225'] = $pane;
  $display->panels['how_we_made_it'][0] = 'new-acda2e45-71c1-46ee-bc57-f97e9d106225';
  $pane = new stdClass();
  $pane->pid = 'new-269497fc-7a94-4a1a-8399-ce0f28201d6a';
  $pane->panel = 'title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>Seeing through a <em>Praxis</em> Volume</h1>
<p>On this page, we use <a href="https://voyant-tools.org/">Voyant</a> to learn more about the text of the <em>Praxis</em> volume <a href="/praxis/negative"><em>Romanticism and the Rights of the Negative</em></a>.</p>',
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
  $pane->uuid = '269497fc-7a94-4a1a-8399-ce0f28201d6a';
  $display->content['new-269497fc-7a94-4a1a-8399-ce0f28201d6a'] = $pane;
  $display->panels['title'][0] = 'new-269497fc-7a94-4a1a-8399-ce0f28201d6a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_praxis_corpus'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_rc_as_data_corpus';
  $page->task = 'page';
  $page->admin_title = 'Data RC as Data Corpus';
  $page->admin_description = '';
  $page->path = 'data/rc-as-data';
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
  $handler->name = 'page_data_rc_as_data_corpus__panel';
  $handler->task = 'page';
  $handler->subtask = 'data_rc_as_data_corpus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-corpus',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:data_corpus_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'how_we_made_it' => NULL,
      'downloads' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f6d5a47-f0d7-4837-b14b-253f50619b75';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data_rc_as_data_corpus__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-38ea2b10-d8ec-4dfd-b46d-36e6a4c7fe95';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'charts_demo';
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
    'display' => 'default',
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
  $pane->uuid = '38ea2b10-d8ec-4dfd-b46d-36e6a4c7fe95';
  $display->content['new-38ea2b10-d8ec-4dfd-b46d-36e6a4c7fe95'] = $pane;
  $display->panels['center'][0] = 'new-38ea2b10-d8ec-4dfd-b46d-36e6a4c7fe95';
  $pane = new stdClass();
  $pane->pid = 'new-1bd56b75-1df6-44c0-bcdd-066332ce8958';
  $pane->panel = 'title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>RC as Data</h1>
<p>This is where some short words about the resource and corpus go.</p>',
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
  $pane->uuid = '1bd56b75-1df6-44c0-bcdd-066332ce8958';
  $display->content['new-1bd56b75-1df6-44c0-bcdd-066332ce8958'] = $pane;
  $display->panels['title'][0] = 'new-1bd56b75-1df6-44c0-bcdd-066332ce8958';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_rc_as_data_corpus'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_space_and_place_corpus';
  $page->task = 'page';
  $page->admin_title = 'Data Space and Place Corpus';
  $page->admin_description = '';
  $page->path = 'data/space-place';
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
  $handler->name = 'page_data_space_and_place_corpus__panel';
  $handler->task = 'page';
  $handler->subtask = 'data_space_and_place_corpus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-corpus',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:data_corpus_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'how_we_made_it' => NULL,
      'downloads' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3757107b-ed79-4b30-bac7-b4a23658963e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data_space_and_place_corpus__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5670a67a-d8f4-45c0-836f-1a50ee876762';
  $pane->panel = 'center';
  $pane->type = 'openlayers_map';
  $pane->subtype = 'southey_places_map';
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
  $pane->uuid = '5670a67a-d8f4-45c0-836f-1a50ee876762';
  $display->content['new-5670a67a-d8f4-45c0-836f-1a50ee876762'] = $pane;
  $display->panels['center'][0] = 'new-5670a67a-d8f4-45c0-836f-1a50ee876762';
  $pane = new stdClass();
  $pane->pid = 'new-82149f21-7b3e-433d-84e7-3e7f21626a7d';
  $pane->panel = 'downloads';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>Downloads</h2>
<p>You can download a package of the Southey Letters\' location data <a href="https://www.rc.umd.edu/sites/default/files/imported/data/corpuses/3-Southey-people-places.zip">here</a>. This package includes data in both .xml and .geojson formats.</p>',
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
  $pane->uuid = '82149f21-7b3e-433d-84e7-3e7f21626a7d';
  $display->content['new-82149f21-7b3e-433d-84e7-3e7f21626a7d'] = $pane;
  $display->panels['downloads'][0] = 'new-82149f21-7b3e-433d-84e7-3e7f21626a7d';
  $pane = new stdClass();
  $pane->pid = 'new-e17c8359-5d01-4511-b287-168e8890332e';
  $pane->panel = 'how_we_made_it';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>How We Made This</h2>
<p>This map takes advantage of Drupal\'s (our site\'s content management system) robust set of modules, which we can use to add all kinds of functions. We encoded placenames from the Southey Letters in an .xml file and then trained an OpenLayers module on the data to produce this map. You could get similar results using a dedicated mapping platform like <a href="https://www.esri.com/en-us/home">ESRI</a> or <a href="https://carto.com/">Carto</a>, or an open-source data visualization program like <a href="https://d3js.org/">D3</a>.</p>',
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
  $pane->uuid = 'e17c8359-5d01-4511-b287-168e8890332e';
  $display->content['new-e17c8359-5d01-4511-b287-168e8890332e'] = $pane;
  $display->panels['how_we_made_it'][0] = 'new-e17c8359-5d01-4511-b287-168e8890332e';
  $pane = new stdClass();
  $pane->pid = 'new-4ef85ec9-69f6-4367-99b9-d51006c9d7b3';
  $pane->panel = 'title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>Space and Place in the <em>Southey Letters</em></h1>
<p>This <a href="https://openlayers.org/">OpenLayers</a> map shows the named placed in <em>Romantic Circles</em>\' edition of the <a href="/editions/southey_letters/">Letters of Robert Southey</a>.</p>',
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
  $pane->uuid = '4ef85ec9-69f6-4367-99b9-d51006c9d7b3';
  $display->content['new-4ef85ec9-69f6-4367-99b9-d51006c9d7b3'] = $pane;
  $display->panels['title'][0] = 'new-4ef85ec9-69f6-4367-99b9-d51006c9d7b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_space_and_place_corpus'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'export_interface';
  $page->task = 'page';
  $page->admin_title = 'Export Interface';
  $page->admin_description = '';
  $page->path = 'data/exports';
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
  $handler->name = 'page_export_interface__panel';
  $handler->task = 'page';
  $handler->subtask = 'export_interface';
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
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'eab0afe7-f38f-4060-936e-9a55b1e968fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_export_interface__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-01c54d27-baf0-491c-992d-845c84e230be';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'export_interface';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
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
  $pane->uuid = '01c54d27-baf0-491c-992d-845c84e230be';
  $display->content['new-01c54d27-baf0-491c-992d-845c84e230be'] = $pane;
  $display->panels['center'][0] = 'new-01c54d27-baf0-491c-992d-845c84e230be';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01c54d27-baf0-491c-992d-845c84e230be';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['export_interface'] = $page;

  return $pages;

}
