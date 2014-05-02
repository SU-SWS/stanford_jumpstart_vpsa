<?php
/**
 * @file
 * vpsa_landing_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vpsa_landing_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_v_postcard_group';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_12_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_3_col_header' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_4_col_header' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_6_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_6_col_banner_short' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_6_col_banner_tall' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner_short' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner_tall' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_9_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_9_col_banner_short' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_icon_square' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_large_scaled' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_large_square' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_medium_square' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_sm_profile' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_small_square' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_thumbnail_square' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_v_postcard_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__vpsa_landing_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__vpsa_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vpsa_landing_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_vpsa_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vpsa_landing_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vpsa_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vpsa_landing_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_vpsa_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vpsa_landing_page';
  $strongarm->value = '1';
  $export['node_preview_vpsa_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vpsa_landing_page';
  $strongarm->value = 0;
  $export['node_submitted_vpsa_landing_page'] = $strongarm;

  return $export;
}
