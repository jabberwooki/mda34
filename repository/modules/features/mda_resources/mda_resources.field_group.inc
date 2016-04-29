<?php
/**
 * @file
 * mda_resources.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_resources_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additionnal_settings|node|resource|form';
  $field_group->group_name = 'group_additionnal_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paramètres MDA supplémentaires',
    'weight' => '20',
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
  $field_group->identifier = 'group_link_resources|node|resource|teaser';
  $field_group->group_name = 'group_link_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-link-resources',
    'weight' => '1',
    'children' => array(
      0 => 'field_resource_authors',
      1 => 'field_resource_type',
      2 => 'field_themes',
      3 => 'field_resource_date_parution',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-link-resources',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link-resources field-group-div',
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
  t('Paramètres MDA supplémentaires');
  t('group-link-resources');

  return $field_groups;
}
