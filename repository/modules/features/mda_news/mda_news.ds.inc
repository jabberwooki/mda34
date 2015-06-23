<?php
/**
 * @file
 * mda_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mda_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'summary' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"600";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";}',
        'load_terms' => 0,
      ),
    ),
    'submitted_by' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|news|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'submitted_by',
        1 => 'group_submitted_socialnetworks',
        2 => 'sharethis',
        3 => 'field_scald_image',
        4 => 'summary',
        5 => 'body',
        6 => 'field_scald_audio',
        7 => 'field_scald_gallery',
        8 => 'field_scald_video',
        9 => 'field_scald_file',
        10 => 'domain',
      ),
    ),
    'fields' => array(
      'submitted_by' => 'central',
      'group_submitted_socialnetworks' => 'central',
      'sharethis' => 'central',
      'field_scald_image' => 'central',
      'summary' => 'central',
      'body' => 'central',
      'field_scald_audio' => 'central',
      'field_scald_gallery' => 'central',
      'field_scald_video' => 'central',
      'field_scald_file' => 'central',
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
  $export['node|news|full'] = $ds_layout;

  return $export;
}
