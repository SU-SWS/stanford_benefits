<?php
/**
 * @file
 * stanford_benefits.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_benefits_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_access_services'.
  $field_bases['field_access_services'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_access_services',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 4,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  // Exported field_base: 'field_employee_type'.
  $field_bases['field_employee_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_employee_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Active employees' => 'Active employees',
        'Early retirees under 65' => 'Early retirees under 65',
        'Retirees' => 'Retirees',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_full_time_employee_contrib'.
  $field_bases['field_full_time_employee_contrib'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_full_time_employee_contrib',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_getting_better'.
  $field_bases['field_getting_better'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_getting_better',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 4,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  // Exported field_base: 'field_living_with_illness'.
  $field_bases['field_living_with_illness'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_living_with_illness',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 4,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  // Exported field_base: 'field_overall_accredition_status'.
  $field_bases['field_overall_accredition_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_overall_accredition_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not reported by NCQA' => 'Not reported by NCQA',
        'Accredited' => 'Accredited',
        'Commendable' => 'Commendable',
        'Excellent' => 'Excellent',
        'Interim' => 'Interim',
        'Scheduled' => 'Scheduled',
        'In Process' => 'In Process',
        'Provisional' => 'Provisional',
        'Expired' => 'Expired',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_part_time_employee_contrib'.
  $field_bases['field_part_time_employee_contrib'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_part_time_employee_contrib',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_pre_authorization_require'.
  $field_bases['field_pre_authorization_require'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pre_authorization_require',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_qualified_providers'.
  $field_bases['field_qualified_providers'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_qualified_providers',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 4,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  // Exported field_base: 'field_s_benefit_description'.
  $field_bases['field_s_benefit_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_benefit_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 256,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_staying_healthy'.
  $field_bases['field_staying_healthy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_staying_healthy',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 4,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  return $field_bases;
}
