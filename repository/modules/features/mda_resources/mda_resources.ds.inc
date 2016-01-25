<?php
/**
 * @file
 * mda_resources.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mda_resources_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|resource|teaser'] = $ds_fieldsetting;

  return $export;
}

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
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sharethis',
        1 => 'field_resource_date_parution',
        2 => 'field_resource_type',
        3 => 'field_resource_authors',
        4 => 'field_editor',
        5 => 'field_isbn',
        6 => 'field_themes',
        7 => 'field_resource_image',
        8 => 'body',
        9 => 'field_scald_video',
        10 => 'field_scald_audio',
        11 => 'field_resource_url',
        12 => 'field_resource_files',
        13 => 'links',
        14 => 'field_scald_gallery',
        15 => 'domain',
      ),
    ),
    'fields' => array(
      'sharethis' => 'ds_content',
      'field_resource_date_parution' => 'ds_content',
      'field_resource_type' => 'ds_content',
      'field_resource_authors' => 'ds_content',
      'field_editor' => 'ds_content',
      'field_isbn' => 'ds_content',
      'field_themes' => 'ds_content',
      'field_resource_image' => 'ds_content',
      'body' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_audio' => 'ds_content',
      'field_resource_url' => 'ds_content',
      'field_resource_files' => 'ds_content',
      'links' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'domain' => 'ds_content',
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
  $export['node|resource|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_link_resources',
        2 => 'field_resource_type',
        3 => 'field_resource_image',
        4 => 'body',
        5 => 'field_resource_authors',
        6 => 'field_resource_date_parution',
        7 => 'field_themes',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_link_resources' => 'ds_content',
      'field_resource_type' => 'ds_content',
      'field_resource_image' => 'ds_content',
      'body' => 'ds_content',
      'field_resource_authors' => 'ds_content',
      'field_resource_date_parution' => 'ds_content',
      'field_themes' => 'ds_content',
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
  $export['node|resource|teaser'] = $ds_layout;

  return $export;
}
