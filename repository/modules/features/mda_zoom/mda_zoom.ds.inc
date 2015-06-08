<?php
/**
 * @file
 * mda_zoom.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mda_zoom_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slide|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slide';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slide|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slide|portal_slide';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slide';
  $ds_fieldsetting->view_mode = 'portal_slide';
  $ds_fieldsetting->settings = array(
    'lien_diapo_h2' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'thematic_class' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slide|portal_slide'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slide|site_slide';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slide';
  $ds_fieldsetting->view_mode = 'site_slide';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slide|site_slide'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mda_zoom_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lien_diapo_h2';
  $ds_field->label = 'lien diapo h2';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h3 class="diapo-link">[node:field_slide_link]</h3>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['lien_diapo_h2'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'thematic_class';
  $ds_field->label = 'Thematique avec class';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h4 class="[node:field_icone] [node:field_couleur]">[node:field_thematique_diapo]</h4>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['thematic_class'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mda_zoom_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slide|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slide';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_slide_image',
        1 => 'field_subtitle',
        2 => 'body',
        3 => 'field_slide_link',
        4 => 'domain',
      ),
    ),
    'fields' => array(
      'field_slide_image' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'body' => 'ds_content',
      'field_slide_link' => 'ds_content',
      'domain' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|slide|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slide|portal_slide';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slide';
  $ds_layout->view_mode = 'portal_slide';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'lien_diapo_h2',
        1 => 'group_all_diapo',
        2 => 'field_slide_image',
        3 => 'thematic_class',
        4 => 'group_conteneur_diapo',
        5 => 'group_link_theme',
      ),
    ),
    'fields' => array(
      'lien_diapo_h2' => 'ds_content',
      'group_all_diapo' => 'ds_content',
      'field_slide_image' => 'ds_content',
      'thematic_class' => 'ds_content',
      'group_conteneur_diapo' => 'ds_content',
      'group_link_theme' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|slide|portal_slide'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slide|site_slide';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slide';
  $ds_layout->view_mode = 'site_slide';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_slide_image',
        1 => 'title',
        2 => 'field_subtitle',
        3 => 'body',
        4 => 'field_slide_link',
        5 => 'domain',
      ),
    ),
    'fields' => array(
      'field_slide_image' => 'ds_content',
      'title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'body' => 'ds_content',
      'field_slide_link' => 'ds_content',
      'domain' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|slide|site_slide'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mda_zoom_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'portal_slide';
  $ds_view_mode->label = 'Diapo portail';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['portal_slide'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'site_slide';
  $ds_view_mode->label = 'Diapo site';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['site_slide'] = $ds_view_mode;

  return $export;
}
