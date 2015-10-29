<?php
/**
 * @file
 * openproducer_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node panopoly_landing_page content'.
  $permissions['administer panelizer node panopoly_landing_page content'] = array(
    'name' => 'administer panelizer node panopoly_landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_landing_page layout'.
  $permissions['administer panelizer node panopoly_landing_page layout'] = array(
    'name' => 'administer panelizer node panopoly_landing_page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page content'.
  $permissions['administer panelizer node panopoly_page content'] = array(
    'name' => 'administer panelizer node panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page layout'.
  $permissions['administer panelizer node panopoly_page layout'] = array(
    'name' => 'administer panelizer node panopoly_page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
