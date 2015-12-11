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
  $items['administration_candidature'] = entity_import('rules_config', '{ "administration_candidature" : {
      "LABEL" : "Candidature",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_cand" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "rh@mda34.org,webmaster@mda34.org,[entityform:field_email_cand]",
            "subject" : "Candidature coordinateur d\\u2019un \\u00e9tablissement de la Maison des Adolescents",
            "message" : "Une nouvelle demande de candidature a \\u00e9t\\u00e9 d\\u00e9pos\\u00e9\\r\\n-------------------------------------------------------------\\r\\n[entityform:field_nom_can]\\r\\n[entityform:field_prenom_can]\\r\\n[entityform:field_email_cand]\\r\\n[entityform:field_tel_cand]\\r\\n[entityform:field_message_cand]\\t\\r\\n[entityform:field_piece_jointes_cand]\\r\\n[entityform:field_lettre_de_motivation_cand]\\t",
            "from" : "[entityform:field_email_cand]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
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
