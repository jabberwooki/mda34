<?php
/**
 * @file
 * mda_articles.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mda_articles_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Présentation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bf758768-f301-433f-9ae3-75517d424535',
    'vocabulary_machine_name' => 'article_types',
    'metatags' => array(),
  );
  return $terms;
}
