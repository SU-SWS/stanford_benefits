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
      5 => 'field_care_management',
      6 => 'field_deductible',
      7 => 'field_office_co_pay',
      8 => 'field_coinsurance',
      9 => 'field_out_of_pocket_maximum',
      10 => 'field_overall_lifetime_maximum',
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
  $field_group->identifier = 'group_maternity|node|benefit|form';
  $field_group->group_name = 'group_maternity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Maternity',
    'weight' => '4',
    'children' => array(
      0 => 'field_maternity_hospital_stay',
      1 => 'field_babys_first_exam',
      2 => 'field_birthing_centers',
      3 => 'field_midwives',
      4 => 'field_prenatal_visits',
      5 => 'field_doctor_delivery_charge',
      6 => 'field_pregnancy_termination',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Maternity',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-maternity field-group-fieldset',
        'description' => 'Enter the maternity information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mental_health|node|benefit|form';
  $field_group->group_name = 'group_mental_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mental Health/Substance Abuse',
    'weight' => '5',
    'children' => array(
      0 => 'field_mental_health',
      1 => 'field_autism',
      2 => 'field_substance_abuse',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mental Health/Substance Abuse',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mental-health field-group-fieldset',
        'description' => 'Enter the Mental Health/Substance Abuse information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_a_d|node|benefit|form';
  $field_group->group_name = 'group_other_services_a_d';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (A-D)',
    'weight' => '6',
    'children' => array(
      0 => 'field_acupuncture',
      1 => 'field_allergy_tests',
      2 => 'field_allergy_treatment',
      3 => 'field_ambulance_charges',
      4 => 'field_cat_scans',
      5 => 'field_chiropractors',
      6 => 'field_christian_science',
      7 => 'field_cosmetic_surgery',
      8 => 'field_dental_treatment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Services (A-D)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-services-a-d field-group-fieldset',
        'description' => 'Enter the Other Services (A-D) information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_e_n|node|benefit|form';
  $field_group->group_name = 'group_other_services_e_n';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (E-N)',
    'weight' => '7',
    'children' => array(
      0 => 'field_emergency_room',
      1 => 'field_urgent_care',
      2 => 'field_hearing_care',
      3 => 'field_home_health_care',
      4 => 'field_hospice_care',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-services-e-n field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
  t('Maternity');
  t('Mental Health/Substance Abuse');
  t('Other Services (A-D)');
  t('Other Services (E-N)');
  t('Ratings - National Committee For Quality Assurance (NCQA)');

  return $field_groups;
}
