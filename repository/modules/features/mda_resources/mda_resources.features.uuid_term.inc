<?php
/**
 * @file
 * mda_resources.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mda_resources_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Odile Jacob',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '000bdf94-58af-4666-96ea-cc5034402d69',
    'vocabulary_machine_name' => 'editors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Parution',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0a15b594-93a1-4796-9d53-19708788e756',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Acquisition',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0c933673-8d65-4a78-beeb-8df724d70fce',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Article',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2336bb45-88da-4c3d-9960-403014d4da8f',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Periodique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '246b0179-e24b-4164-8b4c-161349cd5363',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Audio',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '399c72c2-224c-4841-abfe-401a778b1e4a',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Site internet',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '43185b05-160b-4bf9-9c1c-ac08cd7d3dfb',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Scolarisation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4a8972d5-d4c4-4938-a70f-e599afada369',
    'vocabulary_machine_name' => 'themes',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Social',
    'description' => '',
    'format' => 'full_html',
    'weight' => 8,
    'uuid' => '57316f26-cc60-45ed-9168-581fd3dd2aca',
    'vocabulary_machine_name' => 'themes',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Enseignants',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5808c55b-0dd8-4836-88f5-fa6c1ec968ba',
    'vocabulary_machine_name' => 'resource_publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Insertion',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '62986096-cd9d-4971-b20c-e186b0c5f52b',
    'vocabulary_machine_name' => 'themes',
    'metatags' => array(),
    'parent' => array(
      0 => '57316f26-cc60-45ed-9168-581fd3dd2aca',
    ),
  );
  $terms[] = array(
    'name' => 'Parentalité',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6ff99e4c-13a4-4b75-aef6-b86c638bbb49',
    'vocabulary_machine_name' => 'themes',
    'metatags' => array(),
    'parent' => array(
      0 => 'bb87f3b7-4fba-45cf-9630-4cc36591bf2e',
    ),
  );
  $terms[] = array(
    'name' => 'Document',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7fb0a6db-07a1-4d7b-92ea-8bbb87609b88',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bibliographie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '893a3527-fb62-4363-94af-5ee761599945',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Vidéo',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '92e8c80a-d192-4055-9e97-06ae0954fb1a',
    'vocabulary_machine_name' => 'resource_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sociologie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 10,
    'uuid' => 'bb87f3b7-4fba-45cf-9630-4cc36591bf2e',
    'vocabulary_machine_name' => 'themes',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Educateurs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c71673a9-e54c-48c5-95b1-08929ba2f820',
    'vocabulary_machine_name' => 'resource_publics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chercheurs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fc024817-3b28-48d1-abdf-11e65b05aaf4',
    'vocabulary_machine_name' => 'resource_publics',
    'metatags' => array(),
  );
  return $terms;
}
