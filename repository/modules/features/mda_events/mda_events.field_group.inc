<?php
/**
 * @file
 * mda_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_events_field_group_info() {
  $export = array();

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
    'weight' => '0',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_organiser',
      2 => 'field_unregistered_organiser',
      3 => 'field_address',
      4 => 'field_event_dates',
      5 => 'field_public',
    ),
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
  $export['group_event_infos_1|node|event|full'] = $field_group;

  return $export;
}