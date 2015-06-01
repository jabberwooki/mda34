<?php
/**
 * @file
 * kcore.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kcore_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['kcore-mda_shortcut_ados'] = array(
    'cache' => -1,
    'css_class' => 'col-sm-4',
    'custom' => 0,
    'delta' => 'mda_shortcut_ados',
    'module' => 'kcore',
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

  $export['kcore-mda_shortcut_parents'] = array(
    'cache' => -1,
    'css_class' => 'col-sm-4',
    'custom' => 0,
    'delta' => 'mda_shortcut_parents',
    'module' => 'kcore',
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

  $export['kcore-mda_shortcut_pros'] = array(
    'cache' => -1,
    'css_class' => 'col-sm-4',
    'custom' => 0,
    'delta' => 'mda_shortcut_pros',
    'module' => 'kcore',
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

  $export['menu-menu-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-shortcuts',
    'module' => 'menu',
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

  $export['menu-menu-top-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-top-menu',
    'module' => 'menu',
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
