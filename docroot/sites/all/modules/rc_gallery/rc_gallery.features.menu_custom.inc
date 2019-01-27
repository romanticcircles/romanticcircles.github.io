<?php
/**
 * @file
 * rc_gallery.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function rc_gallery_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-romantic-circles-gallery.
  $menus['menu-romantic-circles-gallery'] = array(
    'menu_name' => 'menu-romantic-circles-gallery',
    'title' => 'Romantic Circles Gallery',
    'description' => 'Menu system for the RC Gallery',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu system for the RC Gallery');
  t('Romantic Circles Gallery');

  return $menus;
}
