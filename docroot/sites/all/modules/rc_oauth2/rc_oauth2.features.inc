<?php
/**
 * @file
 * rc_oauth2.features.inc
 */

/**
 * Implements hook_default_oauth2_server().
 */
function rc_oauth2_default_oauth2_server() {
  $items = array();
  $items['main'] = entity_import('oauth2_server', '{
    "name" : "main",
    "label" : "Main",
    "settings" : {
      "enforce_state" : true,
      "default_scope" : "basic",
      "allow_implicit" : 0,
      "use_openid_connect" : 1,
      "use_crypto_tokens" : 0,
      "grant_types" : {
        "authorization_code" : "authorization_code",
        "refresh_token" : "refresh_token",
        "client_credentials" : 0,
        "urn:ietf:params:oauth:grant-type:jwt-bearer" : 0,
        "password" : 0
      },
      "always_issue_new_refresh_token" : 0,
      "unset_refresh_token_after_use" : 1,
      "access_lifetime" : "3600",
      "id_lifetime" : "3600",
      "refresh_token_lifetime" : "1209600",
      "require_exact_redirect_uri" : 1
    },
    "rdf_mapping" : [],
    "scopes" : [
      {
        "name" : "basic",
        "description" : "something that appears on the authorization page",
        "rdf_mapping" : []
      },
      {
        "name" : "openid",
        "description" : "Know who you are on Romantic Circles",
        "rdf_mapping" : []
      },
      {
        "name" : "offline_access",
        "description" : "Access the API when you\\u0027re not present.",
        "rdf_mapping" : []
      },
      {
        "name" : "email",
        "description" : "View your email address.",
        "rdf_mapping" : []
      },
      {
        "name" : "profile",
        "description" : "View basic information about your account.",
        "rdf_mapping" : []
      },
      {
        "name" : "openid",
        "description" : "Know who you are on Romantic Circles",
        "rdf_mapping" : []
      },
      {
        "name" : "offline_access",
        "description" : "Access the API when you\\u0027re not present.",
        "rdf_mapping" : []
      },
      {
        "name" : "email",
        "description" : "View your email address.",
        "rdf_mapping" : []
      },
      {
        "name" : "profile",
        "description" : "View basic information about your account.",
        "rdf_mapping" : []
      }
    ]
  }');
  return $items;
}
