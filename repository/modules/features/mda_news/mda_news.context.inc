<?php
/**
 * @file
 * mda_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mda_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_front';
  $context->description = '';
  $context->tag = 'News';
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
        'views-news-block_actus' => array(
          'module' => 'views',
          'delta' => 'news-block_actus',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_front_portal';
  $context->description = '';
  $context->tag = 'News';
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
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_front_portal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'veille';
  $context->description = '';
  $context->tag = 'newsletter';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        6 => 6,
      ),
    ),
    'path' => array(
      'values' => array(
        '~agenda' => '~agenda',
        '~faq' => '~faq',
        '~annuaire' => '~annuaire',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kcore-mda_veille' => array(
          'module' => 'kcore',
          'delta' => 'mda_veille',
          'region' => 'sidebar_second',
          'weight' => '7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('newsletter');
  $export['veille'] = $context;

  return $export;
}
