<?php
/**
 * @file
 * mda_newsletter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mda_newsletter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_api_key';
  $strongarm->value = '9a6d7c25be1a0314897fd34ab1887536-us3';
  $export['mailchimp_api_key'] = $strongarm;

  return $export;
}
