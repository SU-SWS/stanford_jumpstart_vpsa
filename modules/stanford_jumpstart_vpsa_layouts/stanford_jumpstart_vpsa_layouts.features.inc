<?php
/**
 * @file
 * stanford_jumpstart_vpsa_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_jumpstart_vpsa_layouts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
