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
      'value' => '<p>MDA 34<br />
9 rue de la République<br />
34000 Montpellier<br />
<strong>04 67 92 99 18</strong></p>

<p><iframe frameborder="0" height="350" scrolling="no" src="http://cartosm.eu/map?lon=3.8781475&amp;lat=43.6059082&amp;zoom=17&amp;width=600&amp;height=350&amp;mark=true&amp;nav=true&amp;pan=true&amp;zb=inout&amp;style=default&amp;icon=down" width="600"></iframe></p>

<p><a href="http://www.openstreetmap.org/?mlat=43.6059082&amp;mlon=3.8781475&amp;zoom=17&amp;layers=M" style="text-align:left;">Voir sur une carte plus grande</a></p>

<p>La MDA accueille les jeunes avec ou sans rendez-vous <strong>du lundi au vendredi de 13h à 18h</strong> et le samedi de 10h à 17h (sauf les samedis des vacances).<br />
our les familles avec rendez-vous <strong>le lundi et jeudi de 13h à 18h</strong>.</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mda_contact'] = $box;

  return $export;
}
