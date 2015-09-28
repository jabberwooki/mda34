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
  return $items;
}
