<?php
/**
 * @file
 * reviews_and_ficrep.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reviews_and_ficrep_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reviews_and_ficrep_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function reviews_and_ficrep_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('A generic content type to handle items, such as novels, plays, movies, etc. that we want to create db entries for. In its first incarnation, this will be used to revamp the Fictional Representations of Romantics and Romanticism resource. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'review' => array(
      'name' => t('Review entry'),
      'base' => 'node_content',
      'description' => t('Like a blog entry but for the reviews blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
