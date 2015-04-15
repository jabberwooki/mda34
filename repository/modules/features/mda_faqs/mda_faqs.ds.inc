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
    'summary' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:21:"field_formatter_class";s:0:"";s:11:"trim_length";s:3:"600";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";}',
        'load_terms' => 0,
        'field_formatter_class' => '',
      ),
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
        1 => 'field_faq_category',
        2 => 'sharethis',
        3 => 'summary',
        4 => 'field_faq_images',
        5 => 'body',
        6 => 'field_faq_files',
        7 => 'field_faq_sounds',
        8 => 'field_faq_videos',
        9 => 'group_attached_resources',
        10 => 'field_titre_resources_title',
        11 => 'field_attached_resources',
      ),
    ),
    'fields' => array(
      'domain' => 'central',
      'field_faq_category' => 'central',
      'sharethis' => 'central',
      'summary' => 'central',
      'field_faq_images' => 'central',
      'body' => 'central',
      'field_faq_files' => 'central',
      'field_faq_sounds' => 'central',
      'field_faq_videos' => 'central',
      'group_attached_resources' => 'central',
      'field_titre_resources_title' => 'central',
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
