<?php
/**
 * @file
 * administration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function administration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-boite_contact'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'boite_contact',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['entityform_block-pre_inscription_pocket_film'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'pre_inscription_pocket_film',
    'module' => 'entityform_block',
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
