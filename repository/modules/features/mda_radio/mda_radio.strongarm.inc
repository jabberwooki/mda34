<?php
/**
 * @file
 * mda_radio.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mda_radio_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__radio_programme';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
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
      'block' => array(
        'custom_settings' => FALSE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'last_item' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_item' => array(
        'custom_settings' => TRUE,
      ),
      'portal_slide' => array(
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
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'last_item' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'sidebar_item' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'last_item' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'sidebar_item' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_radio_programme';
  $strongarm->value = '0';
  $export['language_content_type_radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_radio_programme';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_radio_programme';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_radio_programme';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_radio_programme';
  $strongarm->value = '1';
  $export['node_preview_radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_radio_programme';
  $strongarm->value = 0;
  $export['node_submitted_radio_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_radio_programme_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_radio_programme_pattern'] = $strongarm;

  return $export;
}
