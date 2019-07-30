<?php
/**
 * @file
 * stanford_benefits.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_benefits_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'caw_benefit_comparison_tool';
  $view->description = 'This view is used to create the form to compare benefit plans for employees.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CAW Benefit Comparison Tool';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CAW Benefit Comparison Tool';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'stanford_view_card';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'stanford_view_card';
  /* Relationship: Content: Benefit Type (field_benefit_type) */
  $handler->display->display_options['relationships']['field_benefit_type_tid']['id'] = 'field_benefit_type_tid';
  $handler->display->display_options['relationships']['field_benefit_type_tid']['table'] = 'field_data_field_benefit_type';
  $handler->display->display_options['relationships']['field_benefit_type_tid']['field'] = 'field_benefit_type_tid';
  $handler->display->display_options['relationships']['field_benefit_type_tid']['required'] = TRUE;
  /* Field: Content: Benefit Type */
  $handler->display->display_options['fields']['field_benefit_type']['id'] = 'field_benefit_type';
  $handler->display->display_options['fields']['field_benefit_type']['table'] = 'field_data_field_benefit_type';
  $handler->display->display_options['fields']['field_benefit_type']['field'] = 'field_benefit_type';
  $handler->display->display_options['fields']['field_benefit_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_benefit_type']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_benefit_type']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_benefit_type']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_s_benefit_description']['id'] = 'field_s_benefit_description';
  $handler->display->display_options['fields']['field_s_benefit_description']['table'] = 'field_data_field_s_benefit_description';
  $handler->display->display_options['fields']['field_s_benefit_description']['field'] = 'field_s_benefit_description';
  $handler->display->display_options['fields']['field_s_benefit_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_benefit_description']['element_label_colon'] = FALSE;
  /* Field: Content: Full-Time Employee * Contribution Per Pay Period */
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['id'] = 'field_full_time_employee_contrib';
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['table'] = 'field_data_field_full_time_employee_contrib';
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['field'] = 'field_full_time_employee_contrib';
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['field_full_time_employee_contrib']['element_type'] = 'div';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'benefit' => 'benefit',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Benefit type';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['description'] = 'Select the benefit type to compare.';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    17 => 0,
    13 => 0,
    15 => 0,
    18 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Compare plans';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $translatables['caw_benefit_comparison_tool'] = array(
    t('Master'),
    t('CAW Benefit Comparison Tool'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_benefit_type'),
    t('Benefit Type'),
    t('Description'),
    t('Full-Time Employee * Contribution Per Pay Period'),
    t('Benefit type'),
    t('Select the benefit type to compare.'),
    t('Block'),
    t('Compare plans'),
  );
  $export['caw_benefit_comparison_tool'] = $view;

  return $export;
}
