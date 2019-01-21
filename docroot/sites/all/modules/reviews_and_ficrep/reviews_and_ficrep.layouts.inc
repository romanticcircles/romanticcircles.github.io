<?php
/**
 * @file
 * reviews_and_ficrep.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function reviews_and_ficrep_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = '2_col_standard';
  $layout->admin_title = '2 col. standard';
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
  $export['2_col_standard'] = $layout;

  return $export;
}
