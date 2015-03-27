<?php
/**
 * @file
 * mda_multimedia.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function mda_multimedia_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'full';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'file' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-large',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'file' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'galleria',
      'settings' => array(
        'width' => '690',
        'height' => '450',
        'fullscreen_link' => FALSE,
        'thumb_style' => 'thumbnail',
        'normal_style' => 'large',
        'big_style' => 'original',
        'theme' => 'classic',
        'options' => '',
      ),
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['full'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'sdl_editor_representation';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'file' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-medium',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'file' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'galleria',
      'settings' => array(
        'width' => '690',
        'height' => '450',
        'fullscreen_link' => FALSE,
        'thumb_style' => 'thumbnail',
        'normal_style' => 'large',
        'big_style' => 'original',
        'theme' => 'classic',
        'options' => '',
      ),
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['sdl_editor_representation'] = $context_config;

  return $export;
}
