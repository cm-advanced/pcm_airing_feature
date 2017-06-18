<?php
/**
 * @file
 * pcm_airing_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pcm_airing_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Promo',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '07b6cc52-67cb-4f55-9df2-62c4e88730ec',
    'vocabulary_machine_name' => 'airing_type',
  );
  $terms[] = array(
    'name' => 'Field',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1d55d3fe-2781-4cd7-8983-82cd840ac6f5',
    'vocabulary_machine_name' => 'airing_type',
  );
  $terms[] = array(
    'name' => 'Special',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '69fc1b82-ae06-457f-89eb-80b3c24ce17e',
    'vocabulary_machine_name' => 'airing_type',
  );
  $terms[] = array(
    'name' => 'Series',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e88783bd-fafa-4ed2-9bdb-12ee6a8c9873',
    'vocabulary_machine_name' => 'airing_type',
  );
  return $terms;
}
