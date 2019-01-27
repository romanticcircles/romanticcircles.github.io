<?php
/**
 * @file
 * rc_data.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function rc_data_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'data_corpus_page';
  $layout->admin_title = 'data corpus page';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'title',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Visualization',
        'width' => '74.99949393736968',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'title' => array(
        'type' => 'region',
        'title' => 'Title',
        'width' => '25.000506062630315',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'how_we_made_it',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'how_we_made_it' => array(
        'type' => 'region',
        'title' => 'How We Made It',
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
          0 => 'downloads',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'downloads' => array(
        'type' => 'region',
        'title' => 'Downloads',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['data_corpus_page'] = $layout;

  return $export;
}
