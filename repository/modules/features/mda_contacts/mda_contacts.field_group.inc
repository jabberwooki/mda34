<?php
/**
 * @file
 * mda_contacts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_contacts_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_message|entityform|contact|form';
  $field_group->group_name = 'group_message';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Votre message',
    'weight' => '0',
    'children' => array(
      0 => 'field_name_nickname',
      1 => 'field_contact_email',
      2 => 'field_subject',
      3 => 'field_message',
      4 => 'field_contact_recipient',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-message field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Votre message');

  return $field_groups;
}
