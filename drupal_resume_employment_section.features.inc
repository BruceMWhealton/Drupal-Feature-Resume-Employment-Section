<?php
/**
 * @file
 * drupal_resume_employment_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_employment_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_employment_section_node_info() {
  $items = array(
    'employment' => array(
      'name' => t('Employment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
