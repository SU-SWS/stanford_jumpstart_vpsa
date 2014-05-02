<?php
/**
 * @file
 * vpsa_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vpsa_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function vpsa_landing_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vpsa_landing_page_node_info() {
  $items = array(
    'vpsa_landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('A landing page is a collection of headings, images, and links, arranged in a grid pattern'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
