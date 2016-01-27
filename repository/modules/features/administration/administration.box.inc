<?php
/**
 * @file
 * administration.box.inc
 */

/**
 * Implements hook_default_box().
 */
function administration_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'boite_contact';
  $box->plugin_key = 'simple';
  $box->title = 'Nous contacter';
  $box->description = 'boite contact';
  $box->options = array(
    'body' => array(
      'value' => '<h3 class="rtecenter">04 67 92 99 18</h3>

<p class="rtecenter">Accueil possible sans rendez vous pour les jeunes,<br />
et avec rendez vous pour les parents et les professionnels, du lundi au vendredi de 13h à 18h.</p>

<p class="rtecenter">&nbsp;</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['boite_contact'] = $box;

  return $export;
}
