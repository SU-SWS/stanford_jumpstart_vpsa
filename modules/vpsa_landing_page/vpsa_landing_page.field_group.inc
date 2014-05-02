<?php
/**
 * @file
 * vpsa_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vpsa_landing_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_v_postcard_col1|field_collection_item|field_v_postcard_group|full';
  $field_group->group_name = 'group_v_postcard_col1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_v_postcard_group';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_v_postcard_left';
  $field_group->data = array(
    'label' => 'Postcard Column 1',
    'weight' => '7',
    'children' => array(
      0 => 'field_v_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 1',
      'instance_settings' => array(
        'classes' => 'group-v-postcard-col1 field-group-div postcard-col1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_v_postcard_col1|field_collection_item|field_v_postcard_group|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_v_postcard_col2|field_collection_item|field_v_postcard_group|full';
  $field_group->group_name = 'group_v_postcard_col2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_v_postcard_group';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_v_postcard_left';
  $field_group->data = array(
    'label' => 'Postcard Column 2',
    'weight' => '8',
    'children' => array(
      0 => 'field_v_postcard_title',
      1 => 'field_v_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 2',
      'instance_settings' => array(
        'classes' => 'group-v-postcard-col2 field-group-div postcard-col2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_v_postcard_col2|field_collection_item|field_v_postcard_group|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_v_postcard_col3|field_collection_item|field_v_postcard_group|full';
  $field_group->group_name = 'group_v_postcard_col3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_v_postcard_group';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_v_postcard_left';
  $field_group->data = array(
    'label' => 'Postcard Column 3',
    'weight' => '9',
    'children' => array(
      0 => 'field_v_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 3',
      'instance_settings' => array(
        'classes' => 'group-v-postcard-col3 field-group-div postcard-col3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_v_postcard_col3|field_collection_item|field_v_postcard_group|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_v_postcard_left|field_collection_item|field_v_postcard_group|full';
  $field_group->group_name = 'group_v_postcard_left';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_v_postcard_group';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard Left',
    'weight' => '0',
    'children' => array(
      0 => 'group_v_postcard_col1',
      1 => 'group_v_postcard_col2',
      2 => 'group_v_postcard_col3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Left',
      'instance_settings' => array(
        'classes' => 'group-v-postcard-left field-group-div postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_v_postcard_left|field_collection_item|field_v_postcard_group|full'] = $field_group;

  return $export;
}
