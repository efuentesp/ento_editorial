<?php
/**
 * @file
 * ento_editorial.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ento_editorial_taxonomy_default_vocabularies() {
  return array(
    'materias_educativas' => array(
      'name' => 'Materias Educativas',
      'machine_name' => 'materias_educativas',
      'description' => 'Materias que imparte un Docente.',
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
    'niveles_educativos' => array(
      'name' => 'Niveles Educativos',
      'machine_name' => 'niveles_educativos',
      'description' => 'Clasificación de los Niveles Educativos en las Escuelas.',
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
  );
}
