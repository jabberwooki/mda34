<?php
/**
 * @file
 * mda_multimedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_multimedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
