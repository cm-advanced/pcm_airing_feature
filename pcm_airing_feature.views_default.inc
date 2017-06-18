<?php
/**
 * @file
 * pcm_airing_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pcm_airing_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'airing_conflict_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing_conflict';
  $view->human_name = 'Airing Conflict Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airing Conflict Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_conflict_airing_original_target_id']['id'] = 'field_conflict_airing_original_target_id';
  $handler->display->display_options['relationships']['field_conflict_airing_original_target_id']['table'] = 'field_data_field_conflict_airing_original';
  $handler->display->display_options['relationships']['field_conflict_airing_original_target_id']['field'] = 'field_conflict_airing_original_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_conflict_airing_overlap_target_id']['id'] = 'field_conflict_airing_overlap_target_id';
  $handler->display->display_options['relationships']['field_conflict_airing_overlap_target_id']['table'] = 'field_data_field_conflict_airing_overlap';
  $handler->display->display_options['relationships']['field_conflict_airing_overlap_target_id']['field'] = 'field_conflict_airing_overlap_target_id';
  /* Field: Airing Conflict: Airing conflict ID */
  $handler->display->display_options['fields']['airing_conflict_id']['id'] = 'airing_conflict_id';
  $handler->display->display_options['fields']['airing_conflict_id']['table'] = 'cm_airing_conflict';
  $handler->display->display_options['fields']['airing_conflict_id']['field'] = 'airing_conflict_id';
  $handler->display->display_options['fields']['airing_conflict_id']['label'] = '';
  $handler->display->display_options['fields']['airing_conflict_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_conflict_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_conflict_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/admin/airing-conflict-ignore/[airing_conflict_id] ">Delete Airing Conflict</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['relationship'] = 'field_conflict_airing_original_target_id';
  $handler->display->display_options['fields']['field_airing_date']['label'] = '';
  $handler->display->display_options['fields']['field_airing_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_airing_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'military_medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date_1']['id'] = 'field_airing_date_1';
  $handler->display->display_options['fields']['field_airing_date_1']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date_1']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date_1']['relationship'] = 'field_conflict_airing_overlap_target_id';
  $handler->display->display_options['fields']['field_airing_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_airing_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_airing_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airing_date_1']['settings'] = array(
    'format_type' => 'military_medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request']['id'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['relationship'] = 'field_conflict_airing_original_target_id';
  $handler->display->display_options['fields']['field_series_request']['label'] = '';
  $handler->display->display_options['fields']['field_series_request']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_request']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_request']['alter']['text'] = '<li><a href="/node/[field_series_request]">View Series Request</li>';
  $handler->display->display_options['fields']['field_series_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_request']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_series_request']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_series_request']['settings'] = array(
    'link' => 0,
  );
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request_1']['id'] = 'field_series_request_1';
  $handler->display->display_options['fields']['field_series_request_1']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request_1']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request_1']['relationship'] = 'field_conflict_airing_overlap_target_id';
  $handler->display->display_options['fields']['field_series_request_1']['label'] = '';
  $handler->display->display_options['fields']['field_series_request_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_request_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_request_1']['alter']['text'] = '<li><a href="/node/[field_series_request_1]">View Series Request</li>';
  $handler->display->display_options['fields']['field_series_request_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_request_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_series_request_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_series_request_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['relationship'] = 'field_conflict_airing_original_target_id';
  $handler->display->display_options['fields']['field_live_source']['label'] = '';
  $handler->display->display_options['fields']['field_live_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_live_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_source']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_live_source']['empty_zero'] = TRUE;
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source_1']['id'] = 'field_live_source_1';
  $handler->display->display_options['fields']['field_live_source_1']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source_1']['field'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source_1']['relationship'] = 'field_conflict_airing_overlap_target_id';
  $handler->display->display_options['fields']['field_live_source_1']['label'] = '';
  $handler->display->display_options['fields']['field_live_source_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_live_source_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_source_1']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_live_source_1']['empty_zero'] = TRUE;
  /* Field: Airing Conflict: Original Airing */
  $handler->display->display_options['fields']['field_conflict_airing_original']['id'] = 'field_conflict_airing_original';
  $handler->display->display_options['fields']['field_conflict_airing_original']['table'] = 'field_data_field_conflict_airing_original';
  $handler->display->display_options['fields']['field_conflict_airing_original']['field'] = 'field_conflict_airing_original';
  $handler->display->display_options['fields']['field_conflict_airing_original']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conflict_airing_original']['alter']['text'] = '[field_conflict_airing_original] <br/>
