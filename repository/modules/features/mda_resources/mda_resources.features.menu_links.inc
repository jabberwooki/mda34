<?php
/**
 * @file
 * mda_resources.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mda_resources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ressources:ressources
  $menu_links['main-menu_ressources:ressources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ressources',
    'router_path' => 'ressources',
    'link_title' => 'Ressources',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd4' => 'd4',
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ressources:ressources',
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
    'weight' => 14,
    'customized' => 1,
  );
  // Exported menu link: management_linkit-profiles:admin/config/content/linkit
  $menu_links['management_linkit-profiles:admin/config/content/linkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/linkit',
    'router_path' => 'admin/config/content/linkit',
    'link_title' => 'Linkit Profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Linkit profiles.',
      ),
      'identifier' => 'management_linkit-profiles:admin/config/content/linkit',
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
  // Exported menu link: management_profile-types:admin/structure/profiles
  $menu_links['management_profile-types:admin/structure/profiles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/profiles',
    'router_path' => 'admin/structure/profiles',
    'link_title' => 'Profile types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage profiles, including fields.',
      ),
      'identifier' => 'management_profile-types:admin/structure/profiles',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Linkit Profiles');
  t('Profile types');
  t('Ressources');


  return $menu_links;
}
