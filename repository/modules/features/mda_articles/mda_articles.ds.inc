<?php
/**
 * @file
 * mda_articles.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_articles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'domain',
        2 => 'field_scald_gallery',
        3 => 'field_scald_video',
        4 => 'field_scald_audio',
        5 => 'field_scald_file',
        6 => 'sharethis',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'domain' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_audio' => 'ds_content',
      'field_scald_file' => 'ds_content',
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
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_articles_image',
        1 => 'body',
        2 => 'field_scald_video',
        3 => 'field_scald_audio',
        4 => 'field_scald_gallery',
        5 => 'field_scald_file',
        6 => 'sharethis',
        7 => 'disqus_comment',
        8 => 'domain',
      ),
    ),
    'fields' => array(
      'field_articles_image' => 'ds_content',
      'body' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_audio' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_file' => 'ds_content',
      'sharethis' => 'ds_content',
      'disqus_comment' => 'ds_content',
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
  $export['node|article|full'] = $ds_layout;

  return $export;
}
