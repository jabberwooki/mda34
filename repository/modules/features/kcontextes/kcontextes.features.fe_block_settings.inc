<?php
/**
 * @file
 * kcontextes.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kcontextes_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-social_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'social_links',
    'module' => 'block',
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
