<?php
/**
 * @file
 * mda_structures.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mda_structures_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_annuaire:annuaire
  $menu_links['main-menu_annuaire:annuaire'] = array(
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
      'attributes' => array(),
      'identifier' => 'main-menu_annuaire:annuaire',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Annuaire');


  return $menu_links;
}
