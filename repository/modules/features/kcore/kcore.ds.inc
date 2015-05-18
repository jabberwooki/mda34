<?php
/**
 * @file
 * kcore.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function kcore_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block';
  $ds_view_mode->label = 'Bloc';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'last_item';
  $ds_view_mode->label = 'Dernier item';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['last_item'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'Liste';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sidebar_item';
  $ds_view_mode->label = 'Item colonne droite';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sidebar_item'] = $ds_view_mode;

  return $export;
}
