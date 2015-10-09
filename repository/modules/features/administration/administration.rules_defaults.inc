<?php
/**
 * @file
 * administration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function administration_default_rules_configuration() {
  $items = array();
  $items['rules_alerte_publication'] = entity_import('rules_config', '{ "rules_alerte_publication" : {
      "LABEL" : "Alerte publication",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Alerte publication" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "webmaster@mda34.org",
            "subject" : "alerte contenu MDA 34",
            "message" : "Bonjour\\r\\nUn nouveau contenu sur le site vient \\u00eatre publi\\u00e9.\\r\\n[node:title]\\r\\n[node:url]\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_inscription_pocket_film'] = entity_import('rules_config', '{ "rules_inscription_pocket_film" : {
      "LABEL" : "Inscription pocket film",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_pf" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "culture@mda34.org,webmaster@mda34.org",
            "subject" : "Demande de pr\\u00e9-inscription au pocket film 2016",
            "message" : "Une nouvelle demande a \\u00e9t\\u00e9 effectu\\u00e9 sur le site\\r\\n-------------------------------------------------------------\\r\\n[entityform:field-nom-pf]\\r\\n[entityform:field-prenom-pf]\\r\\n[entityform:field-age-pf]\\r\\n[entityform:field-parti-pf]\\r\\n[entityform:field-reglement-pf]\\r\\n[entityform:field-email-pf]",
            "from" : "[entityform:field-email-pf]\\t",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
