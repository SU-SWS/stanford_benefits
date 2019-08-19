<?php
/**
 * @file
 * stanford_benefits.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_benefits_taxonomy_default_vocabularies() {
  return array(
    'benefit_plan_type' => array(
      'name' => 'Benefit Plan Type',
      'machine_name' => 'benefit_plan_type',
      'description' => 'The benefit plan type type for the benefit.',
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
