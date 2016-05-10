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

  // Exported permission: 'access webform share functionality'.
  $permissions['access webform share functionality'] = array(
    'name' => 'access webform share functionality',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform_share',
  );

  // Exported permission: 'create cuestionario content'.
  $permissions['create cuestionario content'] = array(
    'name' => 'create cuestionario content',
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

  // Exported permission: 'delete any cuestionario content'.
  $permissions['delete any cuestionario content'] = array(
    'name' => 'delete any cuestionario content',
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

  // Exported permission: 'delete own cuestionario content'.
  $permissions['delete own cuestionario content'] = array(
    'name' => 'delete own cuestionario content',
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

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any cuestionario content'.
  $permissions['edit any cuestionario content'] = array(
    'name' => 'edit any cuestionario content',
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

  // Exported permission: 'edit own cuestionario content'.
  $permissions['edit own cuestionario content'] = array(
    'name' => 'edit own cuestionario content',
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

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  return $permissions;
}
