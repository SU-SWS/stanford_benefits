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
    'weight' => '1',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basics field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

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
    'label' => 'Ratings - National Committee For Quality Assurance (NCQA)',
    'weight' => '0',
    'children' => array(
      0 => 'field_overall_accredition_status',
      1 => 'field_access_services',
      2 => 'field_qualified_providers',
      3 => 'field_staying_healthy',
      4 => 'field_getting_better',
      5 => 'field_living_with_illness',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ratings - National Committee For Quality Assurance (NCQA)',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-criteria field-group-fieldset',
        'description' => 'Up to four stars are given for each of the following criteria:',
      ),
      'formatter' => 'collapsible',
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
  $field_group->identifier = 'group_maternity|node|benefit|default';
  $field_group->group_name = 'group_maternity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Maternity',
    'weight' => '2',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-maternity field-group-fieldset',
        'id' => '',
      ),
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
    'weight' => '5',
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
  $field_group->identifier = 'group_mental_health|node|benefit|default';
  $field_group->group_name = 'group_mental_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mental Health/Substance Abuse',
    'weight' => '3',
    'children' => array(
      0 => 'field_mental_health',
      1 => 'field_autism',
      2 => 'field_substance_abuse',
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
    'weight' => '6',
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
  $field_group->identifier = 'group_other_serv_a_d|node|benefit|default';
  $field_group->group_name = 'group_other_serv_a_d';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Services (A-D)',
    'weight' => '4',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-serv-a-d field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_emergency_room',
      1 => 'field_urgent_care',
      2 => 'field_hearing_care',
      3 => 'field_home_health_care',
      4 => 'field_hospice_care',
      5 => 'field_hospital_stay',
      6 => 'field_infertility_treatment',
      7 => 'field_laboratory_charges',
      8 => 'field_s_mri',
      9 => 'field_durable_medical_equip',
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
  $field_groups[''] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_occupational_therapy',
      1 => 'field_organ_transplants',
      2 => 'field_skilled_nursing',
      3 => 'field_physical_therapy',
      4 => 'field_surgery_physician_services',
      5 => 'field_surgery_facility_charges',
      6 => 'field_speech_therapy',
      7 => 'field_tubal_ligation',
      8 => 'field_vasectomy',
      9 => 'field_vision_care',
      10 => 'field_x_rays',
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
    'weight' => '7',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_emergency_room',
      1 => 'field_urgent_care',
      2 => 'field_hearing_care',
      3 => 'field_home_health_care',
      4 => 'field_hospice_care',
      5 => 'field_hospital_stay',
      6 => 'field_infertility_treatment',
      7 => 'field_laboratory_charges',
      8 => 'field_s_mri',
      9 => 'field_durable_medical_equip',
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
  $field_groups[''] = $field_group;

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
      0 => 'field_occupational_therapy',
      1 => 'field_organ_transplants',
      2 => 'field_skilled_nursing',
      3 => 'field_physical_therapy',
      4 => 'field_surgery_physician_services',
      5 => 'field_surgery_facility_charges',
      6 => 'field_speech_therapy',
      7 => 'field_tubal_ligation',
      8 => 'field_vasectomy',
      9 => 'field_vision_care',
      10 => 'field_x_rays',
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
  $field_groups[''] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'field_pharmacy_retail',
      1 => 'field_mail_order_drug_program',
      2 => 'field_birth_control_pills',
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
  $field_groups[''] = $field_group;

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
      0 => 'field_pharmacy_retail',
      1 => 'field_mail_order_drug_program',
      2 => 'field_birth_control_pills',
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
  $field_groups[''] = $field_group;

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
    'weight' => '8',
    'children' => array(
      0 => 'field_physical_exams_for_adults',
      1 => 'field_pe_for_children',
      2 => 'field_pap_smears',
      3 => 'field_mammograms',
      4 => 'field_immunizations',
      5 => 'field_prostate_specific',
      6 => 'field_well_woman_visits',
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
  $field_groups[''] = $field_group;

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
    'weight' => '11',
    'children' => array(
      0 => 'field_physical_exams_for_adults',
      1 => 'field_pe_for_children',
      2 => 'field_pap_smears',
      3 => 'field_mammograms',
      4 => 'field_immunizations',
      5 => 'field_prostate_specific',
      6 => 'field_well_woman_visits',
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
    'weight' => '3',
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
  t('Other Services (O-Z)');
  t('Prescription Drugs');
  t('Preventive Care');
  t('Ratings - National Committee For Quality Assurance (NCQA)');

  return $field_groups;
}
