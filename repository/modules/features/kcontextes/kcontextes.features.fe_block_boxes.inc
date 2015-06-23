<?php
/**
 * @file
 * kcontextes.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kcontextes_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bloc des réseaux sociaux de bas de page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_links';
  $fe_block_boxes->body = '<div>
<a href="https://twitter.com/mda_34" class="icon-twitter icon-social"><span class="sr-only">Twitter</span></a><a href="http://www.youtube.com/user/maisondesados34" class="icon-youtube icon-social"><span class="sr-only">Youtube</span></a><a href="http://www.facebook.com/maisondesados34" class="icon-facebook icon-social"><span class="sr-only">Facebook</span></a><a href="http://plus.google.com/b/101235085641060503044/101235085641060503044" class="icon-gplus icon-social"><span class="sr-only">Google +</span></a></div>
';

  $export['social_links'] = $fe_block_boxes;

  return $export;
}
