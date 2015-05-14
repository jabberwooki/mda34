<?php
/**
 * @file
 * mda_radio.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mda_radio_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-3f4e173bd26d52126cc2667994a7a13f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3f4e173bd26d52126cc2667994a7a13f',
    'module' => 'views',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
