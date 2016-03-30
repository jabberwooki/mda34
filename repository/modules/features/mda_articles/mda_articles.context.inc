<?php
/**
 * @file
 * mda_articles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_articles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'inscription';
  $context->description = 'Bloc page inscription';
  $context->tag = 'Pocket';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'rubrique/pocket-film/inscription*' => 'rubrique/pocket-film/inscription*',
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
          'weight' => '-10',
        ),
        'views-multimedia-laureat' => array(
          'module' => 'views',
          'delta' => 'multimedia-laureat',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloc page inscription');
  t('Pocket');
  $export['inscription'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pocket-front';
  $context->description = 'Pocket front';
  $context->tag = 'Pocket';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
    'path' => array(
      'values' => array(
        'rubrique/*' => 'rubrique/*',
        'rubrique/pocket-film/*' => 'rubrique/pocket-film/*',
        '~rubrique/pocket-film/inscription/*' => '~rubrique/pocket-film/inscription/*',
        '~rubrique/pocket-film/inscription' => '~rubrique/pocket-film/inscription',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-multimedia-block_3' => array(
          'module' => 'views',
          'delta' => 'multimedia-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'fb_likebox-0' => array(
          'module' => 'fb_likebox',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-multimedia-laureat' => array(
          'module' => 'views',
          'delta' => 'multimedia-laureat',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'entityform_block-pre_inscription_pocket_film' => array(
          'module' => 'entityform_block',
          'delta' => 'pre_inscription_pocket_film',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'boxes-boite_partenaires_pocket' => array(
          'module' => 'boxes',
          'delta' => 'boite_partenaires_pocket',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pocket');
  t('Pocket front');
  $export['pocket-front'] = $context;

  return $export;
}
