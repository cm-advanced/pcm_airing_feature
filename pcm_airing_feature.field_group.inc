<?php
/**
 * @file
 * pcm_airing_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pcm_airing_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_airing_basic_info|airing|airing|default';
  $field_group->group_name = 'group_airing_basic_info';
  $field_group->entity_type = 'airing';
  $field_group->bundle = 'airing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Airing Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_airing_title',
      1 => 'field_airing_channel',
      2 => 'field_airing_date',
      3 => 'field_cablecast_airing_id',
      4 => 'field_airing_show_ref',
      5 => 'field_airing_project_ref',
      6 => 'field_airing_type',
      7 => 'field_airing_grid_link',
      8 => 'field_live_source',
      9 => 'field_is_show_premiere_date',
      10 => 'field_subsequent_airings',
      11 => 'field_series_request',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-airing-basic-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_airing_basic_info|airing|airing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_airing_basic_info|airing|airing|form';
  $field_group->group_name = 'group_airing_basic_info';
  $field_group->entity_type = 'airing';
  $field_group->bundle = 'airing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Airing Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_airing_channel',
      1 => 'field_cablecast_airing_id',
      2 => 'field_airing_show_ref',
      3 => 'field_airing_project_ref',
      4 => 'field_airing_type',
      5 => 'field_live_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-airing-basic-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_airing_basic_info|airing|airing|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Airing Info');

  return $field_groups;
}
