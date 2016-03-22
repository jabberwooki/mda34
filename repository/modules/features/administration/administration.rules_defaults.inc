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
            "to" : "rh@mda34.org,webmaster@mda34.org",
            "subject" : "Candidature coordinateur d\\u2019un \\u00e9tablissement de la Maison des Adolescents",
            "message" : "Une nouvelle demande de candidature a \\u00e9t\\u00e9 d\\u00e9pos\\u00e9 le [site:current-date]\\r\\n-------------------------------------------------------------\\r\\n[entityform:field_nom_can]\\r\\n[entityform:field_prenom_can]\\r\\n[entityform:field_email_cand]\\r\\n[entityform:field_tel_cand]\\r\\n[entityform:field_message_cand]\\t\\r\\n\\r\\nVoir ici les candidadures\\r\\nhttp:\\/\\/reseau-pro.mda34.org\\/admin\\/structure\\/entityform_types\\/manage\\/canditature\\/submissions\\/autofields_table",
            "from" : "[entityform:field_email_cand]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['administration_candidature_accuse_de_reception'] = entity_import('rules_config', '{ "administration_candidature_accuse_de_reception" : {
      "LABEL" : "Candidature accuse de reception",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_cand" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[entityform:field-email-cand]",
            "subject" : "[MDA 34] - Candidature coordinateur d\\u2019un \\u00e9tablissement de la Maison des Adolescents",
            "message" : "Accus\\u00e9 de r\\u00e9ception de votre demande de candidature d\\u00e9pos\\u00e9e le [site:current-date] sur notre site internet\\r\\n-------------------------------------------------------------\\r\\nNOM : [entityform:field_nom_can]\\r\\nPRENOM : [entityform:field_prenom_can]\\r\\nEmail : [entityform:field_email_cand]\\r\\n\\r\\nNous avons bien re\\u00e7u votre candidature et nous vous en remercions.\\r\\nElle sera \\u00e9tudi\\u00e9e attentivement et nous vous contacterons pour vous tenir inform\\u00e9 des suites.\\r\\nSi votre candidature \\u00e9tait retenue \\u00e0 cette \\u00e9tape, nous vous inviterions \\u00e0 un entretien entre le 19 et le 21 janvier.\\r\\nLa date de prise de fonction \\u00e9tant n\\u00e9gociable.\\r\\n\\r\\nBien cordialement\\r\\nBruno Chichignoud, Directeur de la MDA34.\\r\\nDans cette attente et pour plus de pr\\u00e9cisions, n\\u0027h\\u00e9sitez pas \\u00e0 parcourir notre site internet.",
            "from" : "[entityform:field-email-cand]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['administration_fiche_de_participation'] = entity_import('rules_config', '{ "administration_fiche_de_participation" : {
      "LABEL" : "Fiche de participation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_fiche_pf" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "l.ahmar@mda34.org,culture@mda34.org,webmaster@mda34.org",
            "subject" : "Nouvelle fiche de participation nomenclature remplie en ligne de [entityform:field-nom-pf]",
            "message" : "Une nouvelle fiche nomenclature vient d\\u0027\\u00eatre saisi\\r\\n-------------------------------------------------------------\\r\\nNOM\\/PSEUDO : [entityform:field-nom-pf] [entityform:field-prenom-pf]\\r\\nEmail : [entityform:field-email-fiche-pf]\\r\\nTITRE DU FILM : [entityform:field-titre-du-film]\\r\\nSynopsis : [entityform:field-synopsis-pf]\\r\\nCat\\u00e9gorie : [entityform:field-categorie-pf]\\r\\nFormat : [entityform:field-format-video]\\r\\n-------------------------------------------------------------",
            "from" : "[entityform:field-email-fiche-pf]",
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
            "to" : "l.ahmar@mda34.org,culture@mda34.org,webmaster@mda34.org",
            "subject" : "Demande de pr\\u00e9-inscription au pocket film 2016",
            "message" : "Une nouvelle demande a \\u00e9t\\u00e9 effectu\\u00e9 sur le site\\r\\n-------------------------------------------------------------\\r\\nNOM\\/PSEUDO : [entityform:field-nom-pf] [entityform:field-prenom-pf]\\r\\nEmail : [entityform:field-email-pf]\\r\\nTranche d\\u0027\\u00e2ge du ou des participants : [entityform:field-age-pf]\\r\\nParticipations \\u00e0 titre : [entityform:field-parti-pf]\\r\\nLocalisation : [entityform:field_geo_pk] - [entityform:field_code_postal_pf]\\r\\nJ\\u0027accepte le r\\u00e8glement du concours pour valider ma demande d\\u0027inscription : [entityform:field-reglement-pf]\\r\\n-------------------------------------------------------------",
            "from" : "[entityform:field-email-pf]\\t",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
