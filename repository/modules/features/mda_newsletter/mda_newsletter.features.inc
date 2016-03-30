<?php
/**
 * @file
 * mda_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mda_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function mda_newsletter_default_mailchimp_signup() {
  $items = array();
  $items['newsletter'] = entity_import('mailchimp_signup', '{
    "name" : "newsletter",
    "mc_lists" : { "aad13513e4" : "aad13513e4" },
    "mode" : "1",
    "title" : "Newsletter",
    "settings" : {
      "path" : "",
      "submit_button" : "S\\u0027inscrire",
      "confirmation_message" : "Votre demande d\\u0027inscription a bien \\u00e9t\\u00e9 prise en compte.",
      "destination" : "",
      "mergefields" : { "EMAIL" : {
          "name" : "Email",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        }
      },
      "description" : "",
      "doublein" : 0,
      "send_welcome" : 1,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
