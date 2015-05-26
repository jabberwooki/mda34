<?php
/**
 * @file
 * mda_contacts.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_contacts_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 4f151f19-3863-4616-8848-6982f1c27193
  $menu_uuid_links['4f151f19-3863-4616-8848-6982f1c27193'] = array(
    'menu_name' => 'menu-shortcuts',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'uuid' => '4f151f19-3863-4616-8848-6982f1c27193',
    'uuid_path' => 'eform/submit/',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');

  return $menu_uuid_links;
}
