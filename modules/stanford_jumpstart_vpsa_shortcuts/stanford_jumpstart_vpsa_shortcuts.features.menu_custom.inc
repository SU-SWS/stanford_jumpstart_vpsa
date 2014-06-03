<?php
/**
 * @file
 * stanford_jumpstart_vpsa_shortcuts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function stanford_jumpstart_vpsa_shortcuts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-admin-shortcuts-add-feature.
  $menus['menu-admin-shortcuts-add-feature'] = array(
    'menu_name' => 'menu-admin-shortcuts-add-feature',
    'title' => 'Admin Shortcuts: Add Features',
    'description' => '',
  );
  // Exported menu: menu-admin-shortcuts-get-help.
  $menus['menu-admin-shortcuts-get-help'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'title' => 'Admin Shortcuts: Get Help',
    'description' => '',
  );
  // Exported menu: menu-admin-shortcuts-home.
  $menus['menu-admin-shortcuts-home'] = array(
    'menu_name' => 'menu-admin-shortcuts-home',
    'title' => 'Admin Shortcuts: Home',
    'description' => '',
  );
  // Exported menu: menu-admin-shortcuts-ready-to-la.
  $menus['menu-admin-shortcuts-ready-to-la'] = array(
    'menu_name' => 'menu-admin-shortcuts-ready-to-la',
    'title' => 'Admin Shortcuts: Ready to Launch',
    'description' => '',
  );
  // Exported menu: menu-admin-shortcuts-site-action.
  $menus['menu-admin-shortcuts-site-action'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'title' => 'Admin Shortcuts: Site Actions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Shortcuts: Add Features');
  t('Admin Shortcuts: Get Help');
  t('Admin Shortcuts: Home');
  t('Admin Shortcuts: Ready to Launch');
  t('Admin Shortcuts: Site Actions');


  return $menus;
}
