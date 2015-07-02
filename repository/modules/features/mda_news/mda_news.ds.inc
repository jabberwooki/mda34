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
        0 => 'group_submitted_socialnetworks',
        1 => 'submitted_by',
        2 => 'sharethis',
        3 => 'field_scald_image',
        4 => 'body',
        5 => 'field_scald_audio',
        6 => 'field_scald_gallery',
        7 => 'field_scald_video',
        8 => 'field_scald_file',
        9 => 'domain',
      ),
    ),
    'fields' => array(
      'group_submitted_socialnetworks' => 'central',
      'submitted_by' => 'central',
      'sharethis' => 'central',
      'field_scald_image' => 'central',
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
