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
    'thematic_class' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'disqus_comment' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'disqus_comment_count' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
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
        0 => 'field_event_type',
        1 => 'thematic_class',
        2 => 'links',
        3 => 'disqus_comment_count',
        4 => 'field_public',
        5 => 'field_address',
        6 => 'field_organiser',
        7 => 'field_unregistered_organiser',
        8 => 'field_event_image',
        9 => 'field_event_website',
        10 => 'field_registration',
        11 => 'field_coordinates',
        12 => 'disqus_comment',
        13 => 'sharethis',
        14 => 'domain',
        15 => 'body',
        16 => 'disqus',
      ),
    ),
    'fields' => array(
      'field_event_type' => 'central',
      'thematic_class' => 'central',
      'links' => 'central',
      'disqus_comment_count' => 'central',
      'field_public' => 'central',
      'field_address' => 'central',
      'field_organiser' => 'central',
      'field_unregistered_organiser' => 'central',
      'field_event_image' => 'central',
      'field_event_website' => 'central',
      'field_registration' => 'central',
      'field_coordinates' => 'central',
      'disqus_comment' => 'central',
      'sharethis' => 'central',
      'domain' => 'central',
      'body' => 'central',
      'disqus' => 'central',
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
