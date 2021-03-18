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

  // Exported image style: cropped_rc_people.
  $styles['cropped_rc_people'] = array(
    'label' => 'Cropped RC People',
    'effects' => array(
      42 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 200,
        ),
        'weight' => 2,
      ),
      43 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: front_banner.
  $styles['front_banner'] = array(
    'label' => 'front_banner',
    'effects' => array(),
  );

  // Exported image style: front_slider__280px_x_n_.
  $styles['front_slider__280px_x_n_'] = array(
    'label' => 'Front Slider (280px x auto)',
    'effects' => array(
      46 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_thumbnail.
  $styles['front_thumbnail'] = array(
    'label' => 'front_thumbnail',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 138,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: front_thumbnail2.
  $styles['front_thumbnail2'] = array(
    'label' => 'front_thumbnail2',
    'effects' => array(
      25 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 142,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

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
