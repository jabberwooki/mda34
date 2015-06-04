<?php
/**
 * @file
 * mda_multimedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_multimedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mda_multimedia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mda_multimedia_image_default_styles() {
  $styles = array();

  // Exported image style: img-col-12.
  $styles['img-col-12'] = array(
    'label' => 'img-col-12 (1920px)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1920,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: img-col-2.
  $styles['img-col-2'] = array(
    'label' => 'img-col-2 (176x176)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 176,
          'height' => 176,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: img-col-4.
  $styles['img-col-4'] = array(
    'label' => 'img-col-4 (360px)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: img-col-8.
  $styles['img-col-8'] = array(
    'label' => 'img-col-8 (940)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large-crop.
  $styles['large-crop'] = array(
    'label' => 'large-crop (480x480)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
