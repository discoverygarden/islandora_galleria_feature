<?php
/**
 * @file
 * islandora_galleria_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function islandora_galleria_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-slideshow-field_slides'
  $field_instances['node-slideshow-field_slides'] = array(
    'bundle' => 'slideshow',
    'deleted' => 0,
    'description' => 'The images that the slideshow will display.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'galleria',
        'settings' => array(
          'alt_field' => '',
          'optionset' => 'default',
          'referenced_fields' => array(),
          'title_field' => '',
        ),
        'type' => 'galleria',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slides',
    'label' => 'Slides',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-slideshow-field_url'
  $field_instances['node-slideshow-field_url'] = array(
    'bundle' => 'slideshow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slides');
  t('The images that the slideshow will display.');
  t('URL');

  return $field_instances;
}
