<?php
/**
 * @file
 * mda_zoom.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mda_zoom_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-slides-block_portal_zoom'] = array(
    'cache' => -1,
    'css_class' => 'zoom',
    'custom' => 0,
    'delta' => 'slides-block_portal_zoom',
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

  $export['views-slides-block_sites_zoom'] = array(
    'cache' => -1,
    'css_class' => 'zoom',
    'custom' => 0,
    'delta' => 'slides-block_sites_zoom',
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
