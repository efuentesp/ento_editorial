<?php
/**
 * @file
 * ento_editorial.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ento_editorial_user_default_roles() {
  $roles = array();

  // Exported role: administrador escuela.
  $roles['administrador escuela'] = array(
    'name' => 'administrador escuela',
    'weight' => 5,
  );

  // Exported role: administrador plataforma.
  $roles['administrador plataforma'] = array(
    'name' => 'administrador plataforma',
    'weight' => 4,
  );

  return $roles;
}
