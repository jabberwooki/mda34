<?php
/**
 * @file
 * kcore.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function kcore_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 6a1586bb-604b-4514-9e14-ccbbaf3f654d
  $menu_uuid_links['6a1586bb-604b-4514-9e14-ccbbaf3f654d'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://parents.mda34.org',
    'router_path' => '',
    'link_title' => 'Parents',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-menu-parents',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'uuid' => '6a1586bb-604b-4514-9e14-ccbbaf3f654d',
  );
  // Exported menu link: 6a26fb9c-ecd8-44d0-9c78-8e2e2335d67f
  $menu_uuid_links['6a26fb9c-ecd8-44d0-9c78-8e2e2335d67f'] = array(
    'menu_name' => 'menu-shortcuts',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-shortcut-login',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'uuid' => '6a26fb9c-ecd8-44d0-9c78-8e2e2335d67f',
  );
  // Exported menu link: 78002f88-148f-41b6-9209-3f00d4cfbc1b
  $menu_uuid_links['78002f88-148f-41b6-9209-3f00d4cfbc1b'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '78002f88-148f-41b6-9209-3f00d4cfbc1b',
  );
  // Exported menu link: 83584c10-5bc3-4079-873c-fff09cf3610b
  $menu_uuid_links['83584c10-5bc3-4079-873c-fff09cf3610b'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://reseau-pro.mda34.org',
    'router_path' => '',
    'link_title' => 'Pros',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-menu-pro',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 22,
    'uuid' => '83584c10-5bc3-4079-873c-fff09cf3610b',
  );
  // Exported menu link: a297ef2b-85cb-493d-91b5-b4e218cb3100
  $menu_uuid_links['a297ef2b-85cb-493d-91b5-b4e218cb3100'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://ados.mda34.org',
    'router_path' => '',
    'link_title' => 'Adolescents',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-menu-ado',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 18,
    'uuid' => 'a297ef2b-85cb-493d-91b5-b4e218cb3100',
  );
  // Exported menu link: ac6e0fe7-0993-4d7c-ae0f-0092a88509ef
  $menu_uuid_links['ac6e0fe7-0993-4d7c-ae0f-0092a88509ef'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.mda34.org',
    'router_path' => '',
    'link_title' => 'Portail',
    'options' => array(
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 32,
    'uuid' => 'ac6e0fe7-0993-4d7c-ae0f-0092a88509ef',
  );
  // Exported menu link: af907ce2-4174-471c-a55e-e08e15142773
  $menu_uuid_links['af907ce2-4174-471c-a55e-e08e15142773'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://philado.mda34.org',
    'router_path' => '',
    'link_title' => 'Philado',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd6' => 'd6',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 28,
    'uuid' => 'af907ce2-4174-471c-a55e-e08e15142773',
  );
  // Exported menu link: cbef5c2e-c868-4faf-9fff-c2e9afa72272
  $menu_uuid_links['cbef5c2e-c868-4faf-9fff-c2e9afa72272'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://radio.mda34.org',
    'router_path' => '',
    'link_title' => 'Radio',
    'options' => array(
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
          'd2' => 'd2',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-menu-radio',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 24,
    'uuid' => 'cbef5c2e-c868-4faf-9fff-c2e9afa72272',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Adolescents');
  t('Login');
  t('Parents');
  t('Philado');
  t('Portail');
  t('Pros');
  t('Radio');

  return $menu_uuid_links;
}
