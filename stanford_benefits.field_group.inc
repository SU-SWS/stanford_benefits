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
  $field_group->identifier = 'group_basics|node|benefit|default';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_su_benefit_description',
      2 => 'field_su_care_management',
      3 => 'field_su_coinsurance',
      4 => 'field_su_deductible',
      5 => 'field_su_full_time_emp_cont',
      6 => 'field_su_office_co_pay',
      7 => 'field_su_out_of_pocket_max',
      8 => 'field_su_overall_lifetime_max',
      9 => 'field_su_pre_auth_require',
      10 => 'field_su_pt_employee_contrib',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basics field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_basics|node|benefit|default'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_su_benefit_description',
      2 => 'field_su_care_management',
      3 => 'field_su_coinsurance',
      4 => 'field_su_deductible',
      5 => 'field_su_full_time_emp_cont',
      6 => 'field_su_office_co_pay',
      7 => 'field_su_out_of_pocket_max',
      8 => 'field_su_overall_lifetime_max',
      9 => 'field_su_pre_auth_require',
      10 => 'field_su_pt_employee_contrib',
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
  $field_groups['group_basics|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|dental_benefit|default';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '0',
    'children' => array(
      0 => 'field_su_annual_maximum',
      1 => 'field_su_coinsurance',
      2 => 'field_su_deductible',
      3 => 'field_su_full_time_emp_cont',
      4 => 'field_su_lifetime_maximum',
      5 => 'field_su_overview',
      6 => 'field_su_pt_employee_contrib',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-basics field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_basics|node|dental_benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|dental_benefit|form';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '3',
    'children' => array(
      0 => 'field_su_annual_maximum',
      1 => 'field_su_coinsurance',
      2 => 'field_su_deductible',
      3 => 'field_su_full_time_emp_cont',
      4 => 'field_su_lifetime_maximum',
      5 => 'field_su_overview',
      6 => 'field_su_pt_employee_contrib',
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
  $field_groups['group_basics|node|dental_benefit|form'] = $field_group;

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
    'label' => 'Ratings',
    'weight' => '1',
    'children' => array(
      0 => 'field_su_access_serv',
      1 => 'field_su_getting_better',
      2 => 'field_su_living_with_illness',
      3 => 'field_su_overall_accred_status',
      4 => 'field_su_qualified_providers',
      5 => 'field_su_staying_healthy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ratings',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-criteria field-group-fieldset',
        'description' => 'National Committee For Quality Assurance (NCQA)<br>Up to four stars are given for each of the following criteria:',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_criteria|node|benefit|default'] = $field_group;

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
      0 => 'field_su_access_serv',
      1 => 'field_su_getting_better',
      2 => 'field_su_living_with_illness',
      3 => 'field_su_qualified_providers',
      4 => 'field_su_staying_healthy',
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
  $field_groups['group_criteria|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_maternity|node|benefit|default';
  $field_group->group_name = 'group_maternity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Maternity',
    'weight' => '3',
    'children' => array(
      0 => 'field_su_babys_first_exam',
      1 => 'field_su_birthing_centers',
      2 => 'field_su_doctor_delivery_charge',
      3 => 'field_su_maternity_hosp_stay',
      4 => 'field_su_midwives',
      5 => 'field_su_pregnancy_termination',
      6 => 'field_su_prenatal_visits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-maternity field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_maternity|node|benefit|default'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_su_babys_first_exam',
      1 => 'field_su_birthing_centers',
      2 => 'field_su_doctor_delivery_charge',
      3 => 'field_su_maternity_hosp_stay',
      4 => 'field_su_midwives',
      5 => 'field_su_pregnancy_termination',
      6 => 'field_su_prenatal_visits',
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
  $field_groups['group_maternity|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mental_health|node|benefit|default';
  $field_group->group_name = 'group_mental_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mental Health/Substance Abuse',
    'weight' => '4',
    'children' => array(
      0 => 'field_su_autism',
      1 => 'field_su_mental_health',
      2 => 'field_su_substance_abuse',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mental-health field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_mental_health|node|benefit|default'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_su_autism',
      1 => 'field_su_mental_health',
      2 => 'field_su_substance_abuse',
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
  $field_groups['group_mental_health|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orthodontic_services|node|dental_benefit|default';
  $field_group->group_name = 'group_orthodontic_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Orthodontic Services',
    'weight' => '2',
    'children' => array(
      0 => 'field_su_orthodontia',
      1 => 'field_su_retainers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-orthodontic-services field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_orthodontic_services|node|dental_benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orthodontic_services|node|dental_benefit|form';
  $field_group->group_name = 'group_orthodontic_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Orthodontic Services',
    'weight' => '5',
    'children' => array(
      0 => 'field_su_orthodontia',
      1 => 'field_su_retainers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Orthodontic Services',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-orthodontic-services field-group-fieldset',
        'description' => 'Enter the Orthodontic Services information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_orthodontic_services|node|dental_benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_serv_a_d|node|benefit|default';
  $field_group->group_name = 'group_other_serv_a_d';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (A-D)',
    'weight' => '5',
    'children' => array(
      0 => 'field_su_acupuncture',
      1 => 'field_su_allergy_tests',
      2 => 'field_su_allergy_treatment',
      3 => 'field_su_ambulance_charges',
      4 => 'field_su_cat_scans',
      5 => 'field_su_chiropractors',
      6 => 'field_su_christian_science',
      7 => 'field_su_cosmetic_surgery',
      8 => 'field_su_dental_treatment',
      9 => 'field_su_alternative_medicine',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-serv-a-d field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_serv_a_d|node|benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_serv_e_n|node|benefit|default';
  $field_group->group_name = 'group_other_serv_e_n';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (E-N)',
    'weight' => '6',
    'children' => array(
      0 => 'field_su_durable_medical_equip',
      1 => 'field_su_emergency_room',
      2 => 'field_su_hearing_care',
      3 => 'field_su_home_health_care',
      4 => 'field_su_hospice_care',
      5 => 'field_su_hospital_stay',
      6 => 'field_su_infertility_treatment',
      7 => 'field_su_laboratory_charges',
      8 => 'field_su_mri',
      9 => 'field_su_urgent_care',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-serv-e-n field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_serv_e_n|node|benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_serv_o_z|node|benefit|default';
  $field_group->group_name = 'group_other_serv_o_z';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (O-Z)',
    'weight' => '7',
    'children' => array(
      0 => 'field_su_occupational_therapy',
      1 => 'field_su_organ_transplants',
      2 => 'field_su_physical_therapy',
      3 => 'field_su_skilled_nursing',
      4 => 'field_su_speech_therapy',
      5 => 'field_su_surg_facility_charges',
      6 => 'field_su_surg_physician_serv',
      7 => 'field_su_tubal_ligation',
      8 => 'field_su_vasectomy',
      9 => 'field_su_x_rays',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-serv-o-z field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_serv_o_z|node|benefit|default'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'field_su_acupuncture',
      1 => 'field_su_allergy_tests',
      2 => 'field_su_allergy_treatment',
      3 => 'field_su_ambulance_charges',
      4 => 'field_su_cat_scans',
      5 => 'field_su_chiropractors',
      6 => 'field_su_christian_science',
      7 => 'field_su_cosmetic_surgery',
      8 => 'field_su_dental_treatment',
      9 => 'field_su_alternative_medicine',
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
  $field_groups['group_other_services_a_d|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_a_e|node|dental_benefit|default';
  $field_group->group_name = 'group_other_services_a_e';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (A-E)',
    'weight' => '3',
    'children' => array(
      0 => 'field_su_anesthesia',
      1 => 'field_su_bridges',
      2 => 'field_su_crown',
      3 => 'field_su_dentures',
      4 => 'field_su_extractions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-services-a-e field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_services_a_e|node|dental_benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_a_e|node|dental_benefit|form';
  $field_group->group_name = 'group_other_services_a_e';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (A-E)',
    'weight' => '6',
    'children' => array(
      0 => 'field_su_anesthesia',
      1 => 'field_su_bridges',
      2 => 'field_su_crown',
      3 => 'field_su_dentures',
      4 => 'field_su_extractions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Services (A-E)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-services-a-e field-group-fieldset',
        'description' => 'Enter the Other Services (A-E) information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_services_a_e|node|dental_benefit|form'] = $field_group;

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
    'weight' => '8',
    'children' => array(
      0 => 'field_su_durable_medical_equip',
      1 => 'field_su_emergency_room',
      2 => 'field_su_hearing_care',
      3 => 'field_su_home_health_care',
      4 => 'field_su_hospice_care',
      5 => 'field_su_hospital_stay',
      6 => 'field_su_infertility_treatment',
      7 => 'field_su_laboratory_charges',
      8 => 'field_su_mri',
      9 => 'field_su_urgent_care',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Services (E-N)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-services-e-n field-group-fieldset',
        'description' => 'Enter the Other Services (E-N) information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_services_e_n|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_f_o|node|dental_benefit|default';
  $field_group->group_name = 'group_other_services_f_o';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (F-O)',
    'weight' => '4',
    'children' => array(
      0 => 'field_su_fillings',
      1 => 'field_su_gingivectomy',
      2 => 'field_su_gold_restorations',
      3 => 'field_su_implants',
      4 => 'field_su_inlays',
      5 => 'field_su_onlays',
      6 => 'field_su_oral_surgery',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-services-f-o field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_services_f_o|node|dental_benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_f_o|node|dental_benefit|form';
  $field_group->group_name = 'group_other_services_f_o';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (F-O)',
    'weight' => '7',
    'children' => array(
      0 => 'field_su_fillings',
      1 => 'field_su_gingivectomy',
      2 => 'field_su_gold_restorations',
      3 => 'field_su_implants',
      4 => 'field_su_inlays',
      5 => 'field_su_onlays',
      6 => 'field_su_oral_surgery',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Services (F-O)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-services-f-o field-group-fieldset',
        'description' => 'Enter the Other Services (F-O) information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_services_f_o|node|dental_benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_o_z|node|benefit|form';
  $field_group->group_name = 'group_other_services_o_z';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (O-Z)',
    'weight' => '9',
    'children' => array(
      0 => 'field_su_occupational_therapy',
      1 => 'field_su_organ_transplants',
      2 => 'field_su_physical_therapy',
      3 => 'field_su_skilled_nursing',
      4 => 'field_su_speech_therapy',
      5 => 'field_su_surg_facility_charges',
      6 => 'field_su_surg_physician_serv',
      7 => 'field_su_tubal_ligation',
      8 => 'field_su_vasectomy',
      9 => 'field_su_vision_care',
      10 => 'field_su_x_rays',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Services (O-Z)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-services-o-z field-group-fieldset',
        'description' => 'Enter the Other Services (O-Z) information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_services_o_z|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_p_z|node|dental_benefit|default';
  $field_group->group_name = 'group_other_services_p_z';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (P-Z)',
    'weight' => '5',
    'children' => array(
      0 => 'field_su_periodontal_surgery',
      1 => 'field_su_prescription_drugs',
      2 => 'field_su_root_canals',
      3 => 'field_su_space_maintainers',
      4 => 'field_su_splinting',
      5 => 'field_su_tmj',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-services-p-z field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_services_p_z|node|dental_benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_services_p_z|node|dental_benefit|form';
  $field_group->group_name = 'group_other_services_p_z';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (P-Z)',
    'weight' => '9',
    'children' => array(
      0 => 'field_su_periodontal_surgery',
      1 => 'field_su_prescription_drugs',
      2 => 'field_su_root_canals',
      3 => 'field_su_space_maintainers',
      4 => 'field_su_splinting',
      5 => 'field_su_tmj',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Services (P-Z)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-services-p-z field-group-fieldset',
        'description' => 'Enter the Other Services (P-Z) information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_services_p_z|node|dental_benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_drugs|node|benefit|default';
  $field_group->group_name = 'group_prescription_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prescription Drugs',
    'weight' => '8',
    'children' => array(
      0 => 'field_su_birth_control_pills',
      1 => 'field_su_mail_order_drug_prog',
      2 => 'field_su_pharmacy_retail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prescription-drugs field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prescription_drugs|node|benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_drugs|node|benefit|form';
  $field_group->group_name = 'group_prescription_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prescription Drugs',
    'weight' => '10',
    'children' => array(
      0 => 'field_su_birth_control_pills',
      1 => 'field_su_mail_order_drug_prog',
      2 => 'field_su_pharmacy_retail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Prescription Drugs',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-prescription-drugs field-group-fieldset',
        'description' => 'Enter the Prescription Drugs information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_prescription_drugs|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preventive_care|node|benefit|default';
  $field_group->group_name = 'group_preventive_care';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preventive Care',
    'weight' => '9',
    'children' => array(
      0 => 'field_su_immunizations',
      1 => 'field_su_mammograms',
      2 => 'field_su_pap_smears',
      3 => 'field_su_pe_for_children',
      4 => 'field_su_phy_exams_for_adults',
      5 => 'field_su_prostate_specific',
      6 => 'field_su_vision_care',
      7 => 'field_su_well_woman_visits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-preventive-care field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_preventive_care|node|benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preventive_care|node|benefit|form';
  $field_group->group_name = 'group_preventive_care';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preventive Care',
    'weight' => '12',
    'children' => array(
      0 => 'field_su_immunizations',
      1 => 'field_su_mammograms',
      2 => 'field_su_pap_smears',
      3 => 'field_su_pe_for_children',
      4 => 'field_su_phy_exams_for_adults',
      5 => 'field_su_prostate_specific',
      6 => 'field_su_well_woman_visits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Preventive Care',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-preventive-care field-group-fieldset',
        'description' => 'Enter the Preventive Care information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_preventive_care|node|benefit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preventive_care|node|dental_benefit|default';
  $field_group->group_name = 'group_preventive_care';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preventive Type of Care	',
    'weight' => '1',
    'children' => array(
      0 => 'field_su_cleanings',
      1 => 'field_su_d_x_rays',
      2 => 'field_su_fluoride_treatments',
      3 => 'field_su_routine_exams',
      4 => 'field_su_sealants',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-preventive-care field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_preventive_care|node|dental_benefit|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preventive_car|node|dental_benefit|form';
  $field_group->group_name = 'group_preventive_car';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dental_benefit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preventive Type of Care',
    'weight' => '4',
    'children' => array(
      0 => 'field_su_cleanings',
      1 => 'field_su_d_x_rays',
      2 => 'field_su_fluoride_treatments',
      3 => 'field_su_routine_exams',
      4 => 'field_su_sealants',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Preventive Type of Care',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-preventive-car field-group-fieldset',
        'description' => 'Enter the Preventive Type of Care information for the benefit.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_preventive_car|node|dental_benefit|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_su_overall_accred_status',
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
  $field_groups['group_ratings|node|benefit|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basics');
  t('Criteria');
  t('Maternity');
  t('Mental Health/Substance Abuse');
  t('Orthodontic Services');
  t('Other Services (A-D)');
  t('Other Services (A-E)');
  t('Other Services (E-N)');
  t('Other Services (F-O)');
  t('Other Services (O-Z)');
  t('Other Services (P-Z)');
  t('Prescription Drugs');
  t('Preventive Care');
  t('Preventive Type of Care');
  t('Preventive Type of Care	');
  t('Ratings');
  t('Ratings - National Committee For Quality Assurance (NCQA)');

  return $field_groups;
}
