<?php
/**
 * @file
 * ento_editorial.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ento_editorial_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ento_editorial_node_info() {
  $items = array(
    'escuela' => array(
      'name' => t('Escuela'),
      'base' => 'node_content',
      'description' => t('Información básica de la Escuela.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
