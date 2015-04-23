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
        'views-c3871541e49762b8423f91dd14cecd03' => array(
          'module' => 'views',
          'delta' => 'c3871541e49762b8423f91dd14cecd03',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Radio');
  $export['radio_front'] = $context;

  return $export;
}
