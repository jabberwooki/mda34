<?php
/**
 * @file
 * mda_faqs.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mda_faqs_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'parents_faq_link';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'MDA : Lien FAQ parents';
  $box->options = array(
    'body' => array(
      'value' => '<div>
<h2><a href="/faq">Parents</a></h2>

<div><a href="/faq">Comment la MDA vous accueille ?</a></div>
</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['parents_faq_link'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'radio_faq_link';
  $box->plugin_key = 'simple';
  $box->title = 'FAQ';
  $box->description = 'MDA : Lien FAQ radio';
  $box->options = array(
    'body' => array(
      'value' => '<div><a href="http://ados.mda34.org/faq">La MDA34 répond<br />
à vos questions</a></div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['radio_faq_link'] = $box;

  return $export;
}
