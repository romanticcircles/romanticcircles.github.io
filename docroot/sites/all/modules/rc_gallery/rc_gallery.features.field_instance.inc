<?php
/**
 * @file
 * rc_gallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rc_gallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-collection-field_description'.
  $field_instances['node-collection-field_description'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Description of the Collection',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-collection-field_images_in_this_collection'.
  $field_instances['node-collection-field_images_in_this_collection'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images_in_this_collection',
    'label' => 'Images in this Collection',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_credits'.
  $field_instances['node-galler_exhibit-field_credits'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The person credited with creating the Exhibit',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_credits',
    'label' => 'Credits',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_description'.
  $field_instances['node-galler_exhibit-field_description'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For the Romantic Circles Gallery. A description of the exhibit',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_exhibit_created_by'.
  $field_instances['node-galler_exhibit-field_exhibit_created_by'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exhibit_created_by',
    'label' => 'Exhibit Created by',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_exhibit_icon'.
  $field_instances['node-galler_exhibit-field_exhibit_icon'] = array(
    'bundle' => 'galler_exhibit',
    'deleted' => 0,
    'description' => 'Add an image from the Gallery here for presentation purposes, both in the recommender and in the exhibit landing page. ',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exhibit_icon',
    'label' => 'Exhibit Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_exhibit_tags'.
  $field_instances['node-galler_exhibit-field_exhibit_tags'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exhibit_tags',
    'label' => 'Exhibit Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-galler_exhibit-field_gallery_items_in_this_exhi'.
  $field_instances['node-galler_exhibit-field_gallery_items_in_this_exhi'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gallery_items_in_this_exhi',
    'label' => 'Gallery Items in this Exhibit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_images_in_exhibit'.
  $field_instances['node-galler_exhibit-field_images_in_exhibit'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images_in_exhibit',
    'label' => 'Images in Exhibit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_nines_discipline_s_'.
  $field_instances['node-galler_exhibit-field_nines_discipline_s_'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => array(
      0 => array(
        'tid' => 27153,
      ),
      1 => array(
        'tid' => 27162,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES disciplines for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_discipline_s_',
    'label' => 'NINES Discipline(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_nines_genre_s_'.
  $field_instances['node-galler_exhibit-field_nines_genre_s_'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => array(
      0 => array(
        'tid' => 27203,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES genres for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_genre_s_',
    'label' => 'NINES Genre(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-galler_exhibit-field_nines_type_s_'.
  $field_instances['node-galler_exhibit-field_nines_type_s_'] = array(
    'bundle' => 'galler_exhibit',
    'default_value' => array(
      0 => array(
        'tid' => 27136,
      ),
      1 => array(
        'tid' => 27148,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES types for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_type_s_',
    'label' => 'NINES Type(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'node-gallery_exhibit_item-field_item_description'.
  $field_instances['node-gallery_exhibit_item-field_item_description'] = array(
    'bundle' => 'gallery_exhibit_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is information specific to the image\'s use and context in the exhibit, as opposed to general information about the image contained on its own page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_item_description',
    'label' => 'Item Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-gallery_exhibit_item-field_parent_exhibit'.
  $field_instances['node-gallery_exhibit_item-field_parent_exhibit'] = array(
    'bundle' => 'gallery_exhibit_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Exhibit to which this image/description belongs',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parent_exhibit',
    'label' => 'Parent Exhibit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-gallery_exhibit_item-field_related_image'.
  $field_instances['node-gallery_exhibit_item-field_related_image'] = array(
    'bundle' => 'gallery_exhibit_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The image this Exhibit item refers to',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_image',
    'label' => 'Related Image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_accession_number_'.
  $field_instances['node-gallery_image-field_accession_number_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_accession_number_',
    'label' => 'Accession Number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_artist_unknown'.
  $field_instances['node-gallery_image-field_artist_unknown'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => FALSE,
    'deleted' => 0,
    'description' => 'Check this box if the artist is unknown',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_artist_unknown',
    'label' => 'Artist Unknown',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_associated_reviews'.
  $field_instances['node-gallery_image-field_associated_reviews'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_associated_reviews',
    'label' => 'Associated Reviews',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_associated_user'.
  $field_instances['node-gallery_image-field_associated_user'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The user from the old Romantic Circles archive associated with this item.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_associated_user',
    'label' => 'Associated User',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_copyright'.
  $field_instances['node-gallery_image-field_copyright'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'value' => '©',
      ),
    ),
    'deleted' => 0,
    'description' => 'Content of <dc:rights> goes here',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_copyright',
    'label' => 'Copyright',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creation_technique_'.
  $field_instances['node-gallery_image-field_creation_technique_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creation_technique_',
    'label' => 'Creation Technique',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_author'.
  $field_instances['node-gallery_image-field_creator_author'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'This field takes the value of the "creator" field when the image illustrates this author\'s work',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_collaborator'.
  $field_instances['node-gallery_image-field_creator_collaborator'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'This field takes the value of the "collaborator" field',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_collaborator',
    'label' => 'Collaborator',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_delineator'.
  $field_instances['node-gallery_image-field_creator_delineator'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Takes the value of the "Creator" field when the artist is a delineator',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_delineator',
    'label' => 'Delineator',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_editor'.
  $field_instances['node-gallery_image-field_creator_editor'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Takes the value of the "Creator" field when the creator is the editor of the related primary work',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_editor',
    'label' => 'Editor',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_engraver'.
  $field_instances['node-gallery_image-field_creator_engraver'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Takes the value of the "Creator" field if the artist is an engraver',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_engraver',
    'label' => 'Engraver',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_illustrator'.
  $field_instances['node-gallery_image-field_creator_illustrator'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Takes the value of the "Creator" field if the artist is an illustrator (pen & ink, etc.)',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_illustrator',
    'label' => 'Illustrator',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_painter'.
  $field_instances['node-gallery_image-field_creator_painter'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Takes the value of the "creator" field if the artist is a painter',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_painter',
    'label' => 'Painter',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_creator_photographer'.
  $field_instances['node-gallery_image-field_creator_photographer'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_photographer',
    'label' => 'Photographer',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_description'.
  $field_instances['node-gallery_image-field_description'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description goes here',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_description_other'.
  $field_instances['node-gallery_image-field_description_other'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This holds all the descriptive prose except for the main "Description" field.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_other',
    'label' => 'Description (Other)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_featured_in_exhibit'.
  $field_instances['node-gallery_image-field_featured_in_exhibit'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_in_exhibit',
    'label' => 'Featured in Exhibit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_from_the_collection'.
  $field_instances['node-gallery_image-field_from_the_collection'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_from_the_collection',
    'label' => 'From the Collection',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_gallery_location'.
  $field_instances['node-gallery_image-field_gallery_location'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The geographic or other physical location of the item',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gallery_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_galleryimage'.
  $field_instances['node-gallery_image-field_galleryimage'] = array(
    'bundle' => 'gallery_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_galleryimage',
    'label' => 'Gallery Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'galleryOriginals',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_height_in_centimeters'.
  $field_instances['node-gallery_image-field_height_in_centimeters'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_height_in_centimeters',
    'label' => 'Height (in centimeters)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_image_date'.
  $field_instances['node-gallery_image-field_image_date'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Here we put the dates of the original Gallery images. Since the granularity of the dates is variable, we\'re using this "partial date" solution',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(
            'components' => array(
              'approx' => array(
                'value' => 'This date is an estimate',
                'weight' => -10,
              ),
              'c1' => array(
                'value' => '',
                'weight' => -2,
              ),
              'c2' => array(
                'value' => '',
                'weight' => -1,
              ),
              'c3' => array(
                'value' => '',
                'weight' => 0,
              ),
              'day' => array(
                'empty' => '',
                'format' => 'j',
                'weight' => -9,
              ),
              'hour' => array(
                'empty' => '',
                'format' => 'h',
                'weight' => -6,
              ),
              'minute' => array(
                'empty' => '',
                'format' => 'i',
                'weight' => -5,
              ),
              'month' => array(
                'empty' => '',
                'format' => 'F',
                'weight' => -8,
              ),
              'second' => array(
                'empty' => '',
                'format' => 's',
                'weight' => -4,
              ),
              'timezone' => array(
                'empty' => '',
                'format' => 'T',
                'weight' => -3,
              ),
              'year' => array(
                'empty' => '',
                'format' => 'Y',
                'weight' => -7,
              ),
            ),
            'display' => array(
              'day' => 'date_only',
              'hour' => 'estimate_label',
              'minute' => 'estimate_label',
              'month' => 'date_only',
              'second' => 'estimate_label',
              'timezone' => 'date_only',
              'year' => 'date_only',
            ),
            'meridiem' => 'a',
            'separator' => array(
              'date' => ' ',
              'datetime' => ' ',
              'other' => ' ',
              'range' => '',
              'time' => ':',
            ),
            'year_designation' => 'sign',
          ),
          'format' => 'custom',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image_date',
    'label' => 'Image Date',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'partial_date',
      'settings' => array(
        0 => FALSE,
        'estimates' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'year' => 'year',
          ),
        ),
        'granularity' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 1,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 1,
          'range_inline' => 0,
          'txt_long' => 0,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_latitude_longitude'.
  $field_instances['node-gallery_image-field_latitude_longitude'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Here add latitude and longitude coordinates for Gallery images tied to a particular place. This will be run via imports on TEI places files. See the feeds importers for more. ',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_latitude_longitude',
    'label' => 'Latitude/Longitude',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'solrspatial' => array(
        'enabled' => 0,
        'lat_field' => '',
        'latlng_field' => '',
        'lng_field' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(),
      'type' => 'geofield_latlon',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_nines_discipline_s_'.
  $field_instances['node-gallery_image-field_nines_discipline_s_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'tid' => 27153,
      ),
      1 => array(
        'tid' => 27162,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES disciplines for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_discipline_s_',
    'label' => 'NINES Discipline(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_nines_genre_s_'.
  $field_instances['node-gallery_image-field_nines_genre_s_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'tid' => 27204,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES genres for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_genre_s_',
    'label' => 'NINES Genre(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_nines_type_s_'.
  $field_instances['node-gallery_image-field_nines_type_s_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'tid' => 27144,
      ),
      1 => array(
        'tid' => 27148,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES types for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_type_s_',
    'label' => 'NINES Type(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_original_pub_date'.
  $field_instances['node-gallery_image-field_original_pub_date'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_original_pub_date',
    'label' => 'Image Added Date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'node-gallery_image-field_original_publication_date'.
  $field_instances['node-gallery_image-field_original_publication_date'] = array(
    'bundle' => 'gallery_image',
    'deleted' => 0,
    'description' => 'This field will be invisible except for its use by Views to sort by date. When the Partial Date module gains Views support, this field will be deprecated, and can be dealt with accordingly. Until then...',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_original_publication_date',
    'label' => 'Original publication date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_parent_section'.
  $field_instances['node-gallery_image-field_parent_section'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'target_id' => 41174,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parent_section',
    'label' => 'Parent Section',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_primary_works'.
  $field_instances['node-gallery_image-field_primary_works'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A primary work associated with this item.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_primary_works',
    'label' => 'Primary Works',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_publisher'.
  $field_instances['node-gallery_image-field_publisher'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publisher',
    'label' => 'Publisher',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_skeleton_data_'.
  $field_instances['node-gallery_image-field_skeleton_data_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => FALSE,
    'deleted' => 0,
    'description' => 'Check this box if this record reflects a partial/skeleton record, to be completed later',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skeleton_data_',
    'label' => 'Skeleton Data?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_style'.
  $field_instances['node-gallery_image-field_style'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The style of the image',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_style',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_support_medium'.
  $field_instances['node-gallery_image-field_support_medium'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_support_medium',
    'label' => 'Support Medium',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_text_date'.
  $field_instances['node-gallery_image-field_text_date'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-gallery_image-field_width_in_centimeters_'.
  $field_instances['node-gallery_image-field_width_in_centimeters_'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_width_in_centimeters_',
    'label' => 'Width (in centimeters)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-gallery_image-opencalais_person_tags'.
  $field_instances['node-gallery_image-opencalais_person_tags'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This duplicates the "Agent" raw text values, and integrates them into the Calais "person" tagset',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_person_tags',
    'label' => 'Person',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-gallery_image-taxonomy_vocabulary_3'.
  $field_instances['node-gallery_image-taxonomy_vocabulary_3'] = array(
    'bundle' => 'gallery_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-gallery_review-body'.
  $field_instances['node-gallery_review-body'] = array(
    'bundle' => 'gallery_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-gallery_review-field_associated_images'.
  $field_instances['node-gallery_review-field_associated_images'] = array(
    'bundle' => 'gallery_review',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_associated_images',
    'label' => 'Associated Images',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-gallery_review-field_nines_discipline_s_'.
  $field_instances['node-gallery_review-field_nines_discipline_s_'] = array(
    'bundle' => 'gallery_review',
    'default_value' => array(
      0 => array(
        'tid' => 27153,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_discipline_s_',
    'label' => 'NINES Discipline(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-gallery_review-field_nines_genre_s_'.
  $field_instances['node-gallery_review-field_nines_genre_s_'] = array(
    'bundle' => 'gallery_review',
    'default_value' => array(
      0 => array(
        'tid' => 27175,
      ),
      1 => array(
        'tid' => 27180,
      ),
      2 => array(
        'tid' => 27190,
      ),
    ),
    'deleted' => 0,
    'description' => 'Applicable NINES genres for RDF output. Multiple values may be selected.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_genre_s_',
    'label' => 'NINES Genre(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-gallery_review-field_nines_type_s_'.
  $field_instances['node-gallery_review-field_nines_type_s_'] = array(
    'bundle' => 'gallery_review',
    'default_value' => array(
      0 => array(
        'tid' => 27149,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_type_s_',
    'label' => 'NINES Type(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-gallery_review-field_original_publication_date'.
  $field_instances['node-gallery_review-field_original_publication_date'] = array(
    'bundle' => 'gallery_review',
    'deleted' => 0,
    'description' => 'Fill this out for date sort purposes',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_original_publication_date',
    'label' => 'Original publication date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-gallery_review-field_partial_publication_date'.
  $field_instances['node-gallery_review-field_partial_publication_date'] = array(
    'bundle' => 'gallery_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 7,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partial_publication_date',
    'label' => 'Original publication/creation date',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'partial_date',
      'settings' => array(
        0 => FALSE,
        'estimates' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'year' => 'year',
          ),
        ),
        'granularity' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 0,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 1,
          'range_inline' => 0,
          'txt_long' => 1,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-gallery_review-opencalais_person_tags'.
  $field_instances['node-gallery_review-opencalais_person_tags'] = array(
    'bundle' => 'gallery_review',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_person_tags',
    'label' => 'Person',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'person',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'Person',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-gallery_review-taxonomy_vocabulary_3'.
  $field_instances['node-gallery_review-taxonomy_vocabulary_3'] = array(
    'bundle' => 'gallery_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A primary work associated with this item.');
  t('Accession Number');
  t('Add an image from the Gallery here for presentation purposes, both in the recommender and in the exhibit landing page. ');
  t('Applicable NINES disciplines for RDF output. Multiple values may be selected.');
  t('Applicable NINES genres for RDF output. Multiple values may be selected.');
  t('Applicable NINES types for RDF output. Multiple values may be selected.');
  t('Artist Unknown');
  t('Associated Images');
  t('Associated Reviews');
  t('Associated User');
  t('Author');
  t('Body');
  t('Check this box if the artist is unknown');
  t('Check this box if this record reflects a partial/skeleton record, to be completed later');
  t('Collaborator');
  t('Content of <dc:rights> goes here');
  t('Copyright');
  t('Creation Technique');
  t('Credits');
  t('Date');
  t('Delineator');
  t('Description');
  t('Description (Other)');
  t('Description goes here');
  t('Editor');
  t('Engraver');
  t('Exhibit Created by');
  t('Exhibit Icon');
  t('Exhibit Tags');
  t('Featured in Exhibit');
  t('Fill this out for date sort purposes');
  t('For the Romantic Circles Gallery. A description of the exhibit');
  t('From the Collection');
  t('Gallery Image');
  t('Gallery Items in this Exhibit');
  t('Height (in centimeters)');
  t('Here add latitude and longitude coordinates for Gallery images tied to a particular place. This will be run via imports on TEI places files. See the feeds importers for more. ');
  t('Here we put the dates of the original Gallery images. Since the granularity of the dates is variable, we\'re using this "partial date" solution');
  t('Illustrator');
  t('Image Added Date');
  t('Image Date');
  t('Images in Exhibit');
  t('Images in this Collection');
  t('Item Description');
  t('Latitude/Longitude');
  t('Location');
  t('NINES Discipline(s)');
  t('NINES Genre(s)');
  t('NINES Type(s)');
  t('Original publication date');
  t('Original publication/creation date');
  t('Painter');
  t('Parent Exhibit');
  t('Parent Section');
  t('Person');
  t('Photographer');
  t('Primary Works');
  t('Publisher');
  t('Related Image');
  t('Skeleton Data?');
  t('Style');
  t('Support Medium');
  t('Tags');
  t('Takes the value of the "Creator" field if the artist is an engraver');
  t('Takes the value of the "Creator" field if the artist is an illustrator (pen & ink, etc.)');
  t('Takes the value of the "Creator" field when the artist is a delineator');
  t('Takes the value of the "Creator" field when the creator is the editor of the related primary work');
  t('Takes the value of the "creator" field if the artist is a painter');
  t('The Description of the Collection');
  t('The Exhibit to which this image/description belongs');
  t('The geographic or other physical location of the item');
  t('The image this Exhibit item refers to');
  t('The person credited with creating the Exhibit');
  t('The style of the image');
  t('The user from the old Romantic Circles archive associated with this item.');
  t('This duplicates the "Agent" raw text values, and integrates them into the Calais "person" tagset');
  t('This field takes the value of the "collaborator" field');
  t('This field takes the value of the "creator" field when the image illustrates this author\'s work');
  t('This field will be invisible except for its use by Views to sort by date. When the Partial Date module gains Views support, this field will be deprecated, and can be dealt with accordingly. Until then...');
  t('This holds all the descriptive prose except for the main "Description" field.');
  t('This is information specific to the image\'s use and context in the exhibit, as opposed to general information about the image contained on its own page');
  t('Width (in centimeters)');

  return $field_instances;
}
