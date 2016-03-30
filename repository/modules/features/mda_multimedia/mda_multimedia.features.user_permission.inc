<?php
/**
 * @file
 * mda_multimedia.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mda_multimedia_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'scald',
  );

  return $permissions;
}
