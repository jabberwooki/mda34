<?php
/**
 * @file
 * mda_contacts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_contacts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function mda_contacts_default_entityform_type() {
  $items = array();
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contacts",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Envoyer",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Formulaire envoy\\u00e9",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EVotre demande de contact a bien \\u00e9t\\u00e9 enregistr\\u00e9e. Nous allons y r\\u00e9pondre dans les meilleurs d\\u00e9lais.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "141037677" : 0,
        "183916278" : 0,
        "155963314" : 0,
        "22875792" : 0,
        "193262079" : 0,
        "109177673" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/contact",
        "alias" : "contact",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/contact\\/confirm",
        "alias" : "contact-demande-enregistree",
        "language" : "und"
      }
    }
  }');
  return $items;
}
