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
  // Exported menu link: 2bb7e3db-ed6c-4a2f-9274-647f03273c77
  $menu_uuid_links['2bb7e3db-ed6c-4a2f-9274-647f03273c77'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '2bb7e3db-ed6c-4a2f-9274-647f03273c77',
    'parent_uuid' => '7ebfdd11-a089-4a23-80bf-196999bf5f50',
  );
  // Exported menu link: 7ebfdd11-a089-4a23-80bf-196999bf5f50
  $menu_uuid_links['7ebfdd11-a089-4a23-80bf-196999bf5f50'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'uuid' => '7ebfdd11-a089-4a23-80bf-196999bf5f50',
    'parent_uuid' => 'dcc7bddb-c97b-4a26-8d72-08ea974d409f',
  );
  // Exported menu link: 8fce58fd-7552-474e-a554-77eaed34292c
  $menu_uuid_links['8fce58fd-7552-474e-a554-77eaed34292c'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entityform_types',
    'router_path' => 'admin/structure/entityform_types',
    'link_title' => 'Entityform Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage entityform entity types, including adding and removing fields and the display of fields.',
      ),
      'identifier' => 'management_entityform-types:admin/structure/entityform_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '8fce58fd-7552-474e-a554-77eaed34292c',
    'parent_uuid' => 'd13172af-1878-4f10-abf3-d8ddf2d01d23',
  );
  // Exported menu link: a6d1949d-6083-40fc-ba71-11fcb919f096
  $menu_uuid_links['a6d1949d-6083-40fc-ba71-11fcb919f096'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/entityform',
    'router_path' => 'admin/config/content/entityform',
    'link_title' => 'Entityform Settings',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'a6d1949d-6083-40fc-ba71-11fcb919f096',
    'parent_uuid' => 'f6d124df-c80f-4345-8f64-87c7420672bc',
  );
  // Exported menu link: bb54b7a3-47ba-419d-9815-857b71adfadf
  $menu_uuid_links['bb54b7a3-47ba-419d-9815-857b71adfadf'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/entityforms',
    'router_path' => 'admin/reports/entityforms',
    'link_title' => 'Entityform Submissions',
    'options' => array(
      'attributes' => array(
        'title' => 'View Submissions for all Entityforms',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'bb54b7a3-47ba-419d-9815-857b71adfadf',
    'parent_uuid' => 'ca9daa58-a9d2-4aaf-af56-08a3683b55a1',
  );
  // Exported menu link: c82da05c-53f0-4e22-950d-aafa796ed9be
  $menu_uuid_links['c82da05c-53f0-4e22-950d-aafa796ed9be'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'uuid' => 'c82da05c-53f0-4e22-950d-aafa796ed9be',
    'parent_uuid' => 'dcc7bddb-c97b-4a26-8d72-08ea974d409f',
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
  // Exported menu link: d13172af-1878-4f10-abf3-d8ddf2d01d23
  $menu_uuid_links['d13172af-1878-4f10-abf3-d8ddf2d01d23'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'uuid' => 'd13172af-1878-4f10-abf3-d8ddf2d01d23',
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
  // Exported menu link: f03e540b-62ab-4f04-95ac-edd00064f7c4
  $menu_uuid_links['f03e540b-62ab-4f04-95ac-edd00064f7c4'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/captcha',
    'router_path' => 'admin/config/people',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer how and where CAPTCHAs are used.',
      ),
      'identifier' => 'management_captcha:admin/config/people/captcha',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'f03e540b-62ab-4f04-95ac-edd00064f7c4',
    'parent_uuid' => 'c82da05c-53f0-4e22-950d-aafa796ed9be',
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
  t('CAPTCHA');
  t('Configuration');
  t('Content authoring');
  t('Entityform Settings');
  t('Entityform Submissions');
  t('Entityform Types');
  t('Mollom content moderation');
  t('Mollom statistics');
  t('People');
  t('Reports');
  t('Rules');
  t('Structure');
  t('Workflow');

  return $menu_uuid_links;
}
