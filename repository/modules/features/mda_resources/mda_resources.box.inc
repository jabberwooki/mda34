<?php
/**
 * @file
 * mda_resources.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mda_resources_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'philado_resources_link';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'MDA : Lien ressources Philado';
  $box->options = array(
    'body' => array(
      'value' => '<h2><a href="/ressources">Pros</a></h2>

<div><a href="/ressources">Consultez les ressources de Philado</a></div>',
      'format' => 'full_html',
    ),
  );
  $export['philado_resources_link'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pros_resources_link';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'MDA : Lien ressources MDA34';
  $box->options = array(
    'body' => array(
      'value' => '<div>
<h2><a href="/ressources">Pros</a></h2>

<div><a href="/ressources">Consultez les ressources de la MDA34</a></div>
</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => 'violet',
  );
  $export['pros_resources_link'] = $box;

  return $export;
}
