<?php
/**
 * @file
 * mda_faqs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_faqs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq_front_portal';
  $context->description = '';
  $context->tag = 'FAQs';
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
        'views-faqs-block_front_ados' => array(
          'module' => 'views',
          'delta' => 'faqs-block_front_ados',
          'region' => 'preface_first',
          'weight' => '-6',
        ),
        'views-faqs-block_front_parents' => array(
          'module' => 'views',
          'delta' => 'faqs-block_front_parents',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs');
  $export['faq_front_portal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq_parents';
  $context->description = '';
  $context->tag = 'FAQs';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        3 => 3,
      ),
    ),
    'path' => array(
      'values' => array(
        '~faq*' => '~faq*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-faqs-block_faqs_parents' => array(
          'module' => 'views',
          'delta' => 'faqs-block_faqs_parents',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs');
  $export['faq_parents'] = $context;

  return $export;
}
