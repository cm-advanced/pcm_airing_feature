<?php
/**
 * @file
 * pcm_airing_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pcm_airing_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_pick-a-project-for-adding-an-airing:admin/project-picker/airing
  $menu_links['management_pick-a-project-for-adding-an-airing:admin/project-picker/airing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/project-picker/airing',
    'router_path' => 'admin/project-picker/airing',
    'link_title' => 'Pick a Project for adding an Airing',
    'options' => array(
      'attributes' => array(
        'title' => 'Provides the Project Picker for adding an Airing.',
      ),
      'identifier' => 'management_pick-a-project-for-adding-an-airing:admin/project-picker/airing',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_pick-project-for-adding-a-show:admin/project-picker/show
  $menu_links['management_pick-project-for-adding-a-show:admin/project-picker/show'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/project-picker/show',
    'router_path' => 'admin/project-picker/show',
    'link_title' => 'Pick Project for adding a Show',
    'options' => array(
      'attributes' => array(
        'title' => 'Provides the Project Picker for adding a Show.',
      ),
      'identifier' => 'management_pick-project-for-adding-a-show:admin/project-picker/show',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Pick Project for adding a Show');
  t('Pick a Project for adding an Airing');


  return $menu_links;
}
