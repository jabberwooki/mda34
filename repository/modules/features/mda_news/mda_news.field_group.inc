<?php
/**
 * @file
 * mda_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mda_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted_socialnetworks|node|news|full';
  $field_group->group_name = 'group_submitted_socialnetworks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conteneur Auteur Node / Réseaux sociaux',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Conteneur Auteur Node / Réseaux sociaux',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-submitted-socialnetworks field-group-div',
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
  t('Conteneur Auteur Node / Réseaux sociaux');

  return $field_groups;
}
