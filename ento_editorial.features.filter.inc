<?php
/**
 * @file
 * ento_editorial.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ento_editorial_filter_default_formats() {
  $formats = array();

  // Exported format: HTML Mail.
  $formats['html_mail'] = array(
    'format' => 'html_mail',
    'name' => 'HTML Mail',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_emogrifier' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '/',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
