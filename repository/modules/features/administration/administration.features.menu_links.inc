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
  // Exported menu link: management_mollom-content-moderation:admin/config/content/mollom
  $menu_links['management_mollom-content-moderation:admin/config/content/mollom'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/mollom',
    'router_path' => 'admin/config/content/mollom',
    'link_title' => 'Mollom content moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the Mollom service moderates user-submitted content such as spam and profanity.',
      ),
      'identifier' => 'management_mollom-content-moderation:admin/config/content/mollom',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_rdaction-de-contenu:admin/config/content',
  );
  // Exported menu link: management_mollom-statistics:admin/reports/mollom
  $menu_links['management_mollom-statistics:admin/reports/mollom'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/mollom',
    'router_path' => 'admin/reports/mollom',
    'link_title' => 'Mollom statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Reports and usage statistics for the Mollom module.',
      ),
      'identifier' => 'management_mollom-statistics:admin/reports/mollom',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_rapports:admin/reports',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EU Cookie Compliance');
  t('Mollom content moderation');
  t('Mollom statistics');


  return $menu_links;
}
