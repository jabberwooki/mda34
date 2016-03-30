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
  $box->title = 'premiers partenaires';
  $box->description = 'Premiers partenaires';
  $box->options = array(
    'body' => array(
      'value' => '<p align="center"><img alt="" src="http://www.mda34.bac/sites/default/files/styles/large/public/thumbnails/image/part-pocket.jpg" style="width: 301px; height: 347px;" /></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['boite_partenaires_pocket'] = $box;

  return $export;
}
