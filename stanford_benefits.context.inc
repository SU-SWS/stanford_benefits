<?php
/**
 * @file
 * stanford_benefits.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_benefits_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'benefit_comparison_tool';
  $context->description = 'The context for the benefit comparison tool.';
  $context->tag = 'Benefits-Rewards-Sidebar';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'benefits-rewards/health/medical-life/medical-plans/comparison-tool' => 'benefits-rewards/health/medical-life/medical-plans/comparison-tool',
        'benefits-rewards/health/medical-life/medical-plans/comparison-tool-new' => 'benefits-rewards/health/medical-life/medical-plans/comparison-tool-new',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-a2b0e2a858e2592ad715fc450944c1e4' => array(
          'module' => 'views',
          'delta' => 'a2b0e2a858e2592ad715fc450944c1e4',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Benefits-Rewards-Sidebar');
  t('The context for the benefit comparison tool.');
  $export['benefit_comparison_tool'] = $context;

  return $export;
}
