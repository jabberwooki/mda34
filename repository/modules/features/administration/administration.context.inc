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
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'rubrique/pocket-film' => 'rubrique/pocket-film',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'entityform_block-pre_inscription_pocket_film' => array(
          'module' => 'entityform_block',
          'delta' => 'pre_inscription_pocket_film',
          'region' => 'sidebar_second',
          'weight' => '11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t(' bloc droite all pocket');
  t('Pocket');
  $export['pocket'] = $context;

  return $export;
}
