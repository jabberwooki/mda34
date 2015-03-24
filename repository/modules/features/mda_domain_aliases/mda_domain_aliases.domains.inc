<?php
/**
 * @file
 * mda_domain_aliases.domains.inc
 */

/**
 * Implements hook_domain_alias_default_aliases().
 */
function mda_domain_aliases_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['ados_mda34_org'] = array(
    'ados.mda34.dev' => array(
      'pattern' => 'ados.mda34.dev',
      'redirect' => 0,
      'machine_name' => 'ados_mda34_org',
    ),
    'ados.mda34.korora.fr' => array(
      'pattern' => 'ados.mda34.korora.fr',
      'redirect' => 0,
      'machine_name' => 'ados_mda34_org',
    ),
  );
  $domain_aliases['parents_mda34_org'] = array(
    'parents.mda34.dev' => array(
      'pattern' => 'parents.mda34.dev',
      'redirect' => 0,
      'machine_name' => 'parents_mda34_org',
    ),
    'parents.mda34.korora.fr' => array(
      'pattern' => 'parents.mda34.korora.fr',
      'redirect' => 0,
      'machine_name' => 'parents_mda34_org',
    ),
  );
  $domain_aliases['philado_mda34_org'] = array(
    'philado.mda34.dev' => array(
      'pattern' => 'philado.mda34.dev',
      'redirect' => 0,
      'machine_name' => 'philado_mda34_org',
    ),
    'philado.mda34.korora.fr' => array(
      'pattern' => 'philado.mda34.korora.fr',
      'redirect' => 0,
      'machine_name' => 'philado_mda34_org',
    ),
  );
  $domain_aliases['radio_mda34_org'] = array(
    'radio.mda34.dev' => array(
      'pattern' => 'radio.mda34.dev',
      'redirect' => 0,
      'machine_name' => 'radio_mda34_org',
    ),
    'radio.mda34.korora.fr' => array(
      'pattern' => 'radio.mda34.korora.fr',
      'redirect' => 0,
      'machine_name' => 'radio_mda34_org',
    ),
  );
  $domain_aliases['reseau_pro_mda34_org'] = array(
    'reseau-pro.mda34.dev' => array(
      'pattern' => 'reseau-pro.mda34.dev',
      'redirect' => 0,
      'machine_name' => 'reseau_pro_mda34_org',
    ),
    'reseau-pro.mda34.korora.fr' => array(
      'pattern' => 'reseau-pro.mda34.korora.fr',
      'redirect' => 0,
      'machine_name' => 'reseau_pro_mda34_org',
    ),
  );
  $domain_aliases['www_mda34_org'] = array(
    'www.mda34.dev' => array(
      'pattern' => 'www.mda34.dev',
      'redirect' => 0,
      'machine_name' => 'www_mda34_org',
    ),
    'www.mda34.korora.fr' => array(
      'pattern' => 'www.mda34.korora.fr',
      'redirect' => 0,
      'machine_name' => 'www_mda34_org',
    ),
  );

  return $domain_aliases;
}
