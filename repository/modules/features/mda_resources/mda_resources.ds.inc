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
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_tres_court',
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
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'sharethis',
        1 => 'field_resource_type',
        2 => 'field_themes',
        3 => 'group_practical_infos',
        4 => 'field_resource_image',
        5 => 'body',
        6 => 'field_resource_files',
        7 => 'field_resource_authors',
        8 => 'field_isbn',
        9 => 'field_scald_video',
        10 => 'field_scald_gallery',
        11 => 'field_editor',
        12 => 'field_resource_public',
        13 => 'field_scald_audio',
        14 => 'domain',
        15 => 'field_resource_url',
        16 => 'field_practical_title',
        17 => 'group_practical_content',
      ),
    ),
    'fields' => array(
      'sharethis' => 'central',
      'field_resource_type' => 'central',
      'field_themes' => 'central',
      'group_practical_infos' => 'central',
      'field_resource_image' => 'central',
      'body' => 'central',
      'field_resource_files' => 'central',
      'field_resource_authors' => 'central',
      'field_isbn' => 'central',
      'field_scald_video' => 'central',
      'field_scald_gallery' => 'central',
      'field_editor' => 'central',
      'field_resource_public' => 'central',
      'field_scald_audio' => 'central',
      'domain' => 'central',
      'field_resource_url' => 'central',
      'field_practical_title' => 'central',
      'group_practical_content' => 'central',
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
        3 => 'post_date',
        4 => 'body',
        5 => 'field_themes',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_link_resources' => 'ds_content',
      'field_resource_type' => 'ds_content',
      'post_date' => 'ds_content',
      'body' => 'ds_content',
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
