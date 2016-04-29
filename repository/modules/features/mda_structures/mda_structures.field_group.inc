<?php
/**
 * @file
 * mda_structures.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_structures_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additionnal_settings|node|structure|form';
  $field_group->group_name = 'group_additionnal_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paramètres supplémentaires',
    'weight' => '19',
    'children' => array(
      0 => 'field_practical_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additionnal-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical_content|node|structure|full';
  $field_group->group_name = 'group_practical_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_practical_infos';
  $field_group->data = array(
    'label' => 'Contenu infos pratiques',
    'weight' => '2',
    'children' => array(
      0 => 'field_access_means',
      1 => 'field_address',
      2 => 'field_email',
      3 => 'field_logo',
      4 => 'field_office_hours',
      5 => 'field_phone',
      6 => 'field_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu infos pratiques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-practical-content field-group-div panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical_infos|node|structure|full';
  $field_group->group_name = 'group_practical_infos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informations pratiques',
    'weight' => '4',
    'children' => array(
      0 => 'field_access_means',
      1 => 'field_address',
      2 => 'field_email',
      3 => 'field_office_hours',
      4 => 'field_phone',
      5 => 'field_website',
      6 => 'field_scald_video',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Informations pratiques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-practical-infos  field-group-div panel panel-default col-sm-5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_term|node|structure|full';
  $field_group->group_name = 'group_term';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caractéristiques',
    'weight' => '1',
    'children' => array(
      0 => 'field_action_types',
      1 => 'field_competence_fields',
      2 => 'field_public',
      3 => 'field_structure_type',
      4 => 'field_secteur_geo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caractéristiques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-term field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Caractéristiques');
  t('Contenu infos pratiques');
  t('Informations pratiques');
  t('Paramètres supplémentaires');

  return $field_groups;
}
