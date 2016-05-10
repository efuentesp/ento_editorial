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

  // Translatables
  // Included for use with string extractors like potx.
  t('Correo electrónico del Administrador de la Escuela. Este será usado como su usuario para acceder al sistema.');
  t('Descripción');
  t('Email');
  t('Email Administrador');
  t('Escuela');
  t('Escuela a la que está asignado el Nivel Escolar.');
  t('Evaluador asignado');
  t('Evaluador encargado de revisar las competencias de los Docentes de este Nivel.');
  t('Materias');
  t('Materias que imparte el Docente.');
  t('Nivel Educativo');
  t('Nivel Escolar');
  t('Nivel Escolar de la Escuela a la que pertenece el Docente.');
  t('Referencia hacia el Usuario del Administrador de la Escuela. Solo visible para el ADMINISTRADOR.');
  t('Usuario');
  t('Usuario Admin');
  t('Usuario asignado al Docente. Solo es visible para el ADMINISTRADOR.');
  t('Usuario asignado al Evaluador. Este campo solo es visible para el ADMINISTRADOR.');

  return $field_instances;
}
