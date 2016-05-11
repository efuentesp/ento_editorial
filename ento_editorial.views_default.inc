<?php
/**
 * @file
 * ento_editorial.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ento_editorial_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cuestionarios_asignados';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cuestionarios asignados';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cuestionarios asignados';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'webform_submission_count_node' => 'webform_submission_count_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'webform_submission_count_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  /* Field: Webform: Webform submission count */
  $handler->display->display_options['fields']['webform_submission_count_node']['id'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['table'] = 'node';
  $handler->display->display_options['fields']['webform_submission_count_node']['field'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['label'] = 'No. Respuestas';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cuestionario' => 'cuestionario',
  );

  /* Display: Block. Cuestionarios asignados */
  $handler = $view->new_display('block', 'Block. Cuestionarios asignados', 'block');
  $handler->display->display_options['display_description'] = 'Cuestionarios asignados al Usuario.';
  $export['cuestionarios_asignados'] = $view;

  $view = new view();
  $view->name = 'cursos_en_l_nea';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cursos en Línea';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cursos en Línea';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_curso_imagen']['id'] = 'field_curso_imagen';
  $handler->display->display_options['fields']['field_curso_imagen']['table'] = 'field_data_field_curso_imagen';
  $handler->display->display_options['fields']['field_curso_imagen']['field'] = 'field_curso_imagen';
  $handler->display->display_options['fields']['field_curso_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_curso_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curso_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_curso_imagen']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curso' => 'curso',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['cursos_en_l_nea'] = $view;

  $view = new view();
  $view->name = 'docentes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Docentes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Docentes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'nivel_escuela' => 'nivel_escuela',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_docente_email' => 'field_docente_email',
    'field_docente_materias' => 'field_docente_materias',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_docente_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_docente_materias' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Agregar Docente';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = '+ Agregar';
  $handler->display->display_options['header']['link']['path'] = 'node/add/docente/%1';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_docente_email']['id'] = 'field_docente_email';
  $handler->display->display_options['fields']['field_docente_email']['table'] = 'field_data_field_docente_email';
  $handler->display->display_options['fields']['field_docente_email']['field'] = 'field_docente_email';
  $handler->display->display_options['fields']['field_docente_email']['type'] = 'email_plain';
  /* Field: Content: Materias */
  $handler->display->display_options['fields']['field_docente_materias']['id'] = 'field_docente_materias';
  $handler->display->display_options['fields']['field_docente_materias']['table'] = 'field_data_field_docente_materias';
  $handler->display->display_options['fields']['field_docente_materias']['field'] = 'field_docente_materias';
  $handler->display->display_options['fields']['field_docente_materias']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_docente_materias']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Acciones';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info btn-sm';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" aria-hidden="true"></i> Editar';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-sm';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" aria-hidden="true"></i> Borrar';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nivel Escolar (field_docente_nivel_escuela) */
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['id'] = 'field_docente_nivel_escuela_target_id';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['table'] = 'field_data_field_docente_nivel_escuela';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['field'] = 'field_docente_nivel_escuela_target_id';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_docente_nivel_escuela_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'docente' => 'docente',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/docentes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Docentes';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['docentes'] = $view;

  $view = new view();
  $view->name = 'dummy_chart';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dummy Chart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dummy Chart';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_resultado_dimension' => 'field_resultado_dimension',
    'field_resultado_nivel' => 'field_resultado_nivel',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_resultado_dimension' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resultado_nivel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Relationship: Content: Referencia a la Dimensión (field_resultado_dimension_ref) */
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['id'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['table'] = 'field_data_field_resultado_dimension_ref';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['field'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['label'] = 'Dimensiones';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dimensiones_cursos_target_id']['id'] = 'field_dimensiones_cursos_target_id';
  $handler->display->display_options['relationships']['field_dimensiones_cursos_target_id']['table'] = 'field_data_field_dimensiones_cursos';
  $handler->display->display_options['relationships']['field_dimensiones_cursos_target_id']['field'] = 'field_dimensiones_cursos_target_id';
  $handler->display->display_options['relationships']['field_dimensiones_cursos_target_id']['relationship'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['relationships']['field_dimensiones_cursos_target_id']['label'] = 'Curso';
  $handler->display->display_options['relationships']['field_dimensiones_cursos_target_id']['required'] = TRUE;
  /* Field: Content: Dimensión */
  $handler->display->display_options['fields']['field_resultado_dimension']['id'] = 'field_resultado_dimension';
  $handler->display->display_options['fields']['field_resultado_dimension']['table'] = 'field_data_field_resultado_dimension';
  $handler->display->display_options['fields']['field_resultado_dimension']['field'] = 'field_resultado_dimension';
  /* Field: Content: Nivel */
  $handler->display->display_options['fields']['field_resultado_nivel']['id'] = 'field_resultado_nivel';
  $handler->display->display_options['fields']['field_resultado_nivel']['table'] = 'field_data_field_resultado_nivel';
  $handler->display->display_options['fields']['field_resultado_nivel']['field'] = 'field_resultado_nivel';
  $handler->display->display_options['fields']['field_resultado_nivel']['label'] = 'Autoevaluación';
  $handler->display->display_options['fields']['field_resultado_nivel']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Prioridad de Capacitación';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dummy_resultados_dimension' => 'dummy_resultados_dimension',
  );

  /* Display: Gráfica */
  $handler = $view->new_display('block', 'Gráfica', 'block');
  $handler->display->display_options['display_description'] = 'Resultados por Dimensión';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'areaspline';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_resultado_dimension';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_resultado_nivel' => 'field_resultado_nivel',
    'field_resultado_dimension' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_resultado_dimension' => '#2f7ed8',
    'field_resultado_nivel' => '#28b294',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '4';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referencia a la Dimensión (field_resultado_dimension_ref) */
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['id'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['table'] = 'field_data_field_resultado_dimension_ref';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['field'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['label'] = 'Dimensiones';
  $handler->display->display_options['relationships']['field_resultado_dimension_ref_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dimensión */
  $handler->display->display_options['fields']['field_resultado_dimension']['id'] = 'field_resultado_dimension';
  $handler->display->display_options['fields']['field_resultado_dimension']['table'] = 'field_data_field_resultado_dimension';
  $handler->display->display_options['fields']['field_resultado_dimension']['field'] = 'field_resultado_dimension';
  /* Field: Content: Nivel */
  $handler->display->display_options['fields']['field_resultado_nivel']['id'] = 'field_resultado_nivel';
  $handler->display->display_options['fields']['field_resultado_nivel']['table'] = 'field_data_field_resultado_nivel';
  $handler->display->display_options['fields']['field_resultado_nivel']['field'] = 'field_resultado_nivel';
  $handler->display->display_options['fields']['field_resultado_nivel']['label'] = 'Autoevaluación';
  $handler->display->display_options['fields']['field_resultado_nivel']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'Gráfica por Dimensión';

  /* Display: Mapa */
  $handler = $view->new_display('block', 'Mapa', 'block_1');
  $handler->display->display_options['display_description'] = 'Mapa de Aprendizaje';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_resultado_dimension_ref_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Prioridad de Capacitación';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dimensiones_cursos_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Cursos en línea';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_dimensiones_cursos_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Acción';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Inscribeme';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['link_class'] = 'btn btn-info';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nivel (field_resultado_nivel) */
  $handler->display->display_options['sorts']['field_resultado_nivel_value']['id'] = 'field_resultado_nivel_value';
  $handler->display->display_options['sorts']['field_resultado_nivel_value']['table'] = 'field_data_field_resultado_nivel';
  $handler->display->display_options['sorts']['field_resultado_nivel_value']['field'] = 'field_resultado_nivel_value';
  $handler->display->display_options['sorts']['field_resultado_nivel_value']['order'] = 'DESC';
  $export['dummy_chart'] = $view;

  $view = new view();
  $view->name = 'envio_evidencias_portafolio_ensenanza';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Envio Evidencias Portafolio Enseñanza';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Envio de Evidencia asignadas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  /* Field: Webform: Webform submission count */
  $handler->display->display_options['fields']['webform_submission_count_node']['id'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['table'] = 'node';
  $handler->display->display_options['fields']['webform_submission_count_node']['field'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['label'] = 'No. Respuestas';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carga_archivos' => 'carga_archivos',
  );

  /* Display: Block. Envío de Evidencias para Portafolio de Enseñanza asignada */
  $handler = $view->new_display('block', 'Block. Envío de Evidencias para Portafolio de Enseñanza asignada', 'block');
  $handler->display->display_options['display_description'] = 'Envío de Evidencias para Portafolio de Enseñanza asignados al Usuario.';
  $export['envio_evidencias_portafolio_ensenanza'] = $view;

  $view = new view();
  $view->name = 'escuelas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Escuelas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Escuelas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Agregar Escuela';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = '+ Agregar';
  $handler->display->display_options['header']['link']['path'] = 'node/add/escuela';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Acciones';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info btn-sm';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" aria-hidden="true"></i> Editar';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-sm';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" aria-hidden="true"></i> Borrar';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'escuela' => 'escuela',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'escuelas';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Escuelas';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['escuelas'] = $view;

  $view = new view();
  $view->name = 'evaluadores';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evaluadores';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evaluadores';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/evaluador" class="btn btn-primary"><span class="fa fa-plus" aria-hidden="true"></span> Agregar</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Acciones';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info btn-sm';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil"></i> Editar';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-sm';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash"></i> Borrar';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evaluador' => 'evaluador',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'evaluadores';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Evaluadores';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['evaluadores'] = $view;

  $view = new view();
  $view->name = 'niveles_de_desempe_o';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Niveles de Desempeño';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Niveles de Desempeño';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'niveles_desempeno' => 'niveles_desempeno',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['niveles_de_desempe_o'] = $view;

  $view = new view();
  $view->name = 'niveles_educativos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Niveles Educativos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Niveles Educativos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'escuela' => 'escuela',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nivel_educativo' => 'field_nivel_educativo',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nivel_educativo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Agregar';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = '+ Agregar';
  $handler->display->display_options['header']['link']['path'] = '/node/add/nivel-escuela/%1';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nivel Educativo */
  $handler->display->display_options['fields']['field_nivel_educativo']['id'] = 'field_nivel_educativo';
  $handler->display->display_options['fields']['field_nivel_educativo']['table'] = 'field_data_field_nivel_educativo';
  $handler->display->display_options['fields']['field_nivel_educativo']['field'] = 'field_nivel_educativo';
  $handler->display->display_options['fields']['field_nivel_educativo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nivel_educativo']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Acciones';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info btn-sm';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" aria-hidden="true"></i> Editar';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-sm';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" aria-hidden="true"></i> Borrar';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Escuela (field_nivel_escuela) */
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['id'] = 'field_nivel_escuela_target_id';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['table'] = 'field_data_field_nivel_escuela';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['field'] = 'field_nivel_escuela_target_id';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_nivel_escuela_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nivel_escuela' => 'nivel_escuela',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/niveles-educativos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Niveles Escolares';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['niveles_educativos'] = $view;

  $view = new view();
  $view->name = 'peril_docente';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Peril Docente';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Peril Docente';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_docente_usuario_node']['id'] = 'reverse_field_docente_usuario_node';
  $handler->display->display_options['relationships']['reverse_field_docente_usuario_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_docente_usuario_node']['field'] = 'reverse_field_docente_usuario_node';
  $handler->display->display_options['relationships']['reverse_field_docente_usuario_node']['label'] = 'Docente';
  $handler->display->display_options['relationships']['reverse_field_docente_usuario_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_docente_nivel_escuela_target_id']['id'] = 'field_docente_nivel_escuela_target_id';
  $handler->display->display_options['relationships']['field_docente_nivel_escuela_target_id']['table'] = 'field_data_field_docente_nivel_escuela';
  $handler->display->display_options['relationships']['field_docente_nivel_escuela_target_id']['field'] = 'field_docente_nivel_escuela_target_id';
  $handler->display->display_options['relationships']['field_docente_nivel_escuela_target_id']['relationship'] = 'reverse_field_docente_usuario_node';
  $handler->display->display_options['relationships']['field_docente_nivel_escuela_target_id']['label'] = 'Nivel Escolar';
  $handler->display->display_options['relationships']['field_docente_nivel_escuela_target_id']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'foto_perfil_96x96';
  /* Field: Content: Escuela */
  $handler->display->display_options['fields']['field_nivel_escuela']['id'] = 'field_nivel_escuela';
  $handler->display->display_options['fields']['field_nivel_escuela']['table'] = 'field_data_field_nivel_escuela';
  $handler->display->display_options['fields']['field_nivel_escuela']['field'] = 'field_nivel_escuela';
  $handler->display->display_options['fields']['field_nivel_escuela']['relationship'] = 'field_docente_nivel_escuela_target_id';
  $handler->display->display_options['fields']['field_nivel_escuela']['label'] = '';
  $handler->display->display_options['fields']['field_nivel_escuela']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nivel_escuela']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nivel_escuela']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nivel Educativo */
  $handler->display->display_options['fields']['field_nivel_educativo']['id'] = 'field_nivel_educativo';
  $handler->display->display_options['fields']['field_nivel_educativo']['table'] = 'field_data_field_nivel_educativo';
  $handler->display->display_options['fields']['field_nivel_educativo']['field'] = 'field_nivel_educativo';
  $handler->display->display_options['fields']['field_nivel_educativo']['relationship'] = 'field_docente_nivel_escuela_target_id';
  $handler->display->display_options['fields']['field_nivel_educativo']['label'] = '';
  $handler->display->display_options['fields']['field_nivel_educativo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nivel_educativo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nivel_educativo']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_docente_usuario_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Materias */
  $handler->display->display_options['fields']['field_docente_materias']['id'] = 'field_docente_materias';
  $handler->display->display_options['fields']['field_docente_materias']['table'] = 'field_data_field_docente_materias';
  $handler->display->display_options['fields']['field_docente_materias']['field'] = 'field_docente_materias';
  $handler->display->display_options['fields']['field_docente_materias']['relationship'] = 'reverse_field_docente_usuario_node';
  $handler->display->display_options['fields']['field_docente_materias']['label'] = '';
  $handler->display->display_options['fields']['field_docente_materias']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_docente_materias']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_docente_materias']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_docente_materias']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row m-b-lg m-t-lg">
	<div class="col-md-9">
		<div class="profile-image">
			[picture]
		</div>
		<div class="profile-info">
			<div class="">
				<div>
					<h3>
						[field_nivel_escuela] ([field_nivel_educativo])
					</h3>
					<h2 class="no-margins">
						[title]
					</h2>
					<h4>
						Docente
					</h4>
					<small>
						[name]
						[field_docente_materias]
					</small>
				</div>
			</div>
		</div>
	</div>

	<div class="col-md-3">
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['peril_docente'] = $view;

  return $export;
}
