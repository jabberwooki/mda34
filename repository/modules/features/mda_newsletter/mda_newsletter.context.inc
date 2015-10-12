<?php
/**
 * @file
 * mda_newsletter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_newsletter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newsletter_all';
  $context->description = '';
  $context->tag = 'Newsletter';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
      ),
    ),
    'path' => array(
      'values' => array(
        '~agenda' => '~agenda',
        '~faq' => '~faq',
        '~annuaire' => '~annuaire',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Newsletter');
  $export['newsletter_all'] = $context;

  return $export;
}
