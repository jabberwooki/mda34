<?php
/**
 * @file
 * mda_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agenda_front';
  $context->description = '';
  $context->tag = 'Agenda';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
        3 => 3,
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
        'views-events-block_front_events' => array(
          'module' => 'views',
          'delta' => 'events-block_front_events',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  $export['agenda_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agenda_front_portal';
  $context->description = '';
  $context->tag = 'Agenda';
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
        'views-events-block_front_ados' => array(
          'module' => 'views',
          'delta' => 'events-block_front_ados',
          'region' => 'preface_first',
          'weight' => '-2',
        ),
        'views-events-block_front_parents' => array(
          'module' => 'views',
          'delta' => 'events-block_front_parents',
          'region' => 'preface_second',
          'weight' => '-6',
        ),
        'views-events-block_front_pros' => array(
          'module' => 'views',
          'delta' => 'events-block_front_pros',
          'region' => 'preface_third',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  $export['agenda_front_portal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agenda_front_pros';
  $context->description = '';
  $context->tag = 'Agenda';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        6 => 6,
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
        'views-events-block_events_pros' => array(
          'module' => 'views',
          'delta' => 'events-block_events_pros',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  $export['agenda_front_pros'] = $context;

  return $export;
}
