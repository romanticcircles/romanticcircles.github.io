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
  $mini->name = 'front_page_genres';
  $mini->category = 'front';
  $mini->admin_title = 'Genre';
  $mini->admin_description = 'Shows all the relevant front page genres';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
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
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'theory_and_criticism' => NULL,
      'right' => NULL,
      'top' => NULL,
      'criticism' => NULL,
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
  $pane->panel = 'center';
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
  $display->panels['center'][0] = 'new-76e8d142-8eec-4203-9fd2-441fc2c3776c';
  $pane = new stdClass();
  $pane->pid = 'new-1dc64cb2-3a4a-4243-a243-3ba8d5c77ffe';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'genre_slider_theory_crit';
  $pane->shown = FALSE;
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
  $pane->uuid = '1dc64cb2-3a4a-4243-a243-3ba8d5c77ffe';
  $display->content['new-1dc64cb2-3a4a-4243-a243-3ba8d5c77ffe'] = $pane;
  $display->panels['center'][1] = 'new-1dc64cb2-3a4a-4243-a243-3ba8d5c77ffe';
  $pane = new stdClass();
  $pane->pid = 'new-71bcc334-5136-4456-8530-73a7b095f8bd';
  $pane->panel = 'center';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '71bcc334-5136-4456-8530-73a7b095f8bd';
  $display->content['new-71bcc334-5136-4456-8530-73a7b095f8bd'] = $pane;
  $display->panels['center'][2] = 'new-71bcc334-5136-4456-8530-73a7b095f8bd';
  $pane = new stdClass();
  $pane->pid = 'new-5251b472-3a88-4e0a-8ac6-2adab6bbe996';
  $pane->panel = 'center';
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
  $display->panels['center'][3] = 'new-5251b472-3a88-4e0a-8ac6-2adab6bbe996';
  $pane = new stdClass();
  $pane->pid = 'new-93608ecf-2469-4754-b540-e758cefa947b';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'genre_slider_drama_2';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '93608ecf-2469-4754-b540-e758cefa947b';
  $display->content['new-93608ecf-2469-4754-b540-e758cefa947b'] = $pane;
  $display->panels['center'][4] = 'new-93608ecf-2469-4754-b540-e758cefa947b';
  $pane = new stdClass();
  $pane->pid = 'new-11829890-5cc8-4c24-a24e-772bfd818e9e';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="more-link"><a href="/genres">Explore all genres</a></div>',
    'format' => '3',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '11829890-5cc8-4c24-a24e-772bfd818e9e';
  $display->content['new-11829890-5cc8-4c24-a24e-772bfd818e9e'] = $pane;
  $display->panels['center'][5] = 'new-11829890-5cc8-4c24-a24e-772bfd818e9e';
  $pane = new stdClass();
  $pane->pid = 'new-96a38738-a7c5-4395-9e45-d4535bd7aa3d';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Explanation',
    'title' => '',
    'body' => '<p>Below is a snaphsot of some of the document genres represented at RC. A filterable list of all resources and genres is available <a href="/genres">here</a>.</p>',
    'format' => '1',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96a38738-a7c5-4395-9e45-d4535bd7aa3d';
  $display->content['new-96a38738-a7c5-4395-9e45-d4535bd7aa3d'] = $pane;
  $display->panels['top'][0] = 'new-96a38738-a7c5-4395-9e45-d4535bd7aa3d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76e8d142-8eec-4203-9fd2-441fc2c3776c';
  $mini->display = $display;
  $export['front_page_genres'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'labs';
  $mini->category = 'front';
  $mini->admin_title = 'Labs';
  $mini->admin_description = 'The labs tab';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '60.06800026407869',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '39.93199973592131',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
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
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d389a46-f048-4faa-9fd9-f1af20a77831';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'labs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-74726f2e-af0b-42d3-8794-2e34bfa8f273';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Tools/Integrations',
    'title' => 'Tools/Integrations',
    'body' => '<p><h4>CWRC Writer</h4></p><p><a href="http://www.cwrc.ca/projects/infrastructure-projects/technical-projects/cwrc-writer/" target="_blank"><img alt="CWRC" src="/sites/default/files/CWRC_Dec-2-10_smaller_0.png" style="width: 578px; height: 103px; border-width: 0px; border-style: solid;" /></a></p><p><h4>Voyant Tools</h4></p><p><span style="font-size:16px;"><a href="http://voyant-tools.org/"><img alt="" src="/sites/default/files/voyant-see.png" style="width: 355px; height: 95px; border-width: 0px; border-style: solid;" /></a></span></p><p><h4>ARC / Typewright</h4></p><p><a href="http://idhmcmain.tamu.edu/arcgrant/" target="_blank"><img alt="" src="/sites/default/files/ARC-FinalLogo-Color-copy2.png" style="float: left; width: 100px; height: 100px; border-width: 0px; border-style: solid;" /></a><a href="http://www.18thconnect.org/typewright/documents"><img alt="" src="/sites/default/files/typewright_logo_0.png" style="width: 112px; height: 111px; border-width: 0px; border-style: solid;" /></a></p><p>&nbsp;</p>',
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
  $pane->uuid = '74726f2e-af0b-42d3-8794-2e34bfa8f273';
  $display->content['new-74726f2e-af0b-42d3-8794-2e34bfa8f273'] = $pane;
  $display->panels['center'][0] = 'new-74726f2e-af0b-42d3-8794-2e34bfa8f273';
  $pane = new stdClass();
  $pane->pid = 'new-5dcd42df-5cfb-44af-b5a5-a6643a8c4ac3';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Visualizations',
    'title' => 'Visualizations',
    'body' => '<p>Some example visualizations based on RC Data</p>',
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
  $pane->uuid = '5dcd42df-5cfb-44af-b5a5-a6643a8c4ac3';
  $display->content['new-5dcd42df-5cfb-44af-b5a5-a6643a8c4ac3'] = $pane;
  $display->panels['center'][1] = 'new-5dcd42df-5cfb-44af-b5a5-a6643a8c4ac3';
  $pane = new stdClass();
  $pane->pid = 'new-025e0071-49c1-4528-a696-0eda06165192';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'RC Data',
    'title' => 'RC Data',
    'body' => '<p>Below are some example document exports RC can make available.&nbsp;</p><h4>Corpora</h4><ul>
      <li>Corpus of the <i>Guide to the Lakes</i>&nbsp;edition as an <a class="exportButton" style="font-size: 16px; color:white" href="/editions/52373/resource-rss6.xml" target="_blank">RSS feed</a>.<ul>
        <li>That same Corpus loaded into <a class="exportButton" style="font-size: 16px; color:white" href="http://voyant-tools.org/?corpus=a6e28799133b8b5d8cc5955dd36c79b4&amp;panels=cirrus,reader,trends,summary,contexts" target="_blank">Voyant</a>.</li>
        </ul></li>
      <li><a class="exportButton" style="font-size: 16px; color:white" href="/sites/default/files/imported/editions/guide_lakes/lakesCorpus.xml" target="_blank">TEI Corpus</a> file of&nbsp;<em>Guide to the Lakes</em>.&nbsp;</li>
    </ul><h4>REST Data API endpoints</h4><ul>
      <li>An <a class="exportButton" style="font-size: 16px; color:white" href="http://www.rc.umd.edu/service_gallery/gallery_image.json" target="_blank">JSON index</a> of images in the Romantic Circles Gallery</li>
      <li>That same <a class="exportButton" style="font-size: 16px; color:white" href="http://www.rc.umd.edu/service_gallery/gallery_image.json?collection=36850&amp;pub_date_op=%3E%3D&amp;pub_date[value][year]=1829&amp;pub_date[min][year]=&amp;pub_date[max][year]=" target="_blank">JSON endpoint</a> with query
          parameters to include only images after 1829</li>
    </ul><h4>Other</h4><ul>
      <li><a class="exportButton" style="font-size: 16px; color:white" href="/editions/guide_lakes/places/lakes-geo.csv" target="_blank">CSV</a>&nbsp;of geospatial data in <em>Guide to the Lakes</em> Edition</li>
      <li><a class="exportButton" style="font-size: 16px; color:white" href="/editions/guide_lakes/places/lakes-geo.kml" target="_blank">KML</a>&nbsp;of geospatial data in <em>Guide to the Lakes</em> Edition</li>
      <li>GeoJSON (coming soon)</li>
    </ul><h4>ARC RDF (coming soon)</h4><p>&nbsp;</p>',
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
  $pane->uuid = '025e0071-49c1-4528-a696-0eda06165192';
  $display->content['new-025e0071-49c1-4528-a696-0eda06165192'] = $pane;
  $display->panels['right'][0] = 'new-025e0071-49c1-4528-a696-0eda06165192';
  $pane = new stdClass();
  $pane->pid = 'new-38f1c2bc-6afc-45a1-8ea5-51e51632f47c';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Labs',
    'title' => '',
    'body' => '<p>This area is largely aspirational aspirational. It is designed to showcase both Romantic Circles&#39; data a well as tools and integrations.</p>',
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
  $pane->uuid = '38f1c2bc-6afc-45a1-8ea5-51e51632f47c';
  $display->content['new-38f1c2bc-6afc-45a1-8ea5-51e51632f47c'] = $pane;
  $display->panels['top'][0] = 'new-38f1c2bc-6afc-45a1-8ea5-51e51632f47c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-38f1c2bc-6afc-45a1-8ea5-51e51632f47c';
  $mini->display = $display;
  $export['labs'] = $mini;

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
        'title' => 'Left',
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
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
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
  $pane->pid = 'new-7d0ee10d-2153-4d7a-a730-7a8768833c7f';
  $pane->panel = 'center';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d0ee10d-2153-4d7a-a730-7a8768833c7f';
  $display->content['new-7d0ee10d-2153-4d7a-a730-7a8768833c7f'] = $pane;
  $display->panels['center'][0] = 'new-7d0ee10d-2153-4d7a-a730-7a8768833c7f';
  $pane = new stdClass();
  $pane->pid = 'new-b2861638-b558-4f24-b8f1-5270b8b8c122';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'latest_content_from_reviews_receptions';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b2861638-b558-4f24-b8f1-5270b8b8c122';
  $display->content['new-b2861638-b558-4f24-b8f1-5270b8b8c122'] = $pane;
  $display->panels['left'][0] = 'new-b2861638-b558-4f24-b8f1-5270b8b8c122';
  $pane = new stdClass();
  $pane->pid = 'new-e416a53b-baef-4f3e-bbb7-f2412a750644';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'audio_random';
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
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Selected Audio',
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
  $pane->uuid = 'e416a53b-baef-4f3e-bbb7-f2412a750644';
  $display->content['new-e416a53b-baef-4f3e-bbb7-f2412a750644'] = $pane;
  $display->panels['right'][0] = 'new-e416a53b-baef-4f3e-bbb7-f2412a750644';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['media'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'people';
  $mini->category = 'front';
  $mini->admin_title = 'Authors';
  $mini->admin_description = 'The authors tab';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 49.526346531290223,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center_',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'historical_authors',
        ),
        'parent' => '1',
        'class' => 'Historical Authors',
        'hide_empty' => 0,
      ),
      'historical_authors' => array(
        'type' => 'region',
        'title' => 'Historical Authors',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
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
      'center_' => NULL,
      'photo' => NULL,
      'historical_authors' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '25d2f012-daa9-45b9-85ec-b521165dc8d1';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'people';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b9cac6f8-fa81-499d-8beb-e33de678963d';
  $pane->panel = 'center_';
  $pane->type = 'views';
  $pane->subtype = 'romantic_circles_people_front';
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
    'display' => 'page_2',
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
  $pane->uuid = 'b9cac6f8-fa81-499d-8beb-e33de678963d';
  $display->content['new-b9cac6f8-fa81-499d-8beb-e33de678963d'] = $pane;
  $display->panels['center_'][0] = 'new-b9cac6f8-fa81-499d-8beb-e33de678963d';
  $pane = new stdClass();
  $pane->pid = 'new-9961b901-216f-4275-b2c2-0b25179f1d84';
  $pane->panel = 'historical_authors';
  $pane->type = 'views';
  $pane->subtype = 'romantic_circles_people_front';
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
  $pane->uuid = '9961b901-216f-4275-b2c2-0b25179f1d84';
  $display->content['new-9961b901-216f-4275-b2c2-0b25179f1d84'] = $pane;
  $display->panels['historical_authors'][0] = 'new-9961b901-216f-4275-b2c2-0b25179f1d84';
  $pane = new stdClass();
  $pane->pid = 'new-713ff9b0-a407-45f1-9e5b-b5221b4fbaa2';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'romantic_circles_people_front';
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
  $pane->uuid = '713ff9b0-a407-45f1-9e5b-b5221b4fbaa2';
  $display->content['new-713ff9b0-a407-45f1-9e5b-b5221b4fbaa2'] = $pane;
  $display->panels['left'][0] = 'new-713ff9b0-a407-45f1-9e5b-b5221b4fbaa2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['people'] = $mini;

  return $export;
}
