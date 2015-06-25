<?php
/**
 * @file
 * mda_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mda_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Adolescents',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '007c141b-e214-4ee1-851e-391aa8050ee8',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Famille',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1af2b068-c81c-40db-a455-ce89a902b3e4',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Professionnels  de l\'animation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2ee9b115-732e-4e1f-89d2-00810314b89c',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Professionnels  de l\'écoute et de l\'accompagnement',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3a4d4b8d-d1f0-4bdb-a47d-f1bbd3b15454',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Professionnels  de l\'éducation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '47617470-634a-4105-8222-79516d782092',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Parents',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '59aec64b-acfe-485f-8e35-0ebf1ded860f',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Professionnels  du social',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '82d67b41-2a5f-4479-a958-4978c4f230b3',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Professionnels de santé',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '82eb57df-5795-4390-bcff-d7596e42e807',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tout public',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c1f36c68-37e9-4aea-99ba-7f373e028161',
    'vocabulary_machine_name' => 'publics',
    'metatags' => array(),
  );
  return $terms;
}
