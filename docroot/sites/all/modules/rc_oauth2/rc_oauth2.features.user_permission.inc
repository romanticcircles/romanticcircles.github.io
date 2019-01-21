<?php
/**
 * @file
 * rc_oauth2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rc_oauth2_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer oauth2 server'.
  $permissions['administer oauth2 server'] = array(
    'name' => 'administer oauth2 server',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'oauth2_server',
  );

  // Exported permission: 'use oauth2 server'.
  $permissions['use oauth2 server'] = array(
    'name' => 'use oauth2 server',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'oauth2_server',
  );

  return $permissions;
}
