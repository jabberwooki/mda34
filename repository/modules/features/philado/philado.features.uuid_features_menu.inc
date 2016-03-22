<?php
/**
 * @file
 * philado.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function philado_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 30b982e5-ceae-44c9-ad37-6e935cd27ebd
  $menu_uuid_links['30b982e5-ceae-44c9-ad37-6e935cd27ebd'] = array(
    'menu_name' => 'menu-shortcuts',
    'link_path' => 'eform/submit/contact',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-shortcuts_contact:eform/submit/contact',
      'attributes' => array(
        'class' => array(
          0 => 'link-shortcut-contact',
          1 => 'icon-mail',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'domain_menu_access' => array(
        'hide' => array(
          'd4' => 'd4',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'uuid' => '30b982e5-ceae-44c9-ad37-6e935cd27ebd',
  );
  // Exported menu link: 8e754fc0-a04c-42fa-b54f-870df0a9210a
  $menu_uuid_links['8e754fc0-a04c-42fa-b54f-870df0a9210a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/contact',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact',
    'options' => array(
      'domain_menu_access' => array(
        'hide' => array(
          'd4' => 'd4',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_contact:eform/submit/contact',
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
    'weight' => -34,
    'uuid' => '8e754fc0-a04c-42fa-b54f-870df0a9210a',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');

  return $menu_uuid_links;
}
