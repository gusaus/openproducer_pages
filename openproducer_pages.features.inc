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
    $data['node:panopoly_page:default']->display->content['new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1']->position = 1; /* WAS: 0 */
    $data['node:panopoly_page:default']->display->content['new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b']->position = 2; /* WAS: 1 */
    $data['node:panopoly_page:default']->display->content['new-60459f60-d916-43fb-ac70-9d727534d21f'] = (object) array(
          'pid' => 'new-60459f60-d916-43fb-ac70-9d727534d21f',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'news-panel_pane_2',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'fields_override' => array(
              'field_featured_image' => 1,
              'title' => 0,
              'body' => 0,
              'nothing' => 1,
            ),
            'override_title' => '',
            'override_title_text' => '',
            'override_title_heading' => 'h2',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Recent News',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'hide_classes' => array(
                'hidden-xs' => 0,
                'hidden-sm' => 0,
                'hidden-md' => 0,
                'hidden-lg' => 0,
              ),
              'additional_classes' => array(
                'pull-left' => 0,
                'pull-right' => 0,
                'clearfix' => 0,
              ),
            ),
            'style' => 'bootstrap_styles:well',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '60459f60-d916-43fb-ac70-9d727534d21f',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-a5e43df4-4296-47d9-8328-b275f97ee739'] = (object) array(
          'pid' => 'new-a5e43df4-4296-47d9-8328-b275f97ee739',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'none',
            'id' => '',
            'class' => '',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'a5e43df4-4296-47d9-8328-b275f97ee739',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-f279ff6b-eec8-40ca-b0a9-b17d576dcee7'] = (object) array(
          'pid' => 'new-f279ff6b-eec8-40ca-b0a9-b17d576dcee7',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'events-panel_pane_3',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'more_link' => 1,
            'items_per_page' => 3,
            'fields_override' => array(
              'field_featured_image' => 1,
              'title' => 0,
              'field_event_date' => 0,
              'field_event_venue' => 0,
              'field_event_city' => 0,
              'field_event_state' => 0,
              'nothing' => 1,
            ),
            'override_title' => '',
            'override_title_text' => '',
            'override_title_heading' => 'h2',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Upcoming Shows',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'hide_classes' => array(
                'hidden-xs' => 0,
                'hidden-sm' => 0,
                'hidden-md' => 0,
                'hidden-lg' => 0,
              ),
              'additional_classes' => array(
                'pull-left' => 0,
                'pull-right' => 0,
                'clearfix' => 0,
              ),
            ),
            'style' => 'bootstrap_styles:well',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'f279ff6b-eec8-40ca-b0a9-b17d576dcee7',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-f3bf9c22-9b22-41d2-a57e-110951093871']->position = 3; /* WAS: 2 */
    $data['node:panopoly_page:default']->display->layout = 'floyd_flipped'; /* WAS: 'radix_bryant' */
    $data['node:panopoly_page:default']->display->panel_settings['contentmain'] = array(
      'style' => 'bootstrap_styles:well',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['contentmain']['additional_classes'] = array(
      'clearfix' => 'clearfix',
      'pull-left' => 0,
      'pull-right' => 0,
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['contentmain']['hide_classes'] = array(
      'hidden-xs' => 0,
      'hidden-sm' => 0,
      'hidden-md' => 0,
      'hidden-lg' => 0,
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['contentmain']['region_title'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][0] = 'new-a5e43df4-4296-47d9-8328-b275f97ee739'; /* WAS: 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][1] = 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1'; /* WAS: 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][2] = 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b'; /* WAS: 'new-f3bf9c22-9b22-41d2-a57e-110951093871' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][3] = 'new-f3bf9c22-9b22-41d2-a57e-110951093871'; /* WAS: 'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71' */
    $data['node:panopoly_page:default']->display->panels['sidebar'][0] = 'new-60459f60-d916-43fb-ac70-9d727534d21f'; /* WAS: 'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1' */
    $data['node:panopoly_page:default']->display->panels['sidebar'][1] = 'new-f279ff6b-eec8-40ca-b0a9-b17d576dcee7'; /* WAS: '' */
    unset($data['node:panopoly_page:default']->display->content['new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71']);
    unset($data['node:panopoly_page:default']->display->content['new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1']);
  }
}
