<?php
/**
 * @file
 * reviews_and_ficrep.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function reviews_and_ficrep_default_rules_configuration() {
  $items = array();
  $items['rules_email_per_comment'] = entity_import('rules_config', '{ "rules_email_per_comment" : {
      "LABEL" : "Email per comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "commenting" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_media" : { "bundle" : "comment_node_media" } },
      "DO" : [
        { "mail" : {
            "to" : "dave_rett@yahoo.com",
            "subject" : "New comment",
            "message" : "A comment is waiting your approval",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
