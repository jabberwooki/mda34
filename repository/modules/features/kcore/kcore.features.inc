<?php
/**
 * @file
 * kcore.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kcore_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_features_date_format_default().
 */
function kcore_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 46,
    'format' => 'l d M Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 47,
    'format' => 'd M Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 48,
    'format' => 'd/m/y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 49,
    'format' => 'Y',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function kcore_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'mda_year',
    'title' => 'Année',
    'locked' => 0,
  );
  return $fdt_config;
}
