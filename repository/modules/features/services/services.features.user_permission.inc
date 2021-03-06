<?php
/**
 * @file
 * services.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function services_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access mollom statistics'.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer mollom'.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'bypass mollom protection'.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'professionnel' => 'professionnel',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'report to mollom'.
  $permissions['report to mollom'] = array(
    'name' => 'report to mollom',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'mollom',
  );

  return $permissions;
}
