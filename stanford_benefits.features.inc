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
 * Implements hook_node_info().
 */
function stanford_benefits_node_info() {
  $items = array(
    'benefit' => array(
      'name' => t('Benefit'),
      'base' => 'node_content',
      'description' => t('The different benefits available to employees.'),
      'has_title' => '1',
      'title_label' => t('Benefit name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
