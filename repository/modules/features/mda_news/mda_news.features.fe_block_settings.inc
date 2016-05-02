<?php
/**
 * @file
 * mda_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mda_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news-block_1',
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

  $export['views-news-block_actus'] = array(
    'cache' => -1,
    'css_class' => 'icon-doc',
    'custom' => 0,
    'delta' => 'news-block_actus',
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

  $export['views-news-block_front_ados'] = array(
    'cache' => -1,
    'css_class' => 'icon-doc orange',
    'custom' => 0,
    'delta' => 'news-block_front_ados',
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

  $export['views-news-block_front_parents'] = array(
    'cache' => -1,
    'css_class' => 'icon-doc green',
    'custom' => 0,
    'delta' => 'news-block_front_parents',
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

  $export['views-news-block_front_pros'] = array(
    'cache' => -1,
    'css_class' => 'icon-doc violet',
    'custom' => 0,
    'delta' => 'news-block_front_pros',
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
