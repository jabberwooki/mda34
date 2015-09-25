<?php
/**
 * @file
 * mda_zoom.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_zoom_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'zoom';
  $context->description = '';
  $context->tag = 'Zoom';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
        3 => 3,
        4 => 4,
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
        'views-slides-block_sites_zoom' => array(
          'module' => 'views',
          'delta' => 'slides-block_sites_zoom',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Zoom');
  $export['zoom'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'zoom_portal';
  $context->description = '';
  $context->tag = 'Zoom';
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
        'views-slides-block_portal_zoom' => array(
          'module' => 'views',
          'delta' => 'slides-block_portal_zoom',
          'region' => 'zoom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Zoom');
  $export['zoom_portal'] = $context;

  return $export;
}
