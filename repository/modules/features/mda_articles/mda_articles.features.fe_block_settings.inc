<?php
/**
 * @file
 * mda_articles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mda_articles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-boite_partenaires_pocket'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'boite_partenaires_pocket',
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

  $export['views-articles-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'articles-block_1',
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
