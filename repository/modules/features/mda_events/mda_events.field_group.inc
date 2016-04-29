<?php
/**
 * @file
 * mda_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_infos_1|node|event|full';
  $field_group->group_name = 'group_event_infos_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infos 1',
    'weight' => '23',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infos 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-infos-1 field-group-div',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Infos 1');

  return $field_groups;
}