Source: [field_live_source]<br/>
[field_airing_date]
<ul>
  <li><a href="/admin/manage/scheduling?airing_id=[field_conflict_airing_original-target_id]">View on Grid</a></li>
  <li><a href="/airing/[field_conflict_airing_original-target_id]/edit">Edit</a></li>
  <li><a href="/airing/[field_conflict_airing_original-target_id]/delete">Cancel</a></li>
  <li><a href="/admin/projects/cancel/[field_airing_project_ref]">Cancel Series</a></li>
  [field_series_request]
</ul>';
  $handler->display->display_options['fields']['field_conflict_airing_original']['settings'] = array(
    'link' => 0,
  );
  /* Field: Airing Conflict: Overlap Airing */
  $handler->display->display_options['fields']['field_conflict_airing_overlap']['id'] = 'field_conflict_airing_overlap';
  $handler->display->display_options['fields']['field_conflict_airing_overlap']['table'] = 'field_data_field_conflict_airing_overlap';
  $handler->display->display_options['fields']['field_conflict_airing_overlap']['field'] = 'field_conflict_airing_overlap';
  $handler->display->display_options['fields']['field_conflict_airing_overlap']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conflict_airing_overlap']['alter']['text'] = '[field_conflict_airing_overlap] <br/>
Source: [field_live_source_1]<br/>
[field_airing_date_1]
<ul>
  <li><a href="/admin/manage/scheduling?airing_id=[field_conflict_airing_overlap-target_id]">View on Grid</a></li>
  <li><a href="/airing/[field_conflict_airing_overlap-target_id]/edit">Edit</a></li>
  <li><a href="/airing/[field_conflict_airing_overlap-target_id]/delete">Cancel</a></li>
  <li><a href="/admin/projects/cancel/[field_airing_project_ref_1]">Cancel Series</a></li>
  [field_series_request_1]
