<?php
/**
 * @file
 * services.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function services_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = 'www.mda34.org';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_fr';
  $strongarm->value = array(
    'popup_enabled' => 0,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_agree_button_message' => 'J\'accepte',
    'popup_disagree_button_message' => 'Non, plus d\'infos',
    'popup_info' => array(
      'value' => '<h2>Nous utilisons des cookies sur ce site pour améliorer votre expérience d\'utilisateur</h2><p>En cliquant sur un lien sur cette page, vous donnez votre consentement pour nous de mettre les cookies.</p>',
      'format' => 'plain_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 1,
    'popup_find_more_button_message' => 'Plus d\'infos',
    'popup_hide_button_message' => 'Masquer',
    'popup_agreed' => array(
      'value' => '<h2>Merci d\'avoir accepter les cookies</h2><p>Vous pouvez maintenant cacher ce message ou en savoir plus sur les cookies.</p>',
      'format' => 'plain_text',
    ),
    'popup_link' => '/contact',
    'popup_link_new_window' => 1,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => 'a3a3a3',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_fr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_audio_captcha_enabled';
  $strongarm->value = 1;
  $export['mollom_audio_captcha_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_connection_timeout';
  $strongarm->value = '3';
  $export['mollom_connection_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_fai_dialog';
  $strongarm->value = 'mollom';
  $export['mollom_fai_dialog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_fai_entity_types';
  $strongarm->value = array(
    'node' => 0,
  );
  $export['mollom_fai_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_fallback';
  $strongarm->value = '0';
  $export['mollom_fallback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_fba_enabled';
  $strongarm->value = 0;
  $export['mollom_fba_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_languages_expected';
  $strongarm->value = array(
    'languageCode' => 'fr',
  );
  $export['mollom_languages_expected'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_log_minimum_severity';
  $strongarm->value = '4';
  $export['mollom_log_minimum_severity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_privacy_link';
  $strongarm->value = 1;
  $export['mollom_privacy_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_private_key';
  $strongarm->value = '0b4eb8f82dec280b0bf24fc04ee8a29c';
  $export['mollom_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_public_key';
  $strongarm->value = '45dab4412140ac96d869e441ed6a5b22';
  $export['mollom_public_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_testing_mode';
  $strongarm->value = 0;
  $export['mollom_testing_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_test_private_key';
  $strongarm->value = 'gx5bbijg6rqokkchsoj9rceg18jl95uy';
  $export['mollom_test_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_test_public_key';
  $strongarm->value = '1kpdq2bf7tbhr6v4f7607kze4z1xlbou';
  $export['mollom_test_public_key'] = $strongarm;

  return $export;
}
