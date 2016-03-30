<?php
/**
 * @file
 * kcore.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kcore_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'custom_search',
  );

  return $permissions;
}
