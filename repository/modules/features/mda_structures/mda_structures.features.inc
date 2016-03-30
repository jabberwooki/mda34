<?php
/**
 * @file
 * mda_structures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_structures_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mda_structures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mda_structures_image_default_styles() {
  $styles = array();

  // Exported image style: logo_120x120.
  $styles['logo_120x120'] = array(
    'label' => 'Logo (120x120)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mda_structures_node_info() {
  $items = array(
    'structure' => array(
      'name' => t('Structure'),
      'base' => 'node_content',
      'description' => t('Structure médicale, éducative, culturelle ou sociale, publique ou privée.'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
