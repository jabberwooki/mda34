<?php
/**
 * @file
 * mda_domains.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function mda_domains_domain_default_domains() {
  $domains = array();
  $domains['ados_mda34_org'] = array(
    'subdomain' => 'ados.mda34.org',
    'sitename' => 'Espace Adolescents',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'ados_mda34_org',
  );
  $domains['parents_mda34_org'] = array(
    'subdomain' => 'parents.mda34.org',
    'sitename' => 'Espace Parents',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 2,
    'is_default' => 0,
    'machine_name' => 'parents_mda34_org',
  );
  $domains['philado_mda34_org'] = array(
    'subdomain' => 'philado.mda34.org',
    'sitename' => 'Philado',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 5,
    'is_default' => 0,
    'machine_name' => 'philado_mda34_org',
  );
  $domains['radio_mda34_org'] = array(
    'subdomain' => 'radio.mda34.org',
    'sitename' => 'La Radio',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 4,
    'is_default' => 0,
    'machine_name' => 'radio_mda34_org',
  );
  $domains['reseau_pro_mda34_org'] = array(
    'subdomain' => 'reseau-pro.mda34.org',
    'sitename' => 'Espace Pro',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 3,
    'is_default' => 0,
    'machine_name' => 'reseau_pro_mda34_org',
  );
  $domains['www_mda34_org'] = array(
    'subdomain' => 'www.mda34.org',
    'sitename' => 'Portail MDA34',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -1,
    'is_default' => 1,
    'machine_name' => 'www_mda34_org',
  );

  return $domains;
}
