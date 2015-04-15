<?php
/**
 * @file
 * mda_faqs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mda_faqs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_faq:faq
  $menu_links['main-menu_faq:faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd2' => 'd2',
          'd3' => 'd3',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faq:faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');


  return $menu_links;
}
