<?php
/**
 * @file
 * mda_faqs.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_faqs_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 1490f3cb-9e4a-43b9-8268-52714ba910db
  $menu_uuid_links['1490f3cb-9e4a-43b9-8268-52714ba910db'] = array(
    'menu_name' => 'menu-shortcuts',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
          'd2' => 'd2',
          'd3' => 'd3',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-shortcut-faq',
        ),
      ),
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
    'weight' => 0,
    'uuid' => '1490f3cb-9e4a-43b9-8268-52714ba910db',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');

  return $menu_uuid_links;
}
