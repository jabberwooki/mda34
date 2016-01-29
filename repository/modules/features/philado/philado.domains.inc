<?php
/**
 * @file
 * philado.domains.inc
 */

/**
 * Implements hook_domain_conf_default_variables().
 */
function philado_domain_conf_default_variables() {
  $domain_variables = array();
  $domain_variables['philado_mda34_org'] = array(
    'site_name' => 'maison des adolescents',
    'site_mail' => 'webmaster@mda34.org',
    'site_slogan' => 'CHU Montpellier',
    'site_frontpage' => 'node',
    'anonymous' => 'Anonymous',
    'admin_theme' => 'adminimal',
    'date_default_timezone' => 'Europe/Paris',
    'cache' => 0,
    'cache_lifetime' => 0,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'En cours de maintenance. Nous serons de retour très bientôt. Merci de votre patience.',
    'language_default' => 'domain-conf-ignore',
    'menu_main_links_source' => 'main-menu',
    'menu_secondary_links_source' => 0,
    'menu_options_page' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_page' => 'main-menu:0',
    'menu_options_article' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_article' => 'main-menu:0',
    'menu_options_event' => array(
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'main-menu' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_event' => 'main-menu:0',
    'menu_options_faq' => array(
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'main-menu' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_faq' => 'main-menu:0',
    'menu_options_news' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_news' => 'main-menu:0',
    'menu_options_radio_programme' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_radio_programme' => 'main-menu:0',
    'menu_options_resource' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_resource' => 'main-menu:0',
    'menu_options_structure' => array(
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'main-menu' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_structure' => 'main-menu:0',
    'menu_options_slide' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-footer-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-shortcuts' => 0,
      'menu-top-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slide' => 'main-menu:0',
  );

  return $domain_variables;
}
