<?php
/**
 * @file
 * mda_faqs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_faqs_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additionnal_settings|node|faq|form';
  $field_group->group_name = 'group_additionnal_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paramètres MDA supplémentaires',
    'weight' => '14',
    'children' => array(
      0 => 'field_titre_resources_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Paramètres MDA supplémentaires',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-additionnal-settings field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_additionnal_settings|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attached_resources|node|faq|full';
  $field_group->group_name = 'group_attached_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ressources liées',
    'weight' => '8',
    'children' => array(
      0 => 'field_attached_resources',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ressources liées',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-attached-resources field-group-div panel panel-default',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_attached_resources|node|faq|full'] = $field_group;

  return $export;
}
