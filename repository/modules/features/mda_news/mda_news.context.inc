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
        'views-news-block_4' => array(
          'module' => 'views',
          'delta' => 'news-block_4',
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
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-news-block_2' => array(
          'module' => 'views',
          'delta' => 'news-block_2',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-news-block_3' => array(
          'module' => 'views',
          'delta' => 'news-block_3',
          'region' => 'preface_third',
          'weight' => '-10',
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
