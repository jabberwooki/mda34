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
  $fe_block_boxes->body = '<p><a class="icon-twitter icon-social" href="https://twitter.com/mda_34"><span class="sr-only">Twitter</span></a> <a class="icon-youtube icon-social" href="http://www.youtube.com/user/maisondesados34"><span class="sr-only">Youtube</span></a>&nbsp;<a class="icon-facebook icon-social" href="http://www.facebook.com/maisondesados34"><span class="sr-only">Facebook</span></a> <a class="icon-gplus icon-social" href="https://plus.google.com/101235085641060503044/posts"><span class="sr-only">Google+</span></a></p>
';

  $export['social_networks_links'] = $fe_block_boxes;

  return $export;
}
