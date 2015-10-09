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

  // Exported menu link: main-menu_pocket-film:taxonomy/term/268
  $menu_links['main-menu_pocket-film:taxonomy/term/268'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/268',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Pocket FIlm',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'domain_menu_access' => array(
        'show' => array(
          'd2' => 'd2',
        ),
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_pocket-film:taxonomy/term/268',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: management_entityform-settings:admin/config/content/entityform
  $menu_links['management_entityform-settings:admin/config/content/entityform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/entityform',
    'router_path' => 'admin/config/content/entityform',
    'link_title' => 'Entityform Settings',
    'options' => array(
      'identifier' => 'management_entityform-settings:admin/config/content/entityform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_rdaction-de-contenu:admin/config/content',
  );
  // Exported menu link: management_entityform-submissions:admin/reports/entityforms
  $menu_links['management_entityform-submissions:admin/reports/entityforms'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/entityforms',
    'router_path' => 'admin/reports/entityforms',
    'link_title' => 'Entityform Submissions',
    'options' => array(
      'attributes' => array(
        'title' => 'View Submissions for all Entityforms',
      ),
      'identifier' => 'management_entityform-submissions:admin/reports/entityforms',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_rapports:admin/reports',
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
    'customized' => 1,
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
  t('EU Cookie Compliance');
  t('Entityform Settings');
  t('Entityform Submissions');
  t('Entityform Types');
  t('Pocket FIlm');


  return $menu_links;
}
