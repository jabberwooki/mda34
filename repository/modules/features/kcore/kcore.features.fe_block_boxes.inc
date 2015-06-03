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
  $fe_block_boxes->body = '<p>
  <a href="https://twitter.com/mda_34" class="icon-twitter icon-social">
    <span class="sr-only">Twitter</span>
  </a> &nbsp; 
  <a href="http://www.youtube.com/user/maisondesados34" class="icon-youtube icon-social">
    <span class="sr-only">Youtube</span>
  </a> &nbsp;
  <a href="http://www.facebook.com/maisondesados34" class="icon-facebook icon-social">
    <span class="sr-only">Facebook</span>
  </a> &nbsp; 
  <a href="https://plus.google.com/101235085641060503044/posts" class="icon-gplus icon-social">
    <span class="sr-only">Google+</span>
  </a>
</p>
';

  $export['social_networks_links'] = $fe_block_boxes;

  return $export;
}
