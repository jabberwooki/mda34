<?php
/**
 * @file
 * mda_contacts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mda_contacts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-shortcuts.
  $menus['menu-shortcuts'] = array(
    'menu_name' => 'menu-shortcuts',
    'title' => 'Raccourcis',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Raccourcis');


  return $menus;
}
