<?php
/**
 * @file
 * mda_contacts.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mda_contacts_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mda_contact';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'MDA Contact';
  $box->options = array(
    'body' => array(
      'value' => '<h3>Tel : 04 67 92 99 18</h3>

<p>La MDA accueille les jeunes avec ou sans rendez-vous du <strong>lundi au vendredi de 13h à 18h</strong><br />
Les familles et les professionnels sont accueillies <strong>sur&nbsp;rendez-vous uniquement</strong>.</p>

<p>9 rue de la République - 34000 Montpellier</p>

<p><iframe frameborder="0" height="400" marginheight="0" marginwidth="0" scrolling="no" src="http://www.openstreetmap.org/export/embed.html?bbox=3.876403570175171%2C43.60503099128943%2C3.8798126578330994%2C43.60677507765297&amp;layer=mapnik&amp;marker=43.605903040792136%2C3.8781094551086426" style="border: 0px solid black" width="750"></iframe></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mda_contact'] = $box;

  return $export;
}
