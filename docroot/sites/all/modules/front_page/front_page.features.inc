<?php
/**
 * @file
 * front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function front_page_image_default_styles() {
  $styles = array();

  // Exported image style: genre_slider__368_x_auto_.
  $styles['genre_slider__368_x_auto_'] = array(
    'label' => 'Genre slider (368 x auto)',
    'effects' => array(
      47 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 368,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
