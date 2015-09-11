<?php
/**
 * @file
 * administration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function administration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance
  $menu_links['management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/eu-cookie-compliance',
    'router_path' => 'admin/config/system/eu-cookie-compliance',
    'link_title' => 'EU Cookie Compliance',
    'options' => array(
      'attributes' => array(
        'title' => 'Make your website compliant with the EU Directive on Privacy and Electronic Communications.',
      ),
      'identifier' => 'management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_systme:admin/config/system',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EU Cookie Compliance');


  return $menu_links;
}
