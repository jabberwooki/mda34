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

  // Exported menu link: management_captcha:admin/config/people/captcha
  $menu_links['management_captcha:admin/config/people/captcha'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/captcha',
    'router_path' => 'admin/config/people',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer how and where CAPTCHAs are used.',
      ),
      'identifier' => 'management_captcha:admin/config/people/captcha',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_personnes:admin/config/people',
  );
  // Exported menu link: management_entityform-types:admin/structure/entityform_types
  $menu_links['management_entityform-types:admin/structure/entityform_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entityform_types',
    'router_path' => 'admin/structure/entityform_types',
    'link_title' => 'Entityform Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage entityform entity types, including adding and removing fields and the display of fields.',
      ),
      'identifier' => 'management_entityform-types:admin/structure/entityform_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance
  $menu_links['management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/eu-cookie-compliance',
    'router_path' => 'admin/config/system',
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
  t('CAPTCHA');
  t('EU Cookie Compliance');
  t('Entityform Types');


  return $menu_links;
}
