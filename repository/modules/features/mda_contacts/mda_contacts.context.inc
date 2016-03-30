<?php
/**
 * @file
 * mda_contacts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_contacts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = 'Contact';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-mda_contact' => array(
          'module' => 'boxes',
          'delta' => 'mda_contact',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  $export['contact'] = $context;

  return $export;
}
