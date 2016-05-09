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
    'docente' => array(
      'name' => t('Docente'),
      'base' => 'node_content',
      'description' => t('Información del Docente que trabaja para una Escuela.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'escuela' => array(
      'name' => t('Escuela'),
      'base' => 'node_content',
      'description' => t('Información básica de la Escuela.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'evaluador' => array(
      'name' => t('Evaluador'),
      'base' => 'node_content',
      'description' => t('Información de la persona quien realizará la evaluación de un grupo de Docentes.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'nivel_escuela' => array(
      'name' => t('Nivel Escuela'),
      'base' => 'node_content',
      'description' => t('Nivel Escolar de una Escuela.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
