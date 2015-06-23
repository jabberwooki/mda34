<?php
/**
 * @file
 * mda_contacts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mda_contacts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-mda_contact'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mda_contact',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'mda' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mda',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
