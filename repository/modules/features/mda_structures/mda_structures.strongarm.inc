<?php
/**
 * @file
 * mda_structures.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mda_structures_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__structure';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
      'block' => array(
        'custom_settings' => FALSE,
      ),
      'last_item' => array(
        'custom_settings' => FALSE,
      ),
      'portal_slide' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_item' => array(
        'custom_settings' => FALSE,
      ),
      'site_slide' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '18',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '16',
        ),
        'redirect' => array(
          'weight' => '17',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_structure';
  $strongarm->value = '0';
  $export['language_content_type_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_structure';
  $strongarm->value = array();
  $export['menu_options_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_structure';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_structure';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_structure';
  $strongarm->value = '1';
  $export['node_preview_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_structure';
  $strongarm->value = 0;
  $export['node_submitted_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_structure_pattern';
  $strongarm->value = 'annuaire/[node:title]';
  $export['pathauto_node_structure_pattern'] = $strongarm;

  return $export;
}
