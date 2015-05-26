<?php
/**
 * @file
 * mda_articles.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_articles_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 6a5adf28-14b9-41ce-9dcd-037ae153bbe0
  $menu_uuid_links['6a5adf28-14b9-41ce-9dcd-037ae153bbe0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentation',
    'router_path' => 'presentation',
    'link_title' => 'Présentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
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
    'weight' => 2,
    'uuid' => '6a5adf28-14b9-41ce-9dcd-037ae153bbe0',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Présentation');

  return $menu_uuid_links;
}
