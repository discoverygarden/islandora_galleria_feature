<?php
/**
 * @file
 * islandora_galleria_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function islandora_galleria_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-galleria_block-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'galleria_block-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
