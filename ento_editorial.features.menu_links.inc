<?php
/**
 * @file
 * ento_editorial.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ento_editorial_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_escuelas:escuelas.
  $menu_links['main-menu_escuelas:escuelas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'escuelas',
    'router_path' => 'escuelas',
    'link_title' => 'Escuelas',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'bell-o',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_escuelas:escuelas',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: main-menu_evaluadores:evaluadores.
  $menu_links['main-menu_evaluadores:evaluadores'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'evaluadores',
    'router_path' => 'evaluadores',
    'link_title' => 'Evaluadores',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'search',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_evaluadores:evaluadores',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
  );
  // Exported menu link: navigation_cuestionario:node/add/cuestionario.
  $menu_links['navigation_cuestionario:node/add/cuestionario'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/cuestionario',
    'router_path' => 'node/add/cuestionario',
    'link_title' => 'Cuestionario',
    'options' => array(
      'attributes' => array(
        'title' => 'Instrumento de investigación que consiste en una serie de preguntas y otras indicaciones con el propósito de obtener información de los consultados.',
      ),
      'identifier' => 'navigation_cuestionario:node/add/cuestionario',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_docente:node/add/docente.
  $menu_links['navigation_docente:node/add/docente'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/docente',
    'router_path' => 'node/add/docente',
    'link_title' => 'Docente',
    'options' => array(
      'attributes' => array(
        'title' => 'Información del Docente que trabaja para una Escuela.',
      ),
      'identifier' => 'navigation_docente:node/add/docente',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_escuela:node/add/escuela.
  $menu_links['navigation_escuela:node/add/escuela'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/escuela',
    'router_path' => 'node/add/escuela',
    'link_title' => 'Escuela',
    'options' => array(
      'attributes' => array(
        'title' => 'Información básica de la Escuela.',
      ),
      'identifier' => 'navigation_escuela:node/add/escuela',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_evaluador:node/add/evaluador.
  $menu_links['navigation_evaluador:node/add/evaluador'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/evaluador',
    'router_path' => 'node/add/evaluador',
    'link_title' => 'Evaluador',
    'options' => array(
      'attributes' => array(
        'title' => 'Información de la persona quien realizará la evaluación de un grupo de Docentes.',
      ),
      'identifier' => 'navigation_evaluador:node/add/evaluador',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_nivel-escuela:node/add/nivel-escuela.
  $menu_links['navigation_nivel-escuela:node/add/nivel-escuela'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/nivel-escuela',
    'router_path' => 'node/add/nivel-escuela',
    'link_title' => 'Nivel Escuela',
    'options' => array(
      'attributes' => array(
        'title' => 'Nivel Escolar de una Escuela.',
      ),
      'identifier' => 'navigation_nivel-escuela:node/add/nivel-escuela',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cuestionario');
  t('Docente');
  t('Escuela');
  t('Escuelas');
  t('Evaluador');
  t('Evaluadores');
  t('Nivel Escuela');

  return $menu_links;
}
