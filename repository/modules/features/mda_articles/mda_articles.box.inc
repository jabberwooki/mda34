<?php
/**
 * @file
 * mda_articles.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mda_articles_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'boite_partenaires_pocket';
  $box->plugin_key = 'simple';
  $box->title = 'Partenaires';
  $box->description = 'Premiers partenaires';
  $box->options = array(
    'body' => array(
      'value' => '<p align="center"><img alt="" src="/sites/default/files/styles/large/public/thumbnails/image/logos_parternaires_pocketfilm2016_0.jpg" /></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['boite_partenaires_pocket'] = $box;

  return $export;
}
