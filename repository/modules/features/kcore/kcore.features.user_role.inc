<?php
/**
 * @file
 * kcore.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kcore_user_default_roles() {
  $roles = array();

  // Exported role: admin philado.
  $roles['admin philado'] = array(
    'name' => 'admin philado',
    'weight' => 4,
    'machine_name' => 'admin_philado',
  );

  // Exported role: administrateur.
  $roles['administrateur'] = array(
    'name' => 'administrateur',
    'weight' => 6,
    'machine_name' => 'administrateur',
  );

  // Exported role: equipe mda.
  $roles['equipe mda'] = array(
    'name' => 'equipe mda',
    'weight' => 5,
    'machine_name' => 'equipe_mda',
  );

  // Exported role: equipe philado.
  $roles['equipe philado'] = array(
    'name' => 'equipe philado',
    'weight' => 3,
    'machine_name' => 'equipe_philado',
  );

  // Exported role: professionnel.
  $roles['professionnel'] = array(
    'name' => 'professionnel',
    'weight' => 2,
    'machine_name' => 'professionnel',
  );

  // Exported role: superadmin.
  $roles['superadmin'] = array(
    'name' => 'superadmin',
    'weight' => 7,
    'machine_name' => 'superadmin',
  );

  return $roles;
}
