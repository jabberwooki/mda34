<?php
/**
 * @file
 * mda_resources.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_resources_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'sharethis',
        1 => 'field_resource_type',
        2 => 'field_themes',
        3 => 'field_resource_image',
        4 => 'body',
        5 => 'field_scald_video',
        6 => 'field_resource_authors',
        7 => 'field_scald_gallery',
        8 => 'field_isbn',
        9 => 'field_scald_audio',
        10 => 'field_editor',
        11 => 'domain',
        12 => 'field_resource_public',
        13 => 'field_resource_url',
        14 => 'field_practical_title',
      ),
    ),
    'fields' => array(
      'sharethis' => 'central',
      'field_resource_type' => 'central',
      'field_themes' => 'central',
      'field_resource_image' => 'central',
      'body' => 'central',
      'field_scald_video' => 'central',
      'field_resource_authors' => 'central',
      'field_scald_gallery' => 'central',
      'field_isbn' => 'central',
      'field_scald_audio' => 'central',
      'field_editor' => 'central',
      'domain' => 'central',
      'field_resource_public' => 'central',
      'field_resource_url' => 'central',
      'field_practical_title' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|resource|full'] = $ds_layout;

  return $export;
}
