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

  // Exported menu link: 494c6277-83ce-4b4b-ab17-6ba06f185d1c
  $menu_uuid_links['494c6277-83ce-4b4b-ab17-6ba06f185d1c'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'annuaire',
    'router_path' => 'annuaire',
    'link_title' => 'Annuaire',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd3' => 'd3',
          'd4' => 'd4',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_annuaire:annuaire',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'uuid' => '494c6277-83ce-4b4b-ab17-6ba06f185d1c',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Annuaire');

  return $menu_uuid_links;
}
