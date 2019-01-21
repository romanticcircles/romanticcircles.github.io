<?php
/**
 * @file
 * reviews_and_ficrep.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function reviews_and_ficrep_taxonomy_default_vocabularies() {
  return array(
    'body' => array(
      'name' => 'Body',
      'machine_name' => 'body',
      'description' => 'Descriptors of the body',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'characters' => array(
      'name' => 'Characters',
      'machine_name' => 'characters',
      'description' => 'The character(s) depicted',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'color' => array(
      'name' => 'Color',
      'machine_name' => 'color',
      'description' => 'The color(s) of the image',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'conflict' => array(
      'name' => 'Conflict',
      'machine_name' => 'conflict',
      'description' => 'The conflict depicted',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'font' => array(
      'name' => 'Font',
      'machine_name' => 'font',
      'description' => 'The font of the image',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'media_type' => array(
      'name' => 'Media type',
      'machine_name' => 'media_type',
      'description' => 'For the "Media item" content type. Defines the basic Genres that are allowed here',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'music_album' => array(
      'name' => 'Music Album',
      'machine_name' => 'music_album',
      'description' => 'Tags sourced from OpenCalais about Music Album.',
      'hierarchy' => 0,
      'module' => 'opencalais',
      'weight' => 7,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'music_group' => array(
      'name' => 'Music Group',
      'machine_name' => 'music_group',
      'description' => 'Tags sourced from OpenCalais about Music Group.',
      'hierarchy' => 0,
      'module' => 'opencalais',
      'weight' => 8,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'nines_discipline' => array(
      'name' => 'NINES Discipline',
      'machine_name' => 'nines_discipline',
      'description' => 'information about the disciplines that may be interested in the object, for NINES RDF export',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'nines_genre' => array(
      'name' => 'NINES Genre',
      'machine_name' => 'nines_genre',
      'description' => 'Each object is required to have at least one valid genre, for NINES RDF export',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'nines_type' => array(
      'name' => 'NINES Type',
      'machine_name' => 'nines_type',
      'description' => 'adapted from the DCMI list of types, this term should describe the medium, or format of the object for NINES RDF export',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'organization' => array(
      'name' => 'Organization',
      'machine_name' => 'organization',
      'description' => 'Tags sourced from OpenCalais about Organization.',
      'hierarchy' => 0,
      'module' => 'opencalais',
      'weight' => 10,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'person' => array(
      'name' => 'Person',
      'machine_name' => 'person',
      'description' => 'Tags sourced from OpenCalais about Person.',
      'hierarchy' => 0,
      'module' => 'opencalais',
      'weight' => -6,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'receptions_topic' => array(
      'name' => 'Receptions Topic',
      'machine_name' => 'receptions_topic',
      'description' => 'topics for the Romantic Receptions pieces',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'review_type' => array(
      'name' => 'Review Type',
      'machine_name' => 'review_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'setting' => array(
      'name' => 'Setting',
      'machine_name' => 'setting',
      'description' => 'The setting of the image',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'vocabulary_3' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_3',
      'description' => 'Tags for all of Romantic Circles Pages (i.e. not Blog entries or Stories)',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -5,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'vocabulary_52' => array(
      'name' => 'Resource (Taxonomy)',
      'machine_name' => 'vocabulary_52',
      'description' => 'The major sections of the site as a taxonomy vocabulary. ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'vocabulary_61' => array(
      'name' => 'Reviews Blog Categories',
      'machine_name' => 'vocabulary_61',
      'description' => 'Categories for the Reviews Blog',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'vocabulary_64' => array(
      'name' => 'Reviews Blog Tags',
      'machine_name' => 'vocabulary_64',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
