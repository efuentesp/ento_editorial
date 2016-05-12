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

  // Exported menu link: main-menu_anlisis-de-resultados:node/19.
  $menu_links['main-menu_anlisis-de-resultados:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Análisis de Resultados',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'bar-chart',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_anlisis-de-resultados:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_cursos-en-lnea:node/20.
  $menu_links['main-menu_cursos-en-lnea:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Cursos en línea',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'graduation-cap',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'main-menu_cursos-en-lnea:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
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
    'weight' => -49,
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_preguntas-frecuentes:node/22.
  $menu_links['main-menu_preguntas-frecuentes:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Preguntas Frecuentes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'question-circle',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'main-menu_preguntas-frecuentes:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_video-demo-plataforma:node/21.
  $menu_links['main-menu_video-demo-plataforma:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Video Demo Plataforma',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'video-camera',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_video-demo-plataforma:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Análisis de Resultados');
  t('Cursos en línea');
  t('Escuelas');
  t('Evaluadores');
  t('Preguntas Frecuentes');
  t('Video Demo Plataforma');

  return $menu_links;
}
