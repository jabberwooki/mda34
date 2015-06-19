<?php
/**
 * @file
 * mda_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mda_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_event';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'DOMAIN_ALL' => 0,
    'www_mda34_org' => 0,
    'ados_mda34_org' => 0,
    'parents_mda34_org' => 0,
    'philado_mda34_org' => 0,
    'radio_mda34_org' => 0,
    'reseau_pro_mda34_org' => 0,
  );
  $export['domain_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => FALSE,
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
      'block' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
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
          'weight' => '17',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '15',
        ),
        'redirect' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_registration__event_registration';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'registration_form' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '4',
        ),
        'who_is_registering' => array(
          'weight' => '0',
        ),
        'anon_mail' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'mail' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'host_entity_link' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'created' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'updated' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'spaces' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'author' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'user' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'state' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'registration_form' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_registration__event_registration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event';
  $strongarm->value = '0';
  $export['language_content_type_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array();
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = 'agenda/[node:title]';
  $export['pathauto_node_event_pattern'] = $strongarm;

  return $export;
}
