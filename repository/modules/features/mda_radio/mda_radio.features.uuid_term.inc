<?php
/**
 * @file
 * mda_radio.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mda_radio_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Reportage',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0167d008-21e2-4fbc-a69f-6c3ff4aef982',
    'vocabulary_machine_name' => 'radio_prog_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Emission',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2f553660-6047-4407-9558-6757bb016242',
    'vocabulary_machine_name' => 'radio_prog_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chronique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6679fa96-7b95-41a0-ac95-22589bf6168a',
    'vocabulary_machine_name' => 'radio_prog_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Evènements',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9ad0958a-6467-44ea-8048-94b95ab5761d',
    'vocabulary_machine_name' => 'radio_prog_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Musique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ac2daa62-d872-401a-9efe-1cb461a633f5',
    'vocabulary_machine_name' => 'radio_prog_categories',
    'metatags' => array(),
  );
  return $terms;
}
