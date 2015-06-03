<?php
/**
 * @file
 * mda_structures.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_structures_field_group_info() {
  $export = array();

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
    'weight' => '16',
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
  $export['group_additionnal_settings|node|structure|form'] = $field_group;

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
  $export['group_practical_content|node|structure|full'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_practical_title',
      1 => 'group_practical_content',
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
  $export['group_practical_infos|node|structure|full'] = $field_group;

  return $export;
}
