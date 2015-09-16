<?php
/**
 * @file
 * administration.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function administration_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 11150491-e4c1-4b17-af37-675d28b87bb7
  $menu_uuid_links['11150491-e4c1-4b17-af37-675d28b87bb7'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'uuid' => '11150491-e4c1-4b17-af37-675d28b87bb7',
  );
  // Exported menu link: 2970c1b8-6fb7-4102-8c0b-2ba1d33682b2
  $menu_uuid_links['2970c1b8-6fb7-4102-8c0b-2ba1d33682b2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/mollom',
    'router_path' => 'admin/reports/mollom',
    'link_title' => 'Mollom statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Reports and usage statistics for the Mollom module.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '2970c1b8-6fb7-4102-8c0b-2ba1d33682b2',
    'parent_uuid' => 'ca9daa58-a9d2-4aaf-af56-08a3683b55a1',
  );
  // Exported menu link: ca9daa58-a9d2-4aaf-af56-08a3683b55a1
  $menu_uuid_links['ca9daa58-a9d2-4aaf-af56-08a3683b55a1'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'uuid' => 'ca9daa58-a9d2-4aaf-af56-08a3683b55a1',
    'parent_uuid' => '11150491-e4c1-4b17-af37-675d28b87bb7',
  );
  // Exported menu link: dcc7bddb-c97b-4a26-8d72-08ea974d409f
  $menu_uuid_links['dcc7bddb-c97b-4a26-8d72-08ea974d409f'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'dcc7bddb-c97b-4a26-8d72-08ea974d409f',
    'parent_uuid' => '11150491-e4c1-4b17-af37-675d28b87bb7',
  );
  // Exported menu link: f6d124df-c80f-4345-8f64-87c7420672bc
  $menu_uuid_links['f6d124df-c80f-4345-8f64-87c7420672bc'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'uuid' => 'f6d124df-c80f-4345-8f64-87c7420672bc',
    'parent_uuid' => 'dcc7bddb-c97b-4a26-8d72-08ea974d409f',
  );
  // Exported menu link: f8a89169-2f40-4286-a0fb-0a2085351976
  $menu_uuid_links['f8a89169-2f40-4286-a0fb-0a2085351976'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/mollom',
    'router_path' => 'admin/config/content/mollom',
    'link_title' => 'Mollom content moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the Mollom service moderates user-submitted content such as spam and profanity.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'f8a89169-2f40-4286-a0fb-0a2085351976',
    'parent_uuid' => 'f6d124df-c80f-4345-8f64-87c7420672bc',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Configuration');
  t('Content authoring');
  t('Mollom content moderation');
  t('Mollom statistics');
  t('Reports');

  return $menu_uuid_links;
}
