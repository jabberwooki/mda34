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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_front_ados' => array(
          'module' => 'views',
          'delta' => 'news-block_front_ados',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-news-block_front_parents' => array(
          'module' => 'views',
          'delta' => 'news-block_front_parents',
          'region' => 'preface_second',
          'weight' => '-2',
        ),
        'views-news-block_front_pros' => array(
          'module' => 'views',
          'delta' => 'news-block_front_pros',
          'region' => 'preface_third',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_front_portal'] = $context;

  return $export;
}
