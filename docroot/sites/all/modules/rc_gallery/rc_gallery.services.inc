<?php
/**
 * @file
 * rc_gallery.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function rc_gallery_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'gallery';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'service_gallery';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'xml' => TRUE,
      'bencode' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/xml' => TRUE,
      'text/xml' => TRUE,
      'application/vnd.php.serialized' => FALSE,
      'multipart/form-data' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'gallery_image' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['gallery'] = $endpoint;

  return $export;
}
