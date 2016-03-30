<?php
/**
 * @file
 * mda_resources.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_resources_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: f5034029-bd0c-42e2-83d9-805536b00969
  $menu_uuid_links['f5034029-bd0c-42e2-83d9-805536b00969'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/linkit',
    'router_path' => 'admin/config/content/linkit',
    'link_title' => 'Linkit Profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Linkit profiles.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'f5034029-bd0c-42e2-83d9-805536b00969',
    'parent_uuid' => 'f6d124df-c80f-4345-8f64-87c7420672bc',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Linkit Profiles');

  return $menu_uuid_links;
}
