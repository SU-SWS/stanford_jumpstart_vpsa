<?php
/**
 * @file
 * stanford_jumpstart_vpsa_roles_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function stanford_jumpstart_vpsa_roles_permissions_user_default_roles() {
  $roles = array();

  // Exported role: student assistant.
  $roles['student assistant'] = array(
    'name' => 'student assistant',
    'weight' => 8,
  );

  return $roles;
}
