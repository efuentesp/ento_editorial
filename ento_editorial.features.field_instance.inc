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

  // Translatables
  // Included for use with string extractors like potx.
  t('Correo electrónico del Administrador de la Escuela. Este será usado como su usuario para acceder al sistema.');
  t('Email Administrador');
  t('Referencia hacia el Usuario del Administrador de la Escuela. Solo visible para el ADMINISTRADOR.');
  t('Usuario Admin');

  return $field_instances;
}
