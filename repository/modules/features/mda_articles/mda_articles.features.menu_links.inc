<?php
/**
 * @file
 * mda_articles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mda_articles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_inscription:eform/submit/pre-inscription-pocket-film
  $menu_links['main-menu_inscription:eform/submit/pre-inscription-pocket-film'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/pre-inscription-pocket-film',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Inscription',
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
          'd2' => 'd2',
          'd3' => 'd3',
          'd4' => 'd4',
          'd5' => 'd5',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_inscription:eform/submit/pre-inscription-pocket-film',
    ),
    'module' => 'entityform',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Inscription');


  return $menu_links;
}
