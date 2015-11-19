<?php
/**
 * @file
 * administration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function administration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pocket';
  $context->description = ' bloc droite all pocket';
  $context->tag = 'Pocket';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        268 => 268,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fb_likebox-0' => array(
          'module' => 'fb_likebox',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-multimedia-laureat' => array(
          'module' => 'views',
          'delta' => 'multimedia-laureat',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
        'entityform_block-pre_inscription_pocket_film' => array(
          'module' => 'entityform_block',
          'delta' => 'pre_inscription_pocket_film',
          'region' => 'sidebar_second',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t(' bloc droite all pocket');
  t('Pocket');
  $export['pocket'] = $context;

  return $export;
}
