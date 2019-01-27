<?php
/**
 * @file
 * rc_search.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rc_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function rc_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "rc",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "blog",
          "thelwall_chronologh",
          "contributor",
          "documentaton",
          "editions_page",
          "editions_index_page",
          "exhibitt",
          "exhibit_item",
          "collection",
          "galler_exhibit",
          "gallery_exhibit_item",
          "gallery_image",
          "gallery_review",
          "general_audio",
          "gallery",
          "media",
          "page",
          "pedagogies_entry",
          "pedagogies_index_page",
          "pedagogies_page",
          "person",
          "place",
          "poets_on_poets_entry",
          "praxis_page",
          "praxis_index_page",
          "reference_page",
          "reference_index_page",
          "review",
          "video"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function rc_search_default_search_api_server() {
  $items = array();
  $items['rc'] = entity_import('search_api_server', '{
    "name" : "RC",
    "machine_name" : "rc",
    "description" : "The main RC Server",
    "class" : "acquia_search_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "useast1-c1.acquia-search.com",
      "port" : "80",
      "path" : "\\/solr\\/DGHT-71003",
      "edismax" : 0,
      "modify_acquia_connection" : 0,
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
