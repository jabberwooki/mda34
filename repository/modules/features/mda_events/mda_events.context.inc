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
  $context->reactions = array();
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
        'boxes-boite_ados' => array(
          'module' => 'boxes',
          'delta' => 'boite_ados',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'boxes-boite_parents' => array(
          'module' => 'boxes',
          'delta' => 'boite_parents',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'boxes-boite_pro' => array(
          'module' => 'boxes',
          'delta' => 'boite_pro',
          'region' => 'preface_third',
          'weight' => '-10',
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
        'views-news-block_actus' => array(
          'module' => 'views',
          'delta' => 'news-block_actus',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events-block_events_pros' => array(
          'module' => 'views',
          'delta' => 'events-block_events_pros',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  $export['agenda_front_pros'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agenda_pros';
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
        '~agenda' => '~agenda',
        '~formations' => '~formations',
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
  t('Agenda');
  $export['agenda_pros'] = $context;

  return $export;
}
