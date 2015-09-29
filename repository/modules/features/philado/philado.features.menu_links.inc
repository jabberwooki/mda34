<?php
/**
 * @file
 * philado.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function philado_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_philado:http://philado.mda34.org
  $menu_links['main-menu_philado:http://philado.mda34.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://philado.mda34.org',
    'router_path' => '',
    'link_title' => 'Philado',
    'options' => array(
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
          'd2' => 'd2',
          'd3' => 'd3',
          'd4' => 'd4',
          'd5' => 'd5',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_philado:http://philado.mda34.org',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 28,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Philado');


  return $menu_links;
}
