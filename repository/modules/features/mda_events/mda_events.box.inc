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
      'value' => '<p class="rtecenter"><strong>L\'equipe de la MDA 34, vous informe, vous accompagne, vous oriente ...</strong></p>

<p class="rtecenter"><a class="btn btn-primary" href="http://ados.mda34.org" role="button">Entrer</a></p>

<p><br />
<strong>Dans cet epace vous y trouverez :</strong></p>

<ul>
	<li><a href="http://ados.mda34.org/faq">Notre fonctionnement</a></li>
	<li><a href="http://ados.mda34.org/contact">Comment nous contacter ?</a></li>
	<li><a href="/agenda">Des adresses utiles</a></li>
	<li><a href="http://ados.mda34.org/agenda">Un Agenda</a></li>
	<li><a href="http://radio.mda34.org/">Notre radio</a></li>
	<li><a href="http://ados.mda34.org/rubrique/pocket-film">Le concours Pocket Film</a></li>
</ul>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['boite_ados'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'boite_parents';
  $box->plugin_key = 'simple';
  $box->title = 'Parent, soutien à la parentalité';
  $box->description = 'box parents';
  $box->options = array(
    'body' => array(
      'value' => '<p class="rtecenter"><strong>L\'equipe de la MDA 34, vous aide à trouver des réponses ...</strong></p>

<p class="rtecenter"><a class="btn btn-primary" href="http://parents.mda34.org" role="button">Entrer</a></p>

<p><br />
<strong>Dans cet espace vous y trouverez :</strong></p>

<ul>
	<li><a href="http://parents.mda34.org/faq">Notre fonctionnement</a></li>
	<li><a href="http://parents.mda34.org/annuaire">Un annuaire</a></li>
	<li>Des ressources</li>
	<li><a href="http://parents.mda34.org/agenda">Un agenda</a></li>
	<li><a href="http://parents.mda34.org/contact">Comment nous contacter ?</a></li>
</ul>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['boite_parents'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'boite_pro';
  $box->plugin_key = 'simple';
  $box->title = 'Accompagnement des professionnels';
  $box->description = 'box pro';
  $box->options = array(
    'body' => array(
      'value' => '<p class="rtecenter"><strong>L\'equipe de la MDA 34, vous propose un accompagnement ou un partenariat ...</strong></p>

<p class="rtecenter"><a class="btn btn-primary" href="http://reseau-pro.mda34.org" role="button">Entrer</a></p>

<p><br />
<strong>Dans cet espace vous y trouverez :</strong></p>

<ul>
	<li><a href="http://reseau-pro.mda34.org/annuaire">Un annuaire des structures</a></li>
	<li><a href="http://reseau-pro.mda34.org/ressources">Des ressources</a></li>
	<li><a href="http://reseau-pro.mda34.org/formations">Des formations</a></li>
	<li><a href="http://reseau-pro.mda34.org/agenda">Un agenda</a></li>
	<li><a href="http://reseau-pro.mda34.org/contact">Nous contacter</a></li>
</ul>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['boite_pro'] = $box;

  return $export;
}
