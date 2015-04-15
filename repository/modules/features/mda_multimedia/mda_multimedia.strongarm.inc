<?php
/**
 * @file
 * mda_multimedia.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mda_multimedia_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__audio';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'front_block' => array(
        'custom_settings' => TRUE,
      ),
      'content_block' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_block' => array(
        'custom_settings' => TRUE,
      ),
      'zoom_block' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'front_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sidebar_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'zoom_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__file';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'content_block' => array(
        'custom_settings' => TRUE,
      ),
      'front_block' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_block' => array(
        'custom_settings' => FALSE,
      ),
      'zoom_block' => array(
        'custom_settings' => FALSE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'content_block' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_block' => array(
        'custom_settings' => TRUE,
      ),
      'front_block' => array(
        'custom_settings' => TRUE,
      ),
      'zoom_block' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sidebar_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'front_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'zoom_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__image';
  $strongarm->value = array(
    'view_modes' => array(
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'front_block' => array(
        'custom_settings' => TRUE,
      ),
      'content_block' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_block' => array(
        'custom_settings' => TRUE,
      ),
      'zoom_block' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'front_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sidebar_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'zoom_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__video';
  $strongarm->value = array(
    'view_modes' => array(
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'front_block' => array(
        'custom_settings' => TRUE,
      ),
      'content_block' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_block' => array(
        'custom_settings' => TRUE,
      ),
      'zoom_block' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'front_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sidebar_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'zoom_block' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_custom_contexts';
  $strongarm->value = array(
    'front_block' => array(
      'name' => 'front_block',
      'title' => 'Front block',
      'description' => 'The Front Page Rep',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
    ),
    'content_block' => array(
      'name' => 'content_block',
      'title' => 'Content Block',
      'description' => 'The Content region blocks Rep',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'sidebar_block' => array(
      'name' => 'sidebar_block',
      'title' => 'Sidebar Block',
      'description' => 'The Sidebar region blocks Rep',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'zoom_block' => array(
      'name' => 'zoom_block',
      'title' => 'Zoom block',
      'description' => 'The Zoom block Rep',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'list' => array(
      'name' => 'list',
      'title' => 'List',
      'description' => 'The Entity lists Rep',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
    ),
  );
  $export['scald_custom_contexts'] = $strongarm;

  return $export;
}
