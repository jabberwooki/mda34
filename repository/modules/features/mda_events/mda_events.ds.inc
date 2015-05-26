<?php
/**
 * @file
 * mda_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mda_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'summary' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:21:"field_formatter_class";s:0:"";s:11:"trim_length";s:3:"600";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";}',
        'load_terms' => 0,
        'field_formatter_class' => 'col-sm-7',
      ),
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mda_events_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'summary';
  $ds_field->label = 'Résumé';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['summary'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_event_infos_1',
        1 => 'field_event_type',
        2 => 'sharethis',
        3 => 'field_event_dates',
        4 => 'summary',
        5 => 'field_event_image',
        6 => 'field_public',
        7 => 'body',
        8 => 'field_address',
        9 => 'field_event_website',
        10 => 'field_organiser',
        11 => 'field_unregistered_organiser',
        12 => 'field_coordinates',
        13 => 'field_registration',
        14 => 'domain',
      ),
    ),
    'fields' => array(
      'group_event_infos_1' => 'central',
      'field_event_type' => 'central',
      'sharethis' => 'central',
      'field_event_dates' => 'central',
      'summary' => 'central',
      'field_event_image' => 'central',
      'field_public' => 'central',
      'body' => 'central',
      'field_address' => 'central',
      'field_event_website' => 'central',
      'field_organiser' => 'central',
      'field_unregistered_organiser' => 'central',
      'field_coordinates' => 'central',
      'field_registration' => 'central',
      'domain' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|full'] = $ds_layout;

  return $export;
}
