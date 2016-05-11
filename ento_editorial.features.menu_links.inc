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
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'th-large',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
  // Exported menu link: navigation_carga-archivos:node/add/carga-archivos.
  $menu_links['navigation_carga-archivos:node/add/carga-archivos'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/carga-archivos',
    'router_path' => 'node/add/carga-archivos',
    'link_title' => 'Carga Archivos',
    'options' => array(
      'attributes' => array(
        'title' => 'Formulario para la carga de archivos.',
      ),
      'identifier' => 'navigation_carga-archivos:node/add/carga-archivos',
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
  // Exported menu link: navigation_charts-examples:charts/examples.
  $menu_links['navigation_charts-examples:charts/examples'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'charts/examples',
    'router_path' => 'charts/examples',
    'link_title' => 'Charts examples',
    'options' => array(
      'identifier' => 'navigation_charts-examples:charts/examples',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: navigation_curso:node/add/curso.
  $menu_links['navigation_curso:node/add/curso'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/curso',
    'router_path' => 'node/add/curso',
    'link_title' => 'Curso',
    'options' => array(
      'attributes' => array(
        'title' => 'Información del Curso en línea.',
      ),
      'identifier' => 'navigation_curso:node/add/curso',
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
  // Exported menu link: navigation_dummy-resultados-dimension:node/add/dummy-resultados-dimension.
  $menu_links['navigation_dummy-resultados-dimension:node/add/dummy-resultados-dimension'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/dummy-resultados-dimension',
    'router_path' => 'node/add/dummy-resultados-dimension',
    'link_title' => 'Dummy Resultados Dimension',
    'options' => array(
      'identifier' => 'navigation_dummy-resultados-dimension:node/add/dummy-resultados-dimension',
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
  // Exported menu link: user-menu_mi-cuenta:user.
  $menu_links['user-menu_mi-cuenta:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Mi Cuenta',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'user',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'user-menu_mi-cuenta:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: user-menu_salir:user/logout.
  $menu_links['user-menu_salir:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Salir',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'sign-out',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'user-menu_salir:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Análisis de Resultados');
  t('Carga Archivos');
  t('Charts examples');
  t('Cuestionario');
  t('Curso');
  t('Cursos en línea');
  t('Docente');
  t('Dummy Resultados Dimension');
  t('Escuela');
  t('Escuelas');
  t('Evaluador');
  t('Evaluadores');
  t('Inicio');
  t('Mi Cuenta');
  t('Nivel Escuela');
  t('Preguntas Frecuentes');
  t('Salir');
  t('Video Demo Plataforma');

  return $menu_links;
}
