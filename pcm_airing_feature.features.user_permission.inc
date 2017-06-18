<?php
/**
 * @file
 * pcm_airing_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pcm_airing_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer cm_airing'.
  $permissions['administer cm_airing'] = array(
    'name' => 'administer cm_airing',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'administer cm_airing_conflict'.
  $permissions['administer cm_airing_conflict'] = array(
    'name' => 'administer cm_airing_conflict',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing_conflict',
  );

  // Exported permission: 'create cm_airing entities'.
  $permissions['create cm_airing entities'] = array(
    'name' => 'create cm_airing entities',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'create field_airing_channel'.
  $permissions['create field_airing_channel'] = array(
    'name' => 'create field_airing_channel',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_airing_duration'.
  $permissions['create field_airing_duration'] = array(
    'name' => 'create field_airing_duration',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_airing_grid_link'.
  $permissions['create field_airing_grid_link'] = array(
    'name' => 'create field_airing_grid_link',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cablecast_airing_id'.
  $permissions['create field_cablecast_airing_id'] = array(
    'name' => 'create field_cablecast_airing_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_conflict_airing_original'.
  $permissions['create field_conflict_airing_original'] = array(
    'name' => 'create field_conflict_airing_original',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_is_show_premiere_date'.
  $permissions['create field_is_show_premiere_date'] = array(
    'name' => 'create field_is_show_premiere_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_is_show_simul_premiere'.
  $permissions['create field_is_show_simul_premiere'] = array(
    'name' => 'create field_is_show_simul_premiere',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_live_source'.
  $permissions['create field_live_source'] = array(
    'name' => 'create field_live_source',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_request'.
  $permissions['create field_series_request'] = array(
    'name' => 'create field_series_request',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_subsequent_airings'.
  $permissions['create field_subsequent_airings'] = array(
    'name' => 'create field_subsequent_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any cm_airing entities'.
  $permissions['delete any cm_airing entities'] = array(
    'name' => 'delete any cm_airing entities',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'delete own cm_airing entities'.
  $permissions['delete own cm_airing entities'] = array(
    'name' => 'delete own cm_airing entities',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'edit any cm_airing entities'.
  $permissions['edit any cm_airing entities'] = array(
    'name' => 'edit any cm_airing entities',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'edit field_airing_channel'.
  $permissions['edit field_airing_channel'] = array(
    'name' => 'edit field_airing_channel',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_airing_duration'.
  $permissions['edit field_airing_duration'] = array(
    'name' => 'edit field_airing_duration',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_airing_grid_link'.
  $permissions['edit field_airing_grid_link'] = array(
    'name' => 'edit field_airing_grid_link',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cablecast_airing_id'.
  $permissions['edit field_cablecast_airing_id'] = array(
    'name' => 'edit field_cablecast_airing_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_conflict_airing_original'.
  $permissions['edit field_conflict_airing_original'] = array(
    'name' => 'edit field_conflict_airing_original',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_is_show_premiere_date'.
  $permissions['edit field_is_show_premiere_date'] = array(
    'name' => 'edit field_is_show_premiere_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_is_show_simul_premiere'.
  $permissions['edit field_is_show_simul_premiere'] = array(
    'name' => 'edit field_is_show_simul_premiere',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_live_source'.
  $permissions['edit field_live_source'] = array(
    'name' => 'edit field_live_source',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_request'.
  $permissions['edit field_series_request'] = array(
    'name' => 'edit field_series_request',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_subsequent_airings'.
  $permissions['edit field_subsequent_airings'] = array(
    'name' => 'edit field_subsequent_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own cm_airing entities'.
  $permissions['edit own cm_airing entities'] = array(
    'name' => 'edit own cm_airing entities',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'edit own field_airing_channel'.
  $permissions['edit own field_airing_channel'] = array(
    'name' => 'edit own field_airing_channel',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_airing_duration'.
  $permissions['edit own field_airing_duration'] = array(
    'name' => 'edit own field_airing_duration',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_airing_grid_link'.
  $permissions['edit own field_airing_grid_link'] = array(
    'name' => 'edit own field_airing_grid_link',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cablecast_airing_id'.
  $permissions['edit own field_cablecast_airing_id'] = array(
    'name' => 'edit own field_cablecast_airing_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_conflict_airing_original'.
  $permissions['edit own field_conflict_airing_original'] = array(
    'name' => 'edit own field_conflict_airing_original',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_is_show_premiere_date'.
  $permissions['edit own field_is_show_premiere_date'] = array(
    'name' => 'edit own field_is_show_premiere_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_is_show_simul_premiere'.
  $permissions['edit own field_is_show_simul_premiere'] = array(
    'name' => 'edit own field_is_show_simul_premiere',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_live_source'.
  $permissions['edit own field_live_source'] = array(
    'name' => 'edit own field_live_source',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_request'.
  $permissions['edit own field_series_request'] = array(
    'name' => 'edit own field_series_request',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_subsequent_airings'.
  $permissions['edit own field_subsequent_airings'] = array(
    'name' => 'edit own field_subsequent_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view airing grid'.
  $permissions['view airing grid'] = array(
    'name' => 'view airing grid',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'cm_airing_grid',
  );

  // Exported permission: 'view cm_airing entities'.
  $permissions['view cm_airing entities'] = array(
    'name' => 'view cm_airing entities',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'cm_airing',
  );

  // Exported permission: 'view field_airing_channel'.
  $permissions['view field_airing_channel'] = array(
    'name' => 'view field_airing_channel',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_airing_duration'.
  $permissions['view field_airing_duration'] = array(
    'name' => 'view field_airing_duration',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_airing_grid_link'.
  $permissions['view field_airing_grid_link'] = array(
    'name' => 'view field_airing_grid_link',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cablecast_airing_id'.
  $permissions['view field_cablecast_airing_id'] = array(
    'name' => 'view field_cablecast_airing_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_conflict_airing_original'.
  $permissions['view field_conflict_airing_original'] = array(
    'name' => 'view field_conflict_airing_original',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_is_show_premiere_date'.
  $permissions['view field_is_show_premiere_date'] = array(
    'name' => 'view field_is_show_premiere_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_is_show_simul_premiere'.
  $permissions['view field_is_show_simul_premiere'] = array(
    'name' => 'view field_is_show_simul_premiere',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_live_source'.
  $permissions['view field_live_source'] = array(
    'name' => 'view field_live_source',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_request'.
  $permissions['view field_series_request'] = array(
    'name' => 'view field_series_request',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_subsequent_airings'.
  $permissions['view field_subsequent_airings'] = array(
    'name' => 'view field_subsequent_airings',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_airing_channel'.
  $permissions['view own field_airing_channel'] = array(
    'name' => 'view own field_airing_channel',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_airing_duration'.
  $permissions['view own field_airing_duration'] = array(
    'name' => 'view own field_airing_duration',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_airing_grid_link'.
  $permissions['view own field_airing_grid_link'] = array(
    'name' => 'view own field_airing_grid_link',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cablecast_airing_id'.
  $permissions['view own field_cablecast_airing_id'] = array(
    'name' => 'view own field_cablecast_airing_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_conflict_airing_original'.
  $permissions['view own field_conflict_airing_original'] = array(
    'name' => 'view own field_conflict_airing_original',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_is_show_premiere_date'.
  $permissions['view own field_is_show_premiere_date'] = array(
    'name' => 'view own field_is_show_premiere_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_is_show_simul_premiere'.
  $permissions['view own field_is_show_simul_premiere'] = array(
    'name' => 'view own field_is_show_simul_premiere',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_live_source'.
  $permissions['view own field_live_source'] = array(
    'name' => 'view own field_live_source',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_request'.
  $permissions['view own field_series_request'] = array(
    'name' => 'view own field_series_request',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_subsequent_airings'.
  $permissions['view own field_subsequent_airings'] = array(
    'name' => 'view own field_subsequent_airings',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
