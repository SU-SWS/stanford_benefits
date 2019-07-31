<?php
/**
 * @file
 * stanford_benefits.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_benefits_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_benefits_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_benefits_node_info() {
  $items = array(
    'benefit' => array(
      'name' => t('Medical Benefit'),
      'base' => 'node_content',
      'description' => t('The different benefits available to employees.'),
      'has_title' => '1',
      'title_label' => t('Benefit name'),
      'help' => '',
    ),
    'dental_benefit' => array(
      'name' => t('Dental Benefit'),
      'base' => 'node_content',
      'description' => t('The different dental benefits available to employees.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
