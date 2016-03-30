<?php
/**
 * @file
 * mda_faqs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mda_faqs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|faq|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'faq';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|faq|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_faqs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faq|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faq';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'domain',
        1 => 'sharethis',
        2 => 'field_faq_category',
        3 => 'field_faq_images',
        4 => 'body',
        5 => 'field_faq_files',
        6 => 'field_faq_sounds',
        7 => 'field_faq_videos',
        8 => 'group_attached_resources',
        9 => 'field_attached_resources',
      ),
    ),
    'fields' => array(
      'domain' => 'central',
      'sharethis' => 'central',
      'field_faq_category' => 'central',
      'field_faq_images' => 'central',
      'body' => 'central',
      'field_faq_files' => 'central',
      'field_faq_sounds' => 'central',
      'field_faq_videos' => 'central',
      'group_attached_resources' => 'central',
      'field_attached_resources' => 'central',
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
  $export['node|faq|full'] = $ds_layout;

  return $export;
}
