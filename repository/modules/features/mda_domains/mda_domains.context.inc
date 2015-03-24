<?php
/**
 * @file
 * mda_domains.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_domains_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'domain_all';
  $context->description = '';
  $context->tag = 'Domains';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mda_domains-mda_domain_name' => array(
          'module' => 'mda_domains',
          'delta' => 'mda_domain_name',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Domains');
  $export['domain_all'] = $context;

  return $export;
}
