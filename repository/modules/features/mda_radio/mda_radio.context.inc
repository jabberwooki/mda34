<?php
/**
 * @file
 * mda_radio.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_radio_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'radio_front';
  $context->description = '';
  $context->tag = 'Radio';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        5 => 5,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3f4e173bd26d52126cc2667994a7a13f' => array(
          'module' => 'views',
          'delta' => '3f4e173bd26d52126cc2667994a7a13f',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Radio');
  $export['radio_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'radio_front_portal';
  $context->description = '';
  $context->tag = 'Radio';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c43722adbb02080189bb918ba68effaa' => array(
          'module' => 'views',
          'delta' => 'c43722adbb02080189bb918ba68effaa',
          'region' => 'preface_first',
          'weight' => '2',
        ),
        'views-01d86890449882dbe0c81230d3ca7cb7' => array(
          'module' => 'views',
          'delta' => '01d86890449882dbe0c81230d3ca7cb7',
          'region' => 'preface_third',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Radio');
  $export['radio_front_portal'] = $context;

  return $export;
}
