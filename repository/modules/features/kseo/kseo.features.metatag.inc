<?php
/**
 * @file
 * kseo.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function kseo_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [site:slogan]',
      ),
      'description' => array(
        'value' => 'La MDA 34 est un lieu pour les jeunes de 11 à 21 ans. Il est possible d’y rencontrer différents professionnels à l’écoute des adolescents : éducateurs, psychologues, assistantes sociale, infirmiers, médecins. Accueillir, écouter, accompagner, informer, orienter sont les missions de la MDA 34.',
      ),
      'abstract' => array(
        'value' => 'Professionnels de la MDA à l’écoute des adolescents. Accueillir, écouter, accompagner, informer, orienter sont les missions de la MDA 34.',
      ),
      'keywords' => array(
        'value' => 'Adolescents, Hérault, maison',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:philado_mda34_org frontpage.
  $config['global:philado_mda34_org frontpage'] = array(
    'instance' => 'global:philado_mda34_org frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [site:slogan]',
      ),
      'description' => array(
        'value' => 'Réseau de prise en charge des adolescents en grande difficulté.',
      ),
      'abstract' => array(
        'value' => 'Réseau de prise en charge des adolescents en grande difficulté.',
      ),
      'keywords' => array(
        'value' => 'philado,CHU Montpellier',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'image_src' => array(
        'value' => '[node:field_scald_image]',
      ),
    ),
  );

  return $config;
}
