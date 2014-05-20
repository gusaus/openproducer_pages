<?php
/**
 * @file
 * openproducer_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function openproducer_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-panopoly_page-body.settings|better_formats"] = array(
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
  );
  $overrides["field_instance.node-panopoly_page-body.widget|weight"] = 2;
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|module"] = 'media';
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_schemes"] = array(
    'public' => 'public',
    'vimeo' => 0,
    'youtube' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_types"] = array(
    'audio' => 0,
    'document' => 0,
    'image' => 'image',
    'video' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|browser_plugins"] = array(
    'media_default--media_browser_1' => 'media_default--media_browser_1',
    'media_default--media_browser_my_files' => 0,
    'media_internet' => 0,
    'upload' => 'upload',
    'youtube' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|preview_image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|type"] = 'media_generic';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default.css_id"] = 'page';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|layout"] = 'floyd_flipped';

 return $overrides;
}
