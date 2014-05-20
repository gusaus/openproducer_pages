<?php
/**
 * @file
 * openproducer_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function openproducer_pages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['settings']['better_formats'] = array(
      'allowed_formats' => array(
        'filtered_html' => 0,
        'full_html' => 0,
        'panopoly_html_text' => 'panopoly_html_text',
        'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
        'plain_text' => 'plain_text',
      ),
      'allowed_formats_toggle' => 1,
      'default_order_toggle' => 0,
      'default_order_wrapper' => array(
        'formats' => array(
          'filtered_html' => array(
            'weight' => 0,
          ),
          'full_html' => array(
            'weight' => 1,
          ),
          'panopoly_html_text' => array(
            'weight' => -9,
          ),
          'panopoly_wysiwyg_text' => array(
            'weight' => -10,
          ),
          'plain_text' => array(
            'weight' => 10,
          ),
        ),
      ),
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['widget']['weight'] = 2; /* WAS: 4 */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_schemes'] = array(
      'public' => 'public',
      'vimeo' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_types'] = array(
      'audio' => 0,
      'document' => 0,
      'image' => 'image',
      'video' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['browser_plugins'] = array(
      'media_default--media_browser_1' => 'media_default--media_browser_1',
      'media_default--media_browser_my_files' => 0,
      'media_internet' => 0,
      'upload' => 'upload',
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
    unset($data['node-panopoly_page-field_featured_image']['widget']['settings']['preview_image_style']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function openproducer_pages_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->css_id = 'page'; /* WAS: 'page-page' */
    $data['node:panopoly_page:default']->display->layout = 'floyd_flipped'; /* WAS: 'bryant' */
  }
}
