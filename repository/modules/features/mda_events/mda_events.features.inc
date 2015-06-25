<?php
/**
 * @file
 * mda_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mda_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mda_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evénement'),
      'base' => 'node_content',
      'description' => t('Un événement de l\'agenda.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function mda_events_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['held'] = entity_import('registration_state', '{
    "name" : "held",
    "label" : "Held",
    "description" : "Registration is held.",
    "default_state" : "0",
    "active" : "0",
    "held" : "1",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function mda_events_default_registration_type() {
  $items = array();
  $items['event_registration'] = entity_import('registration_type', '{
    "name" : "event_registration",
    "label" : "Inscription \\u00e0 un \\u00e9v\\u00e9nement ",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