</ul>';
  $handler->display->display_options['fields']['field_conflict_airing_overlap']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Airing Conflict: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'cm_airing_conflict';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/admin/programming/airing-conflicts"><strong><bold>See all Airing Conflicts</strong></bold></a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Airing Conflicts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'admin/programming/airing-conflicts';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/admin/programming/airing-conflicts"><strong><bold>See all Airing Conflicts</strong></bold></a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $export['airing_conflict_block'] = $view;

  $view = new view();
  $view->name = 'airing_detail_for_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airing Detail for Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airing Detail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'airing_id' => 'airing_id',
    'field_airing_title' => 'field_airing_title',
    'nothing' => 'field_airing_title',
    'field_airing_date' => 'field_airing_date',
    'field_airing_project_ref' => 'field_airing_project_ref',
    'nid' => 'nid',
    'nothing_3' => 'nothing_3',
    'nothing_2' => 'nothing_3',
    'view_1' => 'view_1',
    'nothing_1' => 'view_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_project_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_3' => array(
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_1' => array(
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title]';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'airing/[airing_id]/edit';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Pick Show for Airing';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Create Livefeed Show';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/admin/manage/scheduling?airing_id=[airing_id]&edit-mode=live-swapout">Use Previous Show</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Contextual filter: Airing: Airing ID */
  $handler->display->display_options['arguments']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['arguments']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['airing_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['airing_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['airing_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['airing_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['airing_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['airing_id']['validate']['type'] = 'numeric';
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';
  $handler->display->display_options['filters']['airing_id']['group'] = 1;

  /* Display: Regular */
  $handler = $view->new_display('block', 'Regular', 'airing_detail_block_regular');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'airing_id' => 'airing_id',
    'field_airing_title' => 'field_airing_title',
    'nothing' => 'field_airing_title',
    'field_airing_date' => 'field_airing_date',
    'field_airing_project_ref' => 'field_airing_project_ref',
    'nid' => 'nid',
    'nothing_2' => 'nothing_2',
    'nothing_1' => 'nothing_2',
    'field_airing_show_ref' => 'field_airing_show_ref',
    'field_device' => 'field_airing_show_ref',
    'view' => 'field_airing_show_ref',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_project_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_show_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_device' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['label'] = 'Airing Title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title]';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '(Edit)';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'airing/[airing_id]/edit';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Times';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_project_ref']['alter']['text'] = '[field_airing_project_ref]  ([nid])';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Cancel';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<a href="/airing/[airing_id]/delete">Cancel Airing</a>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Cancel';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/admin/projects/cancel/[nid]">Cancel Project</a>';
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Pick Show for Airing';

  /* Display: Livefeed */
  $handler = $view->new_display('block', 'Livefeed', 'airing_detail_block_livefeed');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['label'] = 'Airing Title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title]';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '(Edit)';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'airing/[airing_id]/edit';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Times';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_project_ref']['alter']['text'] = '[field_airing_project_ref]  ([nid])';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Cancel';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<a href="/airing/[airing_id]/delete">Cancel Airing</a>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Cancel';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<a href="/admin/projects/cancel/[nid]">Cancel Project</a>';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Create Livefeed Show';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/admin/manage/scheduling?airing_id=[airing_id]&edit-mode=live-swapout">Use Previous Show</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $export['airing_detail_for_grid'] = $view;

  $view = new view();
  $view->name = 'airing_devices_for_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Airing Devices For Show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airing Livefeeds For Show';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nothing';
  $handler->display->display_options['style_options']['text'] = 'Set Feed';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'cm_airing_grid/create_live_show_for_airing/[tid]/!1';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'numeric';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'live_facility' => 'live_facility',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['airing_devices_for_show'] = $view;

  $view = new view();
  $view->name = 'airing_grid_jump_menus';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Airing Grid Jump Menus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nothing';
  $handler->display->display_options['style_options']['text'] = 'Set Show';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'N/A';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_airing_project_ref_airing']['id'] = 'reverse_field_airing_project_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_project_ref_airing']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_airing_project_ref_airing']['field'] = 'reverse_field_airing_project_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_project_ref_airing']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Show Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'cm_airing_grid/set_show_for_airing/!1/[nid]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Episode Number (field_episode_number) */
  $handler->display->display_options['sorts']['field_episode_number_value']['id'] = 'field_episode_number_value';
  $handler->display->display_options['sorts']['field_episode_number_value']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['sorts']['field_episode_number_value']['field'] = 'field_episode_number_value';
  $handler->display->display_options['sorts']['field_episode_number_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Airing: Airing ID */
  $handler->display->display_options['arguments']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['arguments']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['relationship'] = 'reverse_field_airing_project_ref_airing';
  $handler->display->display_options['arguments']['airing_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['airing_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['airing_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['airing_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['airing_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['airing_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['airing_id']['validate']['type'] = 'numeric';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'project_show_jump_block');
  $export['airing_grid_jump_menus'] = $view;

  $view = new view();
  $view->name = 'airing_master_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airings: Find';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airings: Find';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'airing_id' => 'airing_id',
    'field_airing_title' => 'field_airing_title',
    'field_airing_date' => 'field_airing_date',
    'field_live_source' => 'field_live_source',
    'field_airing_channel' => 'field_airing_channel',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_is_show_premiere_date' => 'field_is_show_premiere_date',
    'field_series_request' => 'field_series_request',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'airing_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_live_source' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_channel' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_show_premiere_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Field: Bulk operations: Airing */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Show Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_live_source']['empty_zero'] = TRUE;
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]">[field_tv_guide_title]</a>';
  /* Field: Airing: Is Show Premiere Date? */
  $handler->display->display_options['fields']['field_is_show_premiere_date']['id'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['field'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['label'] = 'Show Premiere Date?';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_is_show_premiere_date']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['empty'] = 'No';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_is_show_premiere_date']['type'] = 'list_key';
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request']['id'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['settings'] = array(
    'link' => 1,
  );
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';
  /* Field: Airing: Cablecast Airing ID */
  $handler->display->display_options['fields']['field_cablecast_airing_id']['id'] = 'field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['table'] = 'field_data_field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['field'] = 'field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['label'] = 'Cablecast ID';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Airing: Changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'cm_airing';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Airing: Airing ID */
  $handler->display->display_options['sorts']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['sorts']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['sorts']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['sorts']['airing_id']['order'] = 'DESC';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_airing_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['operator_id'] = 'field_airing_date_value_op';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['operator'] = 'field_airing_date_value_op';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['identifier'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = '-1 year';
  $handler->display->display_options['filters']['field_airing_date_value']['default_to_date'] = '+1 year';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Field: Live Source (field_live_source) */
  $handler->display->display_options['filters']['field_live_source_value']['id'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['filters']['field_live_source_value']['field'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_live_source_value']['expose']['operator_id'] = 'field_live_source_value_op';
  $handler->display->display_options['filters']['field_live_source_value']['expose']['label'] = 'Live Source';
  $handler->display->display_options['filters']['field_live_source_value']['expose']['operator'] = 'field_live_source_value_op';
  $handler->display->display_options['filters']['field_live_source_value']['expose']['identifier'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Field: Channel (field_airing_channel) */
  $handler->display->display_options['filters']['field_airing_channel_tid']['id'] = 'field_airing_channel_tid';
  $handler->display->display_options['filters']['field_airing_channel_tid']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['filters']['field_airing_channel_tid']['field'] = 'field_airing_channel_tid';
  $handler->display->display_options['filters']['field_airing_channel_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_airing_channel_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_airing_channel_tid']['expose']['operator_id'] = 'field_airing_channel_tid_op';
  $handler->display->display_options['filters']['field_airing_channel_tid']['expose']['label'] = 'Channel';
  $handler->display->display_options['filters']['field_airing_channel_tid']['expose']['operator'] = 'field_airing_channel_tid_op';
  $handler->display->display_options['filters']['field_airing_channel_tid']['expose']['identifier'] = 'field_airing_channel_tid';
  $handler->display->display_options['filters']['field_airing_channel_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_airing_channel_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_airing_channel_tid']['vocabulary'] = 'channel';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/airing-master-list';
  $export['airing_master_list'] = $view;

  $view = new view();
  $view->name = 'airings_airing_group';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airings: Airing Group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['id'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['field'] = 'field_subsequent_airings_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['id'] = 'reverse_field_subsequent_airings_airing';
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['table'] = 'cm_airing';
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['field'] = 'reverse_field_subsequent_airings_airing';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Contextual filter: Airing: Subsequent Airings (field_subsequent_airings) */
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['id'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['field'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['relationship'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subsequent_airings_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Airing: Subsequent Airings (field_subsequent_airings:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['relationship'] = 'reverse_field_subsequent_airings_airing';
  $handler->display->display_options['arguments']['delta']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';

  /* Display: Group Parent */
  $handler = $view->new_display('block', 'Group Parent', 'group_parent');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['id'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['field'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['relationships']['field_subsequent_airings_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Airing ID */
  $handler->display->display_options['arguments']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['arguments']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['relationship'] = 'field_subsequent_airings_target_id';
  $handler->display->display_options['arguments']['airing_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['airing_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['airing_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['airing_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['airing_id']['summary_options']['items_per_page'] = '25';

  /* Display: Subsequent Airings */
  $handler = $view->new_display('block', 'Subsequent Airings', 'subsequent');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['id'] = 'reverse_field_subsequent_airings_airing';
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['table'] = 'cm_airing';
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['field'] = 'reverse_field_subsequent_airings_airing';
  $handler->display->display_options['relationships']['reverse_field_subsequent_airings_airing']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Airing ID */
  $handler->display->display_options['arguments']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['arguments']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['arguments']['airing_id']['relationship'] = 'reverse_field_subsequent_airings_airing';
  $handler->display->display_options['arguments']['airing_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['airing_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['airing_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['airing_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['airing_id']['summary_options']['items_per_page'] = '25';
  $export['airings_airing_group'] = $view;

  $view = new view();
  $view->name = 'airings_airings_scheduled';
  $view->description = 'Airings: scheduled and approved airings - used for series request email cofirmation';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airings: Airings Scheduled';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'airing_id' => 'airing_id',
    'field_airing_project_ref' => 'field_airing_project_ref',
    'field_airing_title' => 'field_airing_title',
    'field_live_source' => 'field_live_source',
    'field_airing_channel' => 'field_airing_channel',
    'field_airing_date' => 'field_airing_date',
    'nid' => 'nid',
    'field_series_request' => 'field_series_request',
    'field_is_show_premiere_date' => 'field_is_show_premiere_date',
    'field_subsequent_airings' => 'field_subsequent_airings',
    'field_airing_type' => 'field_airing_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_project_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_live_source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_channel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_request' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_show_premiere_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subsequent_airings' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_series_request_target_id']['id'] = 'field_series_request_target_id';
  $handler->display->display_options['relationships']['field_series_request_target_id']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['relationships']['field_series_request_target_id']['field'] = 'field_series_request_target_id';
  $handler->display->display_options['relationships']['field_series_request_target_id']['label'] = 'field_series_request';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Series Request Nid';
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request']['id'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['settings'] = array(
    'link' => 0,
  );
  /* Field: Airing: Is Show Premiere Date? */
  $handler->display->display_options['fields']['field_is_show_premiere_date']['id'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['field'] = 'field_is_show_premiere_date';
  /* Field: Airing: Subsequent Airings */
  $handler->display->display_options['fields']['field_subsequent_airings']['id'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['field'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_subsequent_airings']['delta_offset'] = '0';
  /* Field: Airing: Airing Type */
  $handler->display->display_options['fields']['field_airing_type']['id'] = 'field_airing_type';
  $handler->display->display_options['fields']['field_airing_type']['table'] = 'field_data_field_airing_type';
  $handler->display->display_options['fields']['field_airing_type']['field'] = 'field_airing_type';
  $handler->display->display_options['fields']['field_airing_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Season Dates */
  $handler->display->display_options['fields']['field_season_request_dates']['id'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['field'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['fields']['field_season_request_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Series Request Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Series Request Nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Season Dates -  start date (field_season_request_dates) */
  $handler->display->display_options['arguments']['field_season_request_dates_value']['id'] = 'field_season_request_dates_value';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['field'] = 'field_season_request_dates_value';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';
  $handler->display->display_options['filters']['airing_id']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['filters']['nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Is Show Premiere Date? */
  $handler->display->display_options['fields']['field_is_show_premiere_date']['id'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['field'] = 'field_is_show_premiere_date';
  /* Field: Airing: Subsequent Airings */
  $handler->display->display_options['fields']['field_subsequent_airings']['id'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['field'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_subsequent_airings']['delta_offset'] = '0';
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Project (field_airing_project_ref) */
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';
  $handler->display->display_options['filters']['airing_id']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  $export['airings_airings_scheduled'] = $view;

  $view = new view();
  $view->name = 'airings_missing_show_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airings: Missing Show Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airings Missing Show Content';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'airing_id' => 'airing_id',
    'field_airing_title' => 'field_airing_title',
    'title' => 'title',
    'field_airing_type' => 'field_airing_type',
    'field_airing_grid_link' => 'field_airing_grid_link',
    'nothing' => 'field_airing_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_grid_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no airings missing show content. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = '';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['label'] = 'Airing Title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Show';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Media Status';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 print pcm_airing_airings_missing_show_content_link_field($row);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Airing: Airing Type */
  $handler->display->display_options['fields']['field_airing_type']['id'] = 'field_airing_type';
  $handler->display->display_options['fields']['field_airing_type']['table'] = 'field_data_field_airing_type';
  $handler->display->display_options['fields']['field_airing_type']['field'] = 'field_airing_type';
  $handler->display->display_options['fields']['field_airing_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['label'] = 'Airing Grid';
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/airing/[airing_id]/edit">(Edit)</a>';
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_airing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Live Source (field_live_source) */
  $handler->display->display_options['filters']['field_live_source_value']['id'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['filters']['field_live_source_value']['field'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_live_source_value']['value'] = array(
    20 => '20',
    21 => '21',
    1 => '1',
    5 => '5',
    3 => '3',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
    17 => '17',
    18 => '18',
    19 => '19',
  );
  $handler->display->display_options['filters']['field_live_source_value']['group'] = 1;
  /* Filter criterion: Airing: Is Show Premiere Date? (field_is_show_premiere_date) */
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['id'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['field'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['group'] = 1;
  /* Filter criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['filters']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['filters']['field_expected_filename_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_expected_filename_value']['group'] = 2;
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_placeholder_value']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/scheduling/airings-missing-show-content">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'admin/airings/missing-show-content';
  $export['airings_missing_show_content'] = $view;

  $view = new view();
  $view->name = 'airings_producer_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airings: Producer Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    15 => '15',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a name=\'my_airings\'></a>
<h2>My Upcoming Airings</h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<br/><i>* Media Status Explanations:<ul><li><i>Missing Show: You have not yet submitted a show form for this airing. By submtting a show form you let PCM know all of the relevant production and playback data for your show.</li>
 <li><i>Missing File: If your show is not live you will need to upload a media file. You will need to do this at PCM to ensure broadcast. </li>
  <li><i>Repeat: This scheduled airing is a repeat of a previous airing and no media action is required.</li>
  <li>Complete: The media for the show is all set and ready for airing. </i></li>
</ul>
<i>If 48 hours prior to your premier date you have not submitted your show and uploaded media your airing will be replaced with another show.</i>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have no upcoming airings. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = '';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Air Time';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid_1]/edit?destination=dashboard">[field_tv_guide_title]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Media Status*';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print pcm_show_airing_block_filename_view_field($row);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Action';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
print pcm_show_dashboard_airings_action_view_field($row) ;
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['arguments']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['arguments']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_argument_options']['argument'] = '2000-01-01--2016-04-15';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_date_value']['year_range'] = '2000:2100';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_airing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Airing: Is Show Premiere Date? (field_is_show_premiere_date) */
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['id'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['field'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['expose']['operator_id'] = 'field_is_show_premiere_date_value_op';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['expose']['operator'] = 'field_is_show_premiere_date_value_op';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['expose']['identifier'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['airings_producer_dashboard'] = $view;

  return $export;
}
