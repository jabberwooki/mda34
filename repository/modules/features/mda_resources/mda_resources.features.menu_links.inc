<?php
/**
 * @file
 * mda_resources.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mda_resources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ressources:ressources
  $menu_links['main-menu_ressources:ressources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ressources',
    'router_path' => 'ressources',
    'link_title' => 'Ressources',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd4' => 'd4',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ressources:ressources',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ressources');


  return $menu_links;
}
