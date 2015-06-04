<?php
/**
 * @file
 * mda_faqs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mda_faqs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-parents_faq_link'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'parents_faq_link',
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

  $export['boxes-radio_faq_link'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'radio_faq_link',
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

  $export['views-2538eed9477e4d4ca66b677e97cf28dc'] = array(
    'cache' => -1,
    'css_class' => 'icon-question',
    'custom' => 0,
    'delta' => '2538eed9477e4d4ca66b677e97cf28dc',
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

  $export['views-faqs-block_faqs_parents'] = array(
    'cache' => -1,
    'css_class' => 'green icon-question',
    'custom' => 0,
    'delta' => 'faqs-block_faqs_parents',
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

  $export['views-faqs-block_front_ados'] = array(
    'cache' => -1,
    'css_class' => 'orange icon-question',
    'custom' => 0,
    'delta' => 'faqs-block_front_ados',
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

  $export['views-faqs-block_front_parents'] = array(
    'cache' => -1,
    'css_class' => 'green icon-question',
    'custom' => 0,
    'delta' => 'faqs-block_front_parents',
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
