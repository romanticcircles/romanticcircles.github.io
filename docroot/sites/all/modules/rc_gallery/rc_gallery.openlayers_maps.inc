<?php
/**
 * @file
 * rc_gallery.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function rc_gallery_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'gallery_map';
  $openlayers_maps->title = 'Gallery Map';
  $openlayers_maps->description = 'Map showing Gallery images with locations';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-46.75781249881098, 43.068887773162984',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-673413.175842,6781948.815245,-618066.855433,6837295.135655',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_hover' => array(
        'layers' => array(
          'gallery_map_openlayers_1' => 'gallery_map_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
        'div' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'gallery_map_openlayers_1' => 'gallery_map_openlayers_1',
        ),
        'panMapIfOutOfView' => 1,
        'keepInMap' => 0,
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_normal' => 'google_normal',
      'mapquest_osm' => 'mapquest_osm',
      'google_physical' => 'google_physical',
      'google_satellite' => 'google_satellite',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'guide_to_the_lakes_places_overlay_9' => 'guide_to_the_lakes_places_overlay_9',
      'cary_john_map_of_england_1807' => 'cary_john_map_of_england_1807',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => 'arrowsmith_aaron_map_of_england_and_wales_1820_',
      'composite_cary_s_england_wales_and_scotland_1794' => 'composite_cary_s_england_wales_and_scotland_1794',
      'gallery_map_openlayers_1' => 'gallery_map_openlayers_1',
      'guide_to_the_lakes_3rd_ed_1822_map' => 'guide_to_the_lakes_3rd_ed_1822_map',
    ),
    'layer_weight' => array(
      'guide_to_the_lakes_places_overlay_9' => '-1',
      'cary_john_map_of_england_1807' => '-1',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => '-1',
      'composite_cary_s_england_wales_and_scotland_1794' => '-1',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'gallery_map_openlayers_1' => '0',
      'guide_to_the_lakes_3rd_ed_1822_map' => '0',
      'southey_places_map' => '0',
      'clone_of_guide_to_the_lakes_places_map_2_openlayers_1' => '0',
      'southey_places_map_openlayers_1' => '0',
      'guide_to_the_lakes_places_map_openlayers_1' => '0',
      'guide_to_the_lakes_places_overlay_original' => '0',
      'geofield_formatter' => '0',
      'map_per_node_openlayers_1' => '1',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'map_per_node_openlayers_1' => 'default_marker_black_small',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'southey_places_map' => '0',
      'southey_places_map_openlayers_1' => '0',
      'guide_to_the_lakes_places_overlay_original' => '0',
      'composite_cary_s_england_wales_and_scotland_1794' => '0',
      'guide_to_the_lakes_places_map_openlayers_1' => '0',
      'clone_of_guide_to_the_lakes_places_map_2_openlayers_1' => '0',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => '0',
      'guide_to_the_lakes_places_overlay_9' => '0',
      'gallery_map_openlayers_1' => 'default_marker_black_small',
      'cary_john_map_of_england_1807' => '0',
      'guide_to_the_lakes_3rd_ed_1822_map' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'map_per_node_openlayers_1' => 'default_marker_black_small',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'southey_places_map' => '0',
      'southey_places_map_openlayers_1' => '0',
      'guide_to_the_lakes_places_overlay_original' => '0',
      'composite_cary_s_england_wales_and_scotland_1794' => '0',
      'guide_to_the_lakes_places_map_openlayers_1' => '0',
      'clone_of_guide_to_the_lakes_places_map_2_openlayers_1' => '0',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => '0',
      'guide_to_the_lakes_places_overlay_9' => '0',
      'gallery_map_openlayers_1' => 'default_marker_black_small',
      'cary_john_map_of_england_1807' => '0',
      'guide_to_the_lakes_3rd_ed_1822_map' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'map_per_node_openlayers_1' => 'default_marker_black_small',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'southey_places_map' => '0',
      'southey_places_map_openlayers_1' => '0',
      'guide_to_the_lakes_places_overlay_original' => '0',
      'composite_cary_s_england_wales_and_scotland_1794' => '0',
      'guide_to_the_lakes_places_map_openlayers_1' => '0',
      'clone_of_guide_to_the_lakes_places_map_2_openlayers_1' => '0',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => '0',
      'guide_to_the_lakes_places_overlay_9' => '0',
      'gallery_map_openlayers_1' => 'default_marker_black_small',
      'cary_john_map_of_england_1807' => '0',
      'guide_to_the_lakes_3rd_ed_1822_map' => '0',
    ),
    'layer_activated' => array(
      'gallery_map_openlayers_1' => 'gallery_map_openlayers_1',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => 0,
      'guide_to_the_lakes_places_overlay_9' => 0,
      'cary_john_map_of_england_1807' => 0,
      'guide_to_the_lakes_3rd_ed_1822_map' => 0,
      'geofield_formatter' => 0,
      'map_per_node_openlayers_1' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'southey_places_map' => 0,
      'southey_places_map_openlayers_1' => 0,
      'guide_to_the_lakes_places_overlay_original' => 0,
      'composite_cary_s_england_wales_and_scotland_1794' => 0,
      'guide_to_the_lakes_places_map_openlayers_1' => 0,
      'clone_of_guide_to_the_lakes_places_map_2_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'composite_cary_s_england_wales_and_scotland_1794' => 'composite_cary_s_england_wales_and_scotland_1794',
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => 'arrowsmith_aaron_map_of_england_and_wales_1820_',
      'guide_to_the_lakes_places_overlay_9' => 'guide_to_the_lakes_places_overlay_9',
      'gallery_map_openlayers_1' => 'gallery_map_openlayers_1',
      'cary_john_map_of_england_1807' => 'cary_john_map_of_england_1807',
      'guide_to_the_lakes_3rd_ed_1822_map' => 'guide_to_the_lakes_3rd_ed_1822_map',
      'geofield_formatter' => 0,
      'map_per_node_openlayers_1' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'southey_places_map' => 0,
      'southey_places_map_openlayers_1' => 0,
      'guide_to_the_lakes_places_overlay_original' => 0,
      'guide_to_the_lakes_places_map_openlayers_1' => 0,
      'clone_of_guide_to_the_lakes_places_map_2_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default_marker_black_small',
      'select' => 'default_marker_black_small',
      'temporary' => 'default_marker_black_small',
    ),
  );
  $export['gallery_map'] = $openlayers_maps;

  return $export;
}
