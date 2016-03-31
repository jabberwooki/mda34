<?php
/**
 * @file
 * mda_multimedia.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_multimedia_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|grille_player';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'grille_player';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'atom',
      ),
    ),
    'fields' => array(
      'atom' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
  );
  $export['scald_atom|video|grille_player'] = $ds_layout;

  return $export;
}
