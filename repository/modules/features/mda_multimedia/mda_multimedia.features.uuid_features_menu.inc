<?php
/**
 * @file
 * mda_multimedia.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_multimedia_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: f80e8c29-60b9-4fd3-b22d-fd1a69505a09
  $menu_uuid_links['f80e8c29-60b9-4fd3-b22d-fd1a69505a09'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'multimedia',
    'router_path' => 'multimedia',
    'link_title' => 'Vidéos',
    'options' => array(
      'alter' => TRUE,
      'domain_menu_access' => array(
        'show' => array(
          'd2' => 'd2',
        ),
        'hide' => array(
          'd1' => 'd1',
          'd3' => 'd3',
          'd4' => 'd4',
          'd5' => 'd5',
          'd6' => 'd6',
        ),
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_vidos:multimedia',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'uuid' => 'f80e8c29-60b9-4fd3-b22d-fd1a69505a09',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vidéos');

  return $menu_uuid_links;
}
