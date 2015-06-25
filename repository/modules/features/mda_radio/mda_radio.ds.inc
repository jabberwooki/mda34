<?php
/**
 * @file
 * mda_radio.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mda_radio_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|radio_programme|last_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'radio_programme';
  $ds_fieldsetting->view_mode = 'last_item';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|radio_programme|last_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|radio_programme|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'radio_programme';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|radio_programme|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_radio_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|radio_programme|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'radio_programme';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_record_category',
        1 => 'field_record_date',
        2 => 'field_radio_image',
        3 => 'body',
        4 => 'field_scald_audio',
        5 => 'sharethis',
        6 => 'domain',
      ),
    ),
    'fields' => array(
      'field_record_category' => 'central',
      'field_record_date' => 'central',
      'field_radio_image' => 'central',
      'body' => 'central',
      'field_scald_audio' => 'central',
      'sharethis' => 'central',
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
  $export['node|radio_programme|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|radio_programme|last_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'radio_programme';
  $ds_layout->view_mode = 'last_item';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_radio_image',
        1 => 'title',
        2 => 'field_record_date',
        3 => 'body',
        4 => 'field_scald_audio',
        5 => 'sharethis',
      ),
    ),
    'fields' => array(
      'field_radio_image' => 'ds_content',
      'title' => 'ds_content',
      'field_record_date' => 'ds_content',
      'body' => 'ds_content',
      'field_scald_audio' => 'ds_content',
      'sharethis' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|radio_programme|last_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|radio_programme|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'radio_programme';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_radio_image',
        1 => 'title',
        2 => 'field_record_date',
        3 => 'field_scald_audio',
        4 => 'sharethis',
      ),
    ),
    'fields' => array(
      'field_radio_image' => 'ds_content',
      'title' => 'ds_content',
      'field_record_date' => 'ds_content',
      'field_scald_audio' => 'ds_content',
      'sharethis' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|radio_programme|list'] = $ds_layout;

  return $export;
}
