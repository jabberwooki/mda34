<?php
/**
 * @file
 * mda_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mda_resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mda_resources_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Ressource'),
      'base' => 'node_content',
      'description' => t('Documents (article, périodique, bibliographie...) pour les professionnels.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}