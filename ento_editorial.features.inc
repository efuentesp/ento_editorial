<?php
/**
 * @file
 * ento_editorial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ento_editorial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ento_editorial_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ento_editorial_image_default_styles() {
  $styles = array();

  // Exported image style: foto_perfil_96x96.
  $styles['foto_perfil_96x96'] = array(
    'label' => 'Foto Perfil 96x96',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 96,
          'height' => 96,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ento_editorial_node_info() {
  $items = array(
    'carga_archivos' => array(
      'name' => t('Carga Archivos'),
      'base' => 'node_content',
      'description' => t('Formulario para la carga de archivos.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'cuestionario' => array(
      'name' => t('Cuestionario'),
      'base' => 'node_content',
      'description' => t('Instrumento de investigación que consiste en una serie de preguntas y otras indicaciones con el propósito de obtener información de los consultados.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'curso' => array(
      'name' => t('Curso'),
      'base' => 'node_content',
      'description' => t('Información del Curso en línea.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'docente' => array(
      'name' => t('Docente'),
      'base' => 'node_content',
      'description' => t('Información del Docente que trabaja para una Escuela.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'dummy_resultados_dimension' => array(
      'name' => t('Dummy Resultados Dimension'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
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
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
