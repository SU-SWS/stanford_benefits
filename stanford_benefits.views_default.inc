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
  $handler->display->display_options['css_class'] = 'block';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Compare plans';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 1,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any plan and click on Compare plans to see results',
          'format' => 'content_editor_text_format',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'tid_1' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'tid_2' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'stanford_view_card';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'stanford_view_card';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Tool Header';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="plan-rates-title">[field_su_plan_year] Plans & Contribution Rates</h2><br><br>
<div id="medical-plan-header">
<h2 class="medical-plans-title">Medical Plans</h2>
<p>Compare medical plans available for each of these roles:</p>
</div>
<div id="dental-plan-header">
<h2 class="dental-plans-title">Dental Plans</h2>
<p>Compare dental plans available for each of these roles:</p>
</div>
<div class="vision-plan-wrapper">
<h2>Vision Plan</h2>
<p>Compare vision plans available for each of these roles:</p>
<ul>
  <li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/vision-plan-[field_su_plan_year]" name="compare_active" target="_parent" class="more-link" id="compare_active" rel="external">Active Employees</a></li>
<li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/retirees/retiree-vision-plan-[field_su_plan_year]" class="more-link" target="_parent" rel="external">Retirees</a></li>
 </ul>
</div>
<div class="full-plan-costs-wrapper">
<h2>Full Plan Costs</h2>
<p>Compare the premium costs for each of these roles:</p>
<h3 class="no-spacing">Active Employees</h3>
<ul>
  <li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/change-your-benefits/open-enrollment/[field_su_plan_year]-employee-rates" name="compare_active" target="_parent" class="more-link" id="compare_active" rel="external">Review contribution charts</a>
  </li>
</ul>
<h3 class="spacing">Retirees</h3>
<ul>
  <li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/change-your-benefits/open-enrollment/[field_su_plan_year]-retiree-rates" name="compare_ret" target="_parent" class="more-link" id="compare_ret" rel="external">Review contribution charts</a></li>
</ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<b>You can scroll in the results box to see all the benefit categories available.</b>';
  $handler->display->display_options['footer']['area']['format'] = 'content_editor_text_format';
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
  /* Field: Content: Benefit Type */
  $handler->display->display_options['fields']['field_su_benefit_type']['id'] = 'field_su_benefit_type';
  $handler->display->display_options['fields']['field_su_benefit_type']['table'] = 'field_data_field_su_benefit_type';
  $handler->display->display_options['fields']['field_su_benefit_type']['field'] = 'field_su_benefit_type';
  $handler->display->display_options['fields']['field_su_benefit_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_su_benefit_type']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_su_benefit_type']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_su_benefit_type']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_su_benefit_description']['id'] = 'field_su_benefit_description';
  $handler->display->display_options['fields']['field_su_benefit_description']['table'] = 'field_data_field_su_benefit_description';
  $handler->display->display_options['fields']['field_su_benefit_description']['field'] = 'field_su_benefit_description';
  $handler->display->display_options['fields']['field_su_benefit_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_su_benefit_description']['element_label_colon'] = FALSE;
  /* Field: Content: Full-Time Employee * Contribution Per Pay Period */
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['id'] = 'field_su_full_time_emp_cont';
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['table'] = 'field_data_field_su_full_time_emp_cont';
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['field'] = 'field_su_full_time_emp_cont';
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['field_su_full_time_emp_cont']['element_type'] = 'div';
  /* Field: Content: Plan Year */
  $handler->display->display_options['fields']['field_su_plan_year']['id'] = 'field_su_plan_year';
  $handler->display->display_options['fields']['field_su_plan_year']['table'] = 'field_data_field_su_plan_year';
  $handler->display->display_options['fields']['field_su_plan_year']['field'] = 'field_su_plan_year';
  $handler->display->display_options['fields']['field_su_plan_year']['label'] = '';
  $handler->display->display_options['fields']['field_su_plan_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_su_plan_year']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
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
    'dental_benefit' => 'dental_benefit',
    'benefit' => 'benefit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Medical/Active benefit plan selection */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['ui_name'] = 'Medical/Active benefit plan selection';
  $handler->display->display_options['filters']['tid']['value'] = array(
    967 => '967',
    968 => '968',
    969 => '969',
    970 => '970',
    971 => '971',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'SELECT THE PLAN(S) TO COMPARE:';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Medical/Pre-retiree benefit plan selection */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['ui_name'] = 'Medical/Pre-retiree benefit plan selection';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    973 => '973',
    974 => '974',
    975 => '975',
    976 => '976',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'SELECT THE PLAN(S) TO COMPARE:';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['group_info']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid_1']['group_info']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['tid_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['tid_1']['hierarchy'] = 1;
  /* Filter criterion: Medical/Retiree benefit plan selection */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['ui_name'] = 'Medical/Retiree benefit plan selection';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    979 => '979',
    980 => '980',
    982 => '982',
    983 => '983',
  );
  $handler->display->display_options['filters']['tid_2']['group'] = 1;
  $handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['label'] = 'SELECT THE PLAN(S) TO COMPARE:';
  $handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_2']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['tid_2']['hierarchy'] = 1;
  /* Filter criterion: Dental/Active benefit plan selection */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'Dental/Active benefit plan selection';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    975 => '975',
    976 => '976',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Active employees ';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['description'] = 'Active employees may select one of two offered dental plans.';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_dental_active_benefit';
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
  /* Filter criterion: Content: Plan Year (field_su_plan_year) */
  $handler->display->display_options['filters']['field_su_plan_year_value']['id'] = 'field_su_plan_year_value';
  $handler->display->display_options['filters']['field_su_plan_year_value']['table'] = 'field_data_field_su_plan_year';
  $handler->display->display_options['filters']['field_su_plan_year_value']['field'] = 'field_su_plan_year_value';
  $handler->display->display_options['filters']['field_su_plan_year_value']['value'] = array(
    2019 => '2019',
  );

  /* Display: Benefit Comparison Tool */
  $handler = $view->new_display('block', 'Benefit Comparison Tool', 'caw_benefit_comparison_tool_block');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Compare plans';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 1,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any plan and click on Compare plans to see results',
          'format' => 'content_editor_text_format',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_1' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_2' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_3' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_4' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_su_plan_year_value' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'dental_benefit' => 'dental_benefit',
    'benefit' => 'benefit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Plan Year (field_su_plan_year) */
  $handler->display->display_options['filters']['field_su_plan_year_value']['id'] = 'field_su_plan_year_value';
  $handler->display->display_options['filters']['field_su_plan_year_value']['table'] = 'field_data_field_su_plan_year';
  $handler->display->display_options['filters']['field_su_plan_year_value']['field'] = 'field_su_plan_year_value';
  $handler->display->display_options['filters']['field_su_plan_year_value']['value'] = array(
    2019 => '2019',
    2020 => '2020',
  );
  $handler->display->display_options['filters']['field_su_plan_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_su_plan_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['operator_id'] = 'field_su_plan_year_value_op';
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['label'] = 'Please select a benefit plan year.';
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['operator'] = 'field_su_plan_year_value_op';
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['identifier'] = 'field_su_plan_year_value';
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_su_plan_year_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Medical/Active benefit plan selection */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'Medical/Active benefit plan selection';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    1019 => '1019',
    1020 => '1020',
    1021 => '1021',
    1044 => '1044',
    1022 => '1022',
    1023 => '1023',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Active Employees';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['description'] = 'SELECT THE PLAN(S) TO COMPARE:';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_medical_active_benefit';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
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
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: Medical/Pre-Retirees benefit plan selection */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['ui_name'] = 'Medical/Pre-Retirees benefit plan selection';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['value'] = array(
    1025 => '1025',
    1026 => '1026',
    1028 => '1028',
    1045 => '1045',
    1027 => '1027',
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Early retirees under 65';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['description'] = 'SELECT THE PLAN(S) TO COMPARE:';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_medical_preretirees_benefit';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '1';
  /* Filter criterion: Medical/Retirees benefit plan selection */
  $handler->display->display_options['filters']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['ui_name'] = 'Medical/Retirees benefit plan selection';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['value'] = array(
    1031 => '1031',
    1034 => '1034',
    1035 => '1035',
    1032 => '1032',
  );
  $handler->display->display_options['filters']['term_node_tid_depth_2']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator_id'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['label'] = 'Retirees';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['description'] = 'SELECT THE PLAN(S) TO COMPARE:';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['identifier'] = 'term_medical_retirees_benefit';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['depth'] = '1';
  /* Filter criterion: Dental/Active benefit plan selection */
  $handler->display->display_options['filters']['term_node_tid_depth_3']['id'] = 'term_node_tid_depth_3';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['ui_name'] = 'Dental/Active benefit plan selection';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['value'] = array(
    1038 => '1038',
    1039 => '1039',
  );
  $handler->display->display_options['filters']['term_node_tid_depth_3']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['operator_id'] = 'term_node_tid_depth_3_op';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['label'] = 'Active Employees';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['description'] = 'Active employees may select one of two offered dental plans.';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['operator'] = 'term_node_tid_depth_3_op';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['identifier'] = 'term_dental_active_benefit';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['depth'] = '1';
  /* Filter criterion: Dental/Retirees benefit plan */
  $handler->display->display_options['filters']['term_node_tid_depth_4']['id'] = 'term_node_tid_depth_4';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['ui_name'] = 'Dental/Retirees benefit plan';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['value'] = array(
    1041 => '1041',
  );
  $handler->display->display_options['filters']['term_node_tid_depth_4']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['operator_id'] = 'term_node_tid_depth_4_op';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['label'] = 'Retirees';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['description'] = 'Stanford offers one dental plan for all eligible retirees.';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['operator'] = 'term_node_tid_depth_4_op';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['identifier'] = 'term_dental_retirees_benefit';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['vocabulary'] = 'benefit_plan_type';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['depth'] = '1';
  $translatables['caw_benefit_comparison_tool'] = array(
    t('Master'),
    t('CAW Benefit Comparison Tool'),
    t('more'),
    t('Compare plans'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any plan and click on Compare plans to see results'),
    t('Advanced options'),
    t('Tool Header'),
    t('<h2 class="plan-rates-title">[field_su_plan_year] Plans & Contribution Rates</h2><br><br>
<div id="medical-plan-header">
<h2 class="medical-plans-title">Medical Plans</h2>
<p>Compare medical plans available for each of these roles:</p>
</div>
<div id="dental-plan-header">
<h2 class="dental-plans-title">Dental Plans</h2>
<p>Compare dental plans available for each of these roles:</p>
</div>
<div class="vision-plan-wrapper">
<h2>Vision Plan</h2>
<p>Compare vision plans available for each of these roles:</p>
<ul>
  <li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/vision-plan-[field_su_plan_year]" name="compare_active" target="_parent" class="more-link" id="compare_active" rel="external">Active Employees</a></li>
<li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/retirees/retiree-vision-plan-[field_su_plan_year]" class="more-link" target="_parent" rel="external">Retirees</a></li>
 </ul>
</div>
<div class="full-plan-costs-wrapper">
<h2>Full Plan Costs</h2>
<p>Compare the premium costs for each of these roles:</p>
<h3 class="no-spacing">Active Employees</h3>
<ul>
  <li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/change-your-benefits/open-enrollment/[field_su_plan_year]-employee-rates" name="compare_active" target="_parent" class="more-link" id="compare_active" rel="external">Review contribution charts</a>
  </li>
</ul>
<h3 class="spacing">Retirees</h3>
<ul>
  <li><a href="https://cardinalatwork.stanford.edu/benefits-rewards/health/change-your-benefits/open-enrollment/[field_su_plan_year]-retiree-rates" name="compare_ret" target="_parent" class="more-link" id="compare_ret" rel="external">Review contribution charts</a></li>
</ul>
</div>'),
    t('<b>You can scroll in the results box to see all the benefit categories available.</b>'),
    t('Benefit Type'),
    t('Description'),
    t('Full-Time Employee * Contribution Per Pay Period'),
    t('SELECT THE PLAN(S) TO COMPARE:'),
    t('Has taxonomy term'),
    t('Active employees '),
    t('Active employees may select one of two offered dental plans.'),
    t('Benefit Comparison Tool'),
    t('Please select a benefit plan year.'),
    t('Active Employees'),
    t('Early retirees under 65'),
    t('Retirees'),
    t('Stanford offers one dental plan for all eligible retirees.'),
  );
  $export['caw_benefit_comparison_tool'] = $view;

  return $export;
}
