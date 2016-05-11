<?php
/**
 * @file
 * ento_editorial.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ento_editorial_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access example charts'.
  $permissions['access example charts'] = array(
    'name' => 'access example charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'docente' => 'docente',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access webform share functionality'.
  $permissions['access webform share functionality'] = array(
    'name' => 'access webform share functionality',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform_share',
  );

  // Exported permission: 'administer charts'.
  $permissions['administer charts'] = array(
    'name' => 'administer charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'choose htmlmail_plaintext'.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'htmlmail',
  );

  // Exported permission: 'create carga_archivos content'.
  $permissions['create carga_archivos content'] = array(
    'name' => 'create carga_archivos content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create cuestionario content'.
  $permissions['create cuestionario content'] = array(
    'name' => 'create cuestionario content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create curso content'.
  $permissions['create curso content'] = array(
    'name' => 'create curso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create docente content'.
  $permissions['create docente content'] = array(
    'name' => 'create docente content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dummy_resultados_dimension content'.
  $permissions['create dummy_resultados_dimension content'] = array(
    'name' => 'create dummy_resultados_dimension content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create escuela content'.
  $permissions['create escuela content'] = array(
    'name' => 'create escuela content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create evaluador content'.
  $permissions['create evaluador content'] = array(
    'name' => 'create evaluador content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_docente_usuario'.
  $permissions['create field_docente_usuario'] = array(
    'name' => 'create field_docente_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_escuela_admin_usuario'.
  $permissions['create field_escuela_admin_usuario'] = array(
    'name' => 'create field_escuela_admin_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_evaluador_usuario'.
  $permissions['create field_evaluador_usuario'] = array(
    'name' => 'create field_evaluador_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create nivel_escuela content'.
  $permissions['create nivel_escuela content'] = array(
    'name' => 'create nivel_escuela content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any carga_archivos content'.
  $permissions['delete any carga_archivos content'] = array(
    'name' => 'delete any carga_archivos content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any cuestionario content'.
  $permissions['delete any cuestionario content'] = array(
    'name' => 'delete any cuestionario content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any curso content'.
  $permissions['delete any curso content'] = array(
    'name' => 'delete any curso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any docente content'.
  $permissions['delete any docente content'] = array(
    'name' => 'delete any docente content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dummy_resultados_dimension content'.
  $permissions['delete any dummy_resultados_dimension content'] = array(
    'name' => 'delete any dummy_resultados_dimension content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any escuela content'.
  $permissions['delete any escuela content'] = array(
    'name' => 'delete any escuela content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any evaluador content'.
  $permissions['delete any evaluador content'] = array(
    'name' => 'delete any evaluador content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nivel_escuela content'.
  $permissions['delete any nivel_escuela content'] = array(
    'name' => 'delete any nivel_escuela content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own carga_archivos content'.
  $permissions['delete own carga_archivos content'] = array(
    'name' => 'delete own carga_archivos content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own cuestionario content'.
  $permissions['delete own cuestionario content'] = array(
    'name' => 'delete own cuestionario content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own curso content'.
  $permissions['delete own curso content'] = array(
    'name' => 'delete own curso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own docente content'.
  $permissions['delete own docente content'] = array(
    'name' => 'delete own docente content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dummy_resultados_dimension content'.
  $permissions['delete own dummy_resultados_dimension content'] = array(
    'name' => 'delete own dummy_resultados_dimension content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own escuela content'.
  $permissions['delete own escuela content'] = array(
    'name' => 'delete own escuela content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own evaluador content'.
  $permissions['delete own evaluador content'] = array(
    'name' => 'delete own evaluador content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nivel_escuela content'.
  $permissions['delete own nivel_escuela content'] = array(
    'name' => 'delete own nivel_escuela content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete terms in dimensiones'.
  $permissions['delete terms in dimensiones'] = array(
    'name' => 'delete terms in dimensiones',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in materias_educativas'.
  $permissions['delete terms in materias_educativas'] = array(
    'name' => 'delete terms in materias_educativas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in niveles_desempeno'.
  $permissions['delete terms in niveles_desempeno'] = array(
    'name' => 'delete terms in niveles_desempeno',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in niveles_educativos'.
  $permissions['delete terms in niveles_educativos'] = array(
    'name' => 'delete terms in niveles_educativos',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any carga_archivos content'.
  $permissions['edit any carga_archivos content'] = array(
    'name' => 'edit any carga_archivos content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any cuestionario content'.
  $permissions['edit any cuestionario content'] = array(
    'name' => 'edit any cuestionario content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any curso content'.
  $permissions['edit any curso content'] = array(
    'name' => 'edit any curso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any docente content'.
  $permissions['edit any docente content'] = array(
    'name' => 'edit any docente content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dummy_resultados_dimension content'.
  $permissions['edit any dummy_resultados_dimension content'] = array(
    'name' => 'edit any dummy_resultados_dimension content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any escuela content'.
  $permissions['edit any escuela content'] = array(
    'name' => 'edit any escuela content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any evaluador content'.
  $permissions['edit any evaluador content'] = array(
    'name' => 'edit any evaluador content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nivel_escuela content'.
  $permissions['edit any nivel_escuela content'] = array(
    'name' => 'edit any nivel_escuela content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_docente_usuario'.
  $permissions['edit field_docente_usuario'] = array(
    'name' => 'edit field_docente_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_escuela_admin_usuario'.
  $permissions['edit field_escuela_admin_usuario'] = array(
    'name' => 'edit field_escuela_admin_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_evaluador_usuario'.
  $permissions['edit field_evaluador_usuario'] = array(
    'name' => 'edit field_evaluador_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own carga_archivos content'.
  $permissions['edit own carga_archivos content'] = array(
    'name' => 'edit own carga_archivos content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own cuestionario content'.
  $permissions['edit own cuestionario content'] = array(
    'name' => 'edit own cuestionario content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own curso content'.
  $permissions['edit own curso content'] = array(
    'name' => 'edit own curso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own docente content'.
  $permissions['edit own docente content'] = array(
    'name' => 'edit own docente content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dummy_resultados_dimension content'.
  $permissions['edit own dummy_resultados_dimension content'] = array(
    'name' => 'edit own dummy_resultados_dimension content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own escuela content'.
  $permissions['edit own escuela content'] = array(
    'name' => 'edit own escuela content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own evaluador content'.
  $permissions['edit own evaluador content'] = array(
    'name' => 'edit own evaluador content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_docente_usuario'.
  $permissions['edit own field_docente_usuario'] = array(
    'name' => 'edit own field_docente_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_escuela_admin_usuario'.
  $permissions['edit own field_escuela_admin_usuario'] = array(
    'name' => 'edit own field_escuela_admin_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_evaluador_usuario'.
  $permissions['edit own field_evaluador_usuario'] = array(
    'name' => 'edit own field_evaluador_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own nivel_escuela content'.
  $permissions['edit own nivel_escuela content'] = array(
    'name' => 'edit own nivel_escuela content',
    'roles' => array(
      'administrador plataforma' => 'administrador plataforma',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in dimensiones'.
  $permissions['edit terms in dimensiones'] = array(
    'name' => 'edit terms in dimensiones',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in materias_educativas'.
  $permissions['edit terms in materias_educativas'] = array(
    'name' => 'edit terms in materias_educativas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in niveles_desempeno'.
  $permissions['edit terms in niveles_desempeno'] = array(
    'name' => 'edit terms in niveles_desempeno',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in niveles_educativos'.
  $permissions['edit terms in niveles_educativos'] = array(
    'name' => 'edit terms in niveles_educativos',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'use text format html_mail'.
  $permissions['use text format html_mail'] = array(
    'name' => 'use text format html_mail',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view field_docente_usuario'.
  $permissions['view field_docente_usuario'] = array(
    'name' => 'view field_docente_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_escuela_admin_usuario'.
  $permissions['view field_escuela_admin_usuario'] = array(
    'name' => 'view field_escuela_admin_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_evaluador_usuario'.
  $permissions['view field_evaluador_usuario'] = array(
    'name' => 'view field_evaluador_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_docente_usuario'.
  $permissions['view own field_docente_usuario'] = array(
    'name' => 'view own field_docente_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_escuela_admin_usuario'.
  $permissions['view own field_escuela_admin_usuario'] = array(
    'name' => 'view own field_escuela_admin_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_evaluador_usuario'.
  $permissions['view own field_evaluador_usuario'] = array(
    'name' => 'view own field_evaluador_usuario',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
