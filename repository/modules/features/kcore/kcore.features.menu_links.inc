<?php
/**
 * @file
 * kcore.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kcore_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_retour-au-portail:http://www.mda34.org
  $menu_links['menu-top-menu_retour-au-portail:http://www.mda34.org'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.mda34.org',
    'router_path' => '',
    'link_title' => 'Retour au portail',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_retour-au-portail:http://www.mda34.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Retour au portail');


  return $menu_links;
}
