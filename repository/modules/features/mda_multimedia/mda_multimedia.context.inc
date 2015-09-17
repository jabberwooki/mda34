<?php
/**
 * @file
 * mda_multimedia.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_multimedia_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_all';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
        3 => 3,
        5 => 5,
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-multimedia-block_last_video' => array(
          'module' => 'views',
          'delta' => 'multimedia-block_last_video',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');
  $export['video_all'] = $context;

  return $export;
}
