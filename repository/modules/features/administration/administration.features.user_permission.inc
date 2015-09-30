<?php
/**
 * @file
 * administration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function administration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access mollom statistics'.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      'administrateur' => 'administrateur',
      'equipe mda' => 'equipe mda',
      'superadmin' => 'superadmin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access scald dnd library'.
  $permissions['access scald dnd library'] = array(
    'name' => 'access scald dnd library',
    'roles' => array(
      'administrateur' => 'administrateur',
      'equipe mda' => 'equipe mda',
      'superadmin' => 'superadmin',
    ),
    'module' => 'scald_dnd_library',
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

  // Exported permission: 'administer boxes'.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'boxes',
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

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass mollom protection'.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      'administrateur' => 'administrateur',
      'equipe mda' => 'equipe mda',
      'superadmin' => 'superadmin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrateur' => 'administrateur',
      'superadmin' => 'superadmin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'admin philado' => 'admin philado',
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'equipe mda' => 'equipe mda',
      'equipe philado' => 'equipe philado',
      'professionnel' => 'professionnel',
      'superadmin' => 'superadmin',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'edit boxes'.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'boxes',
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

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(),
    'module' => 'better_formats',
  );

  return $permissions;
}
