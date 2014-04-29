<?php
/**
 * @file
 * islandora_galleria_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function islandora_galleria_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function islandora_galleria_feature_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('The content type used by Islandora Galleria to model the slideshow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
