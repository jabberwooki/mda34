<?php
/**
 * @file
 * kcore.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kcore_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'MDA : Bloc réseaux sociaux';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_networks_links';
  $fe_block_boxes->body = '<a href="http://www.twitter.com/mda_34">Twitter </a> &nbsp; <a href="http://www.youtube.com/user/maisondesados34"> Youtube </a> &nbsp; <a href="http://www.facebook.com/maisondesados34"> Facebook </a> &nbsp; <a href="https://plus.google.com/101235085641060503044/posts"> Google+ </a>
';

  $export['social_networks_links'] = $fe_block_boxes;

  return $export;
}
