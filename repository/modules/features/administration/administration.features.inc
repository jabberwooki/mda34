<?php
/**
 * @file
 * administration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function administration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function administration_default_entityform_type() {
  $items = array();
  $items['pre_inscription_pocket_film'] = entity_import('entityform_type', '{
    "type" : "pre_inscription_pocket_film",
    "label" : "Pre-inscription pocket film",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 1,
      "submission_page_title" : "Confirmation de votre demande de pre-inscription",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EVotre demande de pre-inscription est enrgistr\\u00e9.\\u003Cbr \\/\\u003E\\r\\nCordialament\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "141037677" : "141037677",
        "183916278" : "183916278",
        "155963314" : "155963314",
        "22875792" : "22875792",
        "193262079" : "193262079",
        "109177673" : "109177673"
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
