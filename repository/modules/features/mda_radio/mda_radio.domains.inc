<?php
/**
 * @file
 * mda_radio.domains.inc
 */

/**
 * Implements hook_domain_conf_default_variables().
 */
function mda_radio_domain_conf_default_variables() {
  $domain_variables = array();
  $domain_variables['radio_mda34_org'] = array(
    'site_name' => 'la radio',
    'site_slogan' => 'Hérault - MDA34',
    'site_mail' => 'christophe.espiau@gmail.com',
    'default_nodes_main' => 10,
    'site_frontpage' => 'emissions',
    'site_403' => '',
    'site_404' => '',
  );

  return $domain_variables;
}
