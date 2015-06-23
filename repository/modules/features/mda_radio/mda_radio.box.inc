<?php
/**
 * @file
 * mda_radio.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mda_radio_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'radio_content_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'MDA : En-tête contenu radio';
  $box->options = array(
    'body' => array(
      'value' => '<h2 class="icon-radio">ECOUTEZ VOTRE RADIO&nbsp;MDA34<!--2--></h2>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['radio_content_header'] = $box;

  return $export;
}
