<?php
/**
 * @file
 * kcore.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcore_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_all';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        4 => 4,
        6 => 6,
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  $export['search_all'] = $context;

  return $export;
}
