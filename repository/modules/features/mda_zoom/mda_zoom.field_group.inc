<?php
/**
 * @file
 * mda_zoom.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_zoom_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all_diapo|node|slide|portal_slide';
  $field_group->group_name = 'group_all_diapo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'portal_slide';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-all-diapo',
    'weight' => '0',
    'children' => array(
      0 => 'field_slide_image',
      1 => 'group_conteneur_diapo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-all-diapo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-all-diapo field-group-div',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all_diapo|node|slide|site_slide';
  $field_group->group_name = 'group_all_diapo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'site_slide';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-all-diapo',
    'weight' => '0',
    'children' => array(
      0 => 'field_slide_image',
      1 => 'group_conteneur_diapo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-all-diapo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-all-diapo field-group-div',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conteneur_diapo|node|slide|portal_slide';
  $field_group->group_name = 'group_conteneur_diapo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'portal_slide';
  $field_group->parent_name = 'group_all_diapo';
  $field_group->data = array(
    'label' => 'Container diapo',
    'weight' => '3',
    'children' => array(
      0 => 'group_link_theme',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container diapo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-conteneur-diapo field-group-div container',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conteneur_diapo|node|slide|site_slide';
  $field_group->group_name = 'group_conteneur_diapo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'site_slide';
  $field_group->parent_name = 'group_all_diapo';
  $field_group->data = array(
    'label' => 'Container diapo',
    'weight' => '2',
    'children' => array(
      0 => 'group_link_theme',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container diapo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-conteneur-diapo field-group-div container',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_theme|node|slide|portal_slide';
  $field_group->group_name = 'group_link_theme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'portal_slide';
  $field_group->parent_name = 'group_conteneur_diapo';
  $field_group->data = array(
    'label' => 'group-link-theme',
    'weight' => '4',
    'children' => array(
      0 => 'lien_diapo_h2',
      1 => 'thematic_class',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-link-theme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link-theme field-group-fieldset',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_theme|node|slide|site_slide';
  $field_group->group_name = 'group_link_theme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'site_slide';
  $field_group->parent_name = 'group_conteneur_diapo';
  $field_group->data = array(
    'label' => 'group-link-theme',
    'weight' => '3',
    'children' => array(
      0 => 'lien_diapo_h2',
      1 => 'thematic_class',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-link-theme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link-theme field-group-div',
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
  t('Container diapo');
  t('group-all-diapo');
  t('group-link-theme');

  return $field_groups;
}
