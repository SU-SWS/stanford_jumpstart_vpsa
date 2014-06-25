<?php
/**
 * @file
 * stanford_jumpstart_vpsa_shortcuts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stanford_jumpstart_vpsa_shortcuts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-shortcuts-add-feature_add-features:admin/stanford-jumpstart/features
  $menu_links['menu-admin-shortcuts-add-feature_add-features:admin/stanford-jumpstart/features'] = array(
    'menu_name' => 'menu-admin-shortcuts-add-feature',
    'link_path' => 'admin/stanford-jumpstart/features',
    'router_path' => 'admin/stanford-jumpstart/features',
    'link_title' => 'Add Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Add features to your site',
      ),
      'identifier' => 'menu-admin-shortcuts-add-feature_add-features:admin/stanford-jumpstart/features',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-get-help_get-help:admin/stanford-jumpstart
  $menu_links['menu-admin-shortcuts-get-help_get-help:admin/stanford-jumpstart'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'link_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/stanford-jumpstart',
    'link_title' => 'Get Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn about ways to get help',
      ),
      'identifier' => 'menu-admin-shortcuts-get-help_get-help:admin/stanford-jumpstart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-home_home:<front>
  $menu_links['menu-admin-shortcuts-home_home:<front>'] = array(
    'menu_name' => 'menu-admin-shortcuts-home',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
      'identifier' => 'menu-admin-shortcuts-home_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-ready-to-la_ready-to-launch:admin/stanford-jumpstart/launch-checklist
  $menu_links['menu-admin-shortcuts-ready-to-la_ready-to-launch:admin/stanford-jumpstart/launch-checklist'] = array(
    'menu_name' => 'menu-admin-shortcuts-ready-to-la',
    'link_path' => 'admin/stanford-jumpstart/launch-checklist',
    'router_path' => 'admin/stanford-jumpstart/launch-checklist',
    'link_title' => 'Ready to Launch?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-ready-to-la_ready-to-launch:admin/stanford-jumpstart/launch-checklist',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-event:node/add/stanford-event
  $menu_links['menu-admin-shortcuts-site-action_add-event:node/add/stanford-event'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-event',
    'router_path' => 'node/add/stanford-event',
    'link_title' => 'Add Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-event:node/add/stanford-event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-landing-page:node/add/vpsa-landing-page
  $menu_links['menu-admin-shortcuts-site-action_add-landing-page:node/add/vpsa-landing-page'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/vpsa-landing-page',
    'router_path' => 'node/add/vpsa-landing-page',
    'link_title' => 'Add Landing Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-landing-page:node/add/vpsa-landing-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-news-item:node/add/stanford-news-item
  $menu_links['menu-admin-shortcuts-site-action_add-news-item:node/add/stanford-news-item'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-news-item',
    'router_path' => 'node/add/stanford-news-item',
    'link_title' => 'Add News Item',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-news-item:node/add/stanford-news-item',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-page:node/add/stanford-page
  $menu_links['menu-admin-shortcuts-site-action_add-page:node/add/stanford-page'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-page',
    'router_path' => 'node/add/stanford-page',
    'link_title' => 'Add Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-page:node/add/stanford-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-slide:node/add/stanford-slide
  $menu_links['menu-admin-shortcuts-site-action_add-slide:node/add/stanford-slide'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-slide',
    'router_path' => 'node/add/stanford-slide',
    'link_title' => 'Add Slide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-slide:node/add/stanford-slide',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_edit-main-menu:admin/structure/menu/manage/main-menu
  $menu_links['menu-admin-shortcuts-site-action_edit-main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Edit Main Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit the links in your Main Menu',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_edit-main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_edit-site-name:admin/config/system/site-information
  $menu_links['menu-admin-shortcuts-site-action_edit-site-name:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Edit Site Name',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit your site name',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_edit-site-name:admin/config/system/site-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-all-content:admin/manage
  $menu_links['menu-admin-shortcuts-site-action_manage-all-content:admin/manage'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/manage',
    'router_path' => 'admin/manage',
    'link_title' => 'Manage All Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-all-content:admin/manage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-taxonomies:admin/structure/taxonomy_manager/voc
  $menu_links['menu-admin-shortcuts-site-action_manage-taxonomies:admin/structure/taxonomy_manager/voc'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/structure/taxonomy_manager/voc',
    'router_path' => 'admin/structure/taxonomy_manager/voc',
    'link_title' => 'Manage Taxonomies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-taxonomies:admin/structure/taxonomy_manager/voc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-users:admin/people
  $menu_links['menu-admin-shortcuts-site-action_manage-users:admin/people'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Manage Users',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage all site users, Add/remove permissions',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-users:admin/people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_refresh-site-content:admin/stanford/jumpstart/shortcuts/clear-cache
  $menu_links['menu-admin-shortcuts-site-action_refresh-site-content:admin/stanford/jumpstart/shortcuts/clear-cache'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford/jumpstart/shortcuts/clear-cache',
    'router_path' => 'admin/stanford/jumpstart/shortcuts/clear-cache',
    'link_title' => 'Refresh Site Content',
    'options' => array(
      'attributes' => array(
        'class' => 'su-clear-cache',
        'title' => 'Refresh Site Content',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_refresh-site-content:admin/stanford/jumpstart/shortcuts/clear-cache',
    ),
    'module' => 'stanford_jumpstart_vpsa_shortcuts',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart
  $menu_links['menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/stanford-jumpstart',
    'link_title' => 'Site Actions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Event');
  t('Add Features');
  t('Add Landing Page');
  t('Add News Item');
  t('Add Page');
  t('Add Slide');
  t('Edit Main Menu');
  t('Edit Site Name');
  t('Get Help');
  t('Home');
  t('Manage All Content');
  t('Manage Taxonomies');
  t('Manage Users');
  t('Ready to Launch?');
  t('Refresh Site Content');
  t('Site Actions');


  return $menu_links;
}
