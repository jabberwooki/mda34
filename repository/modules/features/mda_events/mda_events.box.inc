<?php
/**
 * @file
 * mda_events.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mda_events_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'boite_ados';
  $box->plugin_key = 'simple';
  $box->title = 'Vous avez entre 11 & 21 ans ?';
  $box->description = 'box ados';
  $box->options = array(
    'body' => array(
      'value' => '<p>L\'equipe de la MDA 34, vous informe, vous accompagne, vous oriente ...</p>

<p><a href="http://ados.mda34.bac">Entrer</a></p>

<p>Dans cet epace vous trouverez:</p>

<ul>
	<li>Notre fonctionnement</li>
	<li>Comment nous contacter</li>
	<li>Des adresses utiles</li>
	<li>Des infos, des actus</li>
	<li>Agenda</li>
	<li>Des vidéos et des sons</li>
	<li>Le concours Poket Film</li>
</ul>
',
      'format' => 'full_html',
    ),
  );
  $export['boite_ados'] = $box;

  return $export;
}
