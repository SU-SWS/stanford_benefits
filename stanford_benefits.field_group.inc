<?php
/**
 * @file
 * stanford_benefits.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_benefits_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|benefit|form';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_s_benefit_description',
      2 => 'field_full_time_employee_contrib',
      3 => 'field_part_time_employee_contrib',
      4 => 'field_pre_authorization_require',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-basics field-group-fieldset',
        'description' => 'Enter the basic information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_criteria|node|benefit|default';
  $field_group->group_name = 'group_criteria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Criteria',
    'weight' => '2',
    'children' => array(
      0 => 'field_access_services',
      1 => 'field_qualified_providers',
      2 => 'field_staying_healthy',
      3 => 'field_getting_better',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Criteria',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-criteria field-group-fieldset',
        'description' => 'Up to four stars are given for each of the following criteria:',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_criteria|node|benefit|form';
  $field_group->group_name = 'group_criteria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ratings';
  $field_group->data = array(
    'label' => 'Criteria',
    'weight' => '13',
    'children' => array(
      0 => 'field_access_services',
      1 => 'field_qualified_providers',
      2 => 'field_staying_healthy',
      3 => 'field_getting_better',
      4 => 'field_living_with_illness',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Criteria',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Up to four stars are given for each of the following criteria.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ratings|node|benefit|form';
  $field_group->group_name = 'group_ratings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ratings - National Committee For Quality Assurance (NCQA)',
    'weight' => '2',
    'children' => array(
      0 => 'field_overall_accredition_status',
      1 => 'group_criteria',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ratings - National Committee For Quality Assurance (NCQA)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Health Plan Report Card.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basics');
  t('Criteria');
  t('Ratings - National Committee For Quality Assurance (NCQA)');

  return $field_groups;
}
