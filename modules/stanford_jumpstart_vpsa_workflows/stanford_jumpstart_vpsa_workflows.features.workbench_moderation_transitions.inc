<?php
/**
 * @file
 * stanford_jumpstart_vpsa_workflows.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function stanford_jumpstart_vpsa_workflows_workbench_moderation_export_transitions() {
  $items = array(
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
      'name' => 'draft-published',
    ),
  );
  return $items;
}
