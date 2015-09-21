<?php
/**
 * @file
 * mda_resources.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_resources_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_philado';
  $context->description = '';
  $context->tag = 'Resources';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        4 => 4,
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
        'views-philado-block' => array(
          'module' => 'views',
          'delta' => 'philado-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events-block_pros_trainings' => array(
          'module' => 'views',
          'delta' => 'events-block_pros_trainings',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-philado_resources_link' => array(
          'module' => 'boxes',
          'delta' => 'philado_resources_link',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');
  $export['resources_philado'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_pros';
  $context->description = '';
  $context->tag = 'Resources';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        6 => 6,
      ),
    ),
    'path' => array(
      'values' => array(
        '~agenda' => '~agenda',
        '~ressources' => '~ressources',
        '~annuaire' => '~annuaire',
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
        'boxes-pros_resources_link' => array(
          'module' => 'boxes',
          'delta' => 'pros_resources_link',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');
  $export['resources_pros'] = $context;

  return $export;
}
