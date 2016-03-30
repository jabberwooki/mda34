<?php
/**
 * @file
 * mda_contacts.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mda_contacts_default_rules_configuration() {
  $items = array();
  $items['rules_send_email_recipient_contact_form'] = entity_import('rules_config', '{ "rules_send_email_recipient_contact_form" : {
      "LABEL" : "Envoi email destinataire pour formulaire de contact",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Contact form" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_contact_recipient" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "entityform:field-contact-recipient" ],
            "subject" : "[Contact [entityform:field-contact-recipient] MDA34] [entityform:field-subject]",
            "message" : "Envoy\\u00e9 par : [entityform:field-name-nickname]\\r\\nEmail : [entityform:field-contact-email]\\r\\n\\r\\n-------------------------------------------------------------\\r\\n\\r\\n[entityform:field-message]",
            "from" : "[entityform:field-contact-email]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_webmaster_contact_form'] = entity_import('rules_config', '{ "rules_send_email_webmaster_contact_form" : {
      "LABEL" : "Envoi email webmaster pour formulaire de contact",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Contact form" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_contact_recipient" } },
        { "AND" : [] },
        { "NOT data_is" : {
            "data" : [ "entityform:field-contact-recipient" ],
            "value" : [ "site:mail" ]
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "[Contact [entityform:field-contact-recipient] MDA34] [entityform:field-subject]",
            "message" : "Envoy\\u00e9 par : [entityform:field-name-nickname]\\r\\nEmail : [entityform:field-contact-email]\\r\\n\\r\\n-------------------------------------------------------------\\r\\n\\r\\n[entityform:field-message]",
            "from" : "[entityform:field-contact-email]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
