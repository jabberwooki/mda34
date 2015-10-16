<?php
/**
 * @file
 * mda_articles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_articles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pocket-front';
  $context->description = 'Pocket front';
  $context->tag = 'Pocket';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
    'path' => array(
      'values' => array(
        'rubrique/*' => 'rubrique/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-multimedia-block_3' => array(
          'module' => 'views',
          'delta' => 'multimedia-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-multimedia-laureat' => array(
          'module' => 'views',
          'delta' => 'multimedia-laureat',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pocket');
  t('Pocket front');
  $export['pocket-front'] = $context;

  return $export;
}
