<?php
/**
 * @file
 * mda_news.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function mda_news_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: f70524d7-283b-4a38-aeef-101bb91c1316
  $menu_uuid_links['f70524d7-283b-4a38-aeef-101bb91c1316'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualites',
    'router_path' => 'actualites',
    'link_title' => 'Actualités',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd2' => 'd2',
          'd3' => 'd3',
          'd4' => 'd4',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'uuid' => 'f70524d7-283b-4a38-aeef-101bb91c1316',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');

  return $menu_uuid_links;
}
