<?php
/**
 * @file
 * philado.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function philado_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function philado_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
