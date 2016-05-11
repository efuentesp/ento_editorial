<?php
/**
 * @file
 * ento_editorial.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ento_editorial_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-carga_archivos-field_carga_archivos_anexos'.
  $field_instances['node-carga_archivos-field_carga_archivos_anexos'] = array(
    'bundle' => 'carga_archivos',
    'deleted' => 0,
    'description' => 'Archivos con Instrucciones que el usuario podrá descargar previo a subir sus propios archivos.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_carga_archivos_anexos',
    'label' => 'Archivos Anexos',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'archivos_instrucciones',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-carga_archivos-field_carga_archivos_instruccion'.
  $field_instances['node-carga_archivos-field_carga_archivos_instruccion'] = array(
    'bundle' => 'carga_archivos',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Instruciones que aparecerán antes de solicitar la carga de archivos.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_carga_archivos_instruccion',
    'label' => 'Instrucciones',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-cuestionario-field_cuestionario_descripcion'.
  $field_instances['node-cuestionario-field_cuestionario_descripcion'] = array(
    'bundle' => 'cuestionario',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cuestionario_descripcion',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-curso-field_curso_descripcion'.
  $field_instances['node-curso-field_curso_descripcion'] = array(
    'bundle' => 'curso',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_curso_descripcion',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-curso-field_curso_dimension'.
  $field_instances['node-curso-field_curso_dimension'] = array(
    'bundle' => 'curso',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_curso_dimension',
    'label' => 'Alcance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-curso-field_curso_imagen'.
  $field_instances['node-curso-field_curso_imagen'] = array(
    'bundle' => 'curso',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_curso_imagen',
    'label' => 'Imagen',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'cursos_imagenes',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-docente-field_docente_email'.
  $field_instances['node-docente-field_docente_email'] = array(
    'bundle' => 'docente',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docente_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-docente-field_docente_materias'.
  $field_instances['node-docente-field_docente_materias'] = array(
    'bundle' => 'docente',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Materias que imparte el Docente.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docente_materias',
    'label' => 'Materias',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-docente-field_docente_nivel_escuela'.
  $field_instances['node-docente-field_docente_nivel_escuela'] = array(
    'bundle' => 'docente',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nivel Escolar de la Escuela a la que pertenece el Docente.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_show_add_icon' => 2,
    'entityconnect_show_edit_icon' => 2,
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_docente_nivel_escuela',
    'label' => 'Nivel Escolar',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_url',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'edit_fallback' => 1,
        'entity_link' => array(
          'destination' => 'default',
          'full' => 0,
          'hover_title' => '',
          'teaser' => 0,
          'title' => '',
        ),
        'fallback' => 'select',
      ),
      'type' => 'entity_reference_url',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-docente-field_docente_usuario'.
  $field_instances['node-docente-field_docente_usuario'] = array(
    'bundle' => 'docente',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Usuario asignado al Docente. Solo es visible para el ADMINISTRADOR.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_show_add_icon' => 2,
    'entityconnect_show_edit_icon' => 2,
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_docente_usuario',
    'label' => 'Usuario',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-dummy_resultados_dimension-field_resultado_dimension'.
  $field_instances['node-dummy_resultados_dimension-field_resultado_dimension'] = array(
    'bundle' => 'dummy_resultados_dimension',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resultado_dimension',
    'label' => 'Dimensión',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-dummy_resultados_dimension-field_resultado_dimension_ref'.
  $field_instances['node-dummy_resultados_dimension-field_resultado_dimension_ref'] = array(
    'bundle' => 'dummy_resultados_dimension',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resultado_dimension_ref',
    'label' => 'Referencia a la Dimensión',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'node-dummy_resultados_dimension-field_resultado_nivel'.
  $field_instances['node-dummy_resultados_dimension-field_resultado_nivel'] = array(
    'bundle' => 'dummy_resultados_dimension',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resultado_nivel',
    'label' => 'Nivel',
    'required' => 1,
    'settings' => array(
      'max' => 4,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-escuela-field_escuela_admin_email'.
  $field_instances['node-escuela-field_escuela_admin_email'] = array(
    'bundle' => 'escuela',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Correo electrónico del Administrador de la Escuela. Este será usado como su usuario para acceder al sistema.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_escuela_admin_email',
    'label' => 'Email Administrador',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-escuela-field_escuela_admin_usuario'.
  $field_instances['node-escuela-field_escuela_admin_usuario'] = array(
    'bundle' => 'escuela',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Referencia hacia el Usuario del Administrador de la Escuela. Solo visible para el ADMINISTRADOR.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_show_add_icon' => 2,
    'entityconnect_show_edit_icon' => 2,
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_escuela_admin_usuario',
    'label' => 'Usuario Admin',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-evaluador-field_evaluador_email'.
  $field_instances['node-evaluador-field_evaluador_email'] = array(
    'bundle' => 'evaluador',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evaluador_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-evaluador-field_evaluador_usuario'.
  $field_instances['node-evaluador-field_evaluador_usuario'] = array(
    'bundle' => 'evaluador',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Usuario asignado al Evaluador. Este campo solo es visible para el ADMINISTRADOR.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_show_add_icon' => 2,
    'entityconnect_show_edit_icon' => 2,
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_evaluador_usuario',
    'label' => 'Usuario',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-nivel_escuela-field_nivel_educativo'.
  $field_instances['node-nivel_escuela-field_nivel_educativo'] = array(
    'bundle' => 'nivel_escuela',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nivel_educativo',
    'label' => 'Nivel Educativo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-nivel_escuela-field_nivel_escuela'.
  $field_instances['node-nivel_escuela-field_nivel_escuela'] = array(
    'bundle' => 'nivel_escuela',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Escuela a la que está asignado el Nivel Escolar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_show_add_icon' => 2,
    'entityconnect_show_edit_icon' => 2,
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_nivel_escuela',
    'label' => 'Escuela',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_url',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'edit_fallback' => 1,
        'entity_link' => array(
          'destination' => 'default',
          'full' => 0,
          'hover_title' => '',
          'teaser' => 0,
          'title' => 'Agregar Nivel',
        ),
        'fallback' => 'select',
      ),
      'type' => 'entity_reference_url',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-nivel_escuela-field_nivel_evaluador'.
  $field_instances['node-nivel_escuela-field_nivel_evaluador'] = array(
    'bundle' => 'nivel_escuela',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Evaluador encargado de revisar las competencias de los Docentes de este Nivel.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_nivel_evaluador',
    'label' => 'Evaluador asignado',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-dimensiones-field_dimensiones_cursos'.
  $field_instances['taxonomy_term-dimensiones-field_dimensiones_cursos'] = array(
    'bundle' => 'dimensiones',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_dimensiones_cursos',
    'label' => 'Cursos',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-niveles_desempeno-field_nivel_desempeno_color'.
  $field_instances['taxonomy_term-niveles_desempeno-field_nivel_desempeno_color'] = array(
    'bundle' => 'niveles_desempeno',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_nivel_desempeno_color',
    'label' => 'Color',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_default_widget',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alcance');
  t('Archivos Anexos');
  t('Archivos con Instrucciones que el usuario podrá descargar previo a subir sus propios archivos.');
  t('Color');
  t('Correo electrónico del Administrador de la Escuela. Este será usado como su usuario para acceder al sistema.');
  t('Cursos');
  t('Descripción');
  t('Dimensión');
  t('Email');
  t('Email Administrador');
  t('Escuela');
  t('Escuela a la que está asignado el Nivel Escolar.');
  t('Evaluador asignado');
  t('Evaluador encargado de revisar las competencias de los Docentes de este Nivel.');
  t('Imagen');
  t('Instrucciones');
  t('Instruciones que aparecerán antes de solicitar la carga de archivos.');
  t('Materias');
  t('Materias que imparte el Docente.');
  t('Nivel');
  t('Nivel Educativo');
  t('Nivel Escolar');
  t('Nivel Escolar de la Escuela a la que pertenece el Docente.');
  t('Referencia a la Dimensión');
  t('Referencia hacia el Usuario del Administrador de la Escuela. Solo visible para el ADMINISTRADOR.');
  t('Usuario');
  t('Usuario Admin');
  t('Usuario asignado al Docente. Solo es visible para el ADMINISTRADOR.');
  t('Usuario asignado al Evaluador. Este campo solo es visible para el ADMINISTRADOR.');

  return $field_instances;
}
