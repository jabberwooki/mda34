<?php
/**
 * @file
 * mda_events.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_events_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 61a15f79-7a94-4294-a3d4-68462cc03625
  $menu_uuid_links['61a15f79-7a94-4294-a3d4-68462cc03625'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd2' => 'd2',
          'd3' => 'd3',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'uuid' => '61a15f79-7a94-4294-a3d4-68462cc03625',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');

  return $menu_uuid_links;
}
