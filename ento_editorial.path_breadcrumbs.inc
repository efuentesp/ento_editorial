<?php
/**
 * @file
 * ento_editorial.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function ento_editorial_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'administrar_escuelas';
  $path_breadcrumb->name = 'Escuela (Administrar)';
  $path_breadcrumb->path = 'escuelas';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -100;
  $export['administrar_escuelas'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'crear_escuela';
  $path_breadcrumb->name = 'Escuela (Agregar)';
  $path_breadcrumb->path = 'node/add/escuela';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => 'Agregar Escuela',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -99;
  $export['crear_escuela'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'docente_administrar';
  $path_breadcrumb->name = 'Docente (Administrar)';
  $path_breadcrumb->path = 'node/%node/docentes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-nivel-escuela:title',
      2 => 'Niveles Escolares',
      3 => '%node:title',
      4 => 'Docentes',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-nivel-escuela:nid',
      2 => 'node/%node:field-nivel-escuela:nid/niveles-educativos',
      3 => 'node/%node:nid',
      4 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'nivel_escuela' => 'nivel_escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -90;
  $export['docente_administrar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'docente_agregar';
  $path_breadcrumb->name = 'Docente (Agregar)';
  $path_breadcrumb->path = 'node/add/docente/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-nivel-escuela:title',
      2 => 'Niveles Escolares',
      3 => '%node:title',
      4 => 'Docentes',
      5 => 'Agregar Docente',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-nivel-escuela:nid',
      2 => 'node/%node:field-nivel-escuela:nid/niveles-educativos',
      3 => 'node/%node:nid',
      4 => 'node/%node:nid/docentes',
      5 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 3,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -89;
  $export['docente_agregar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'docente_editar';
  $path_breadcrumb->name = 'Docente (Editar)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-docente-nivel-escuela:title',
      2 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-docente-nivel-escuela:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'docente' => 'docente',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -87;
  $export['docente_editar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'docente_editar_clone';
  $path_breadcrumb->name = 'Docente (Borrar)';
  $path_breadcrumb->path = 'node/%node/delete';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-docente-nivel-escuela:title',
      2 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-docente-nivel-escuela:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'docente' => 'docente',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -86;
  $export['docente_editar_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'docente_ver';
  $path_breadcrumb->name = 'Docente (Ver)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-docente-nivel-escuela:title',
      2 => 'Niveles Escolares',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-docente-nivel-escuela:nid',
      2 => 'node/%node:field-docente-nivel-escuela:nid/niveles-educativos',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'docente' => 'docente',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -88;
  $export['docente_ver'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'escuela_borrar';
  $path_breadcrumb->name = 'Escuela (Borrar)';
  $path_breadcrumb->path = 'node/%node/delete';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'escuela' => 'escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -96;
  $export['escuela_borrar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'escuela_editar';
  $path_breadcrumb->name = 'Escuela (Editar)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'escuela' => 'escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -97;
  $export['escuela_editar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'escuela_ver';
  $path_breadcrumb->name = 'Escuela (Ver)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'escuela' => 'escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -98;
  $export['escuela_ver'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nivel_educativo_administrar';
  $path_breadcrumb->name = 'Nivel Educativo (Administrar)';
  $path_breadcrumb->path = 'node/%node/niveles-educativos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:title',
      2 => 'Niveles Escolares',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -95;
  $export['nivel_educativo_administrar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nivel_educativo_agregar';
  $path_breadcrumb->name = 'Nivel Educativo (Agregar)';
  $path_breadcrumb->path = 'node/add/nivel-escuela/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:title',
      2 => 'Niveles Escolares',
      3 => 'Agregar Nivel Escolar',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:nid',
      2 => 'node/%node:nid/niveles-educativos',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 3,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -94;
  $export['nivel_educativo_agregar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nivel_educativo_borrar';
  $path_breadcrumb->name = 'Nivel Educativo (Borrar)';
  $path_breadcrumb->path = 'node/%node/delete';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-nivel-escuela:title',
      2 => 'Niveles Escolares',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-nivel-escuela:nid',
      2 => 'node/%node:field-nivel-escuela:nid/niveles-educativos',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'nivel_escuela' => 'nivel_escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['nivel_educativo_borrar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nivel_educativo_editar';
  $path_breadcrumb->name = 'Nivel Educativo (Editar)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-nivel-escuela:title',
      2 => 'Niveles Escolares',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-nivel-escuela:nid',
      2 => 'node/%node:field-nivel-escuela:nid/niveles-educativos',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'nivel_escuela' => 'nivel_escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['nivel_educativo_editar'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nivel_educativo_ver';
  $path_breadcrumb->name = 'Nivel Educativo (Ver)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Escuelas',
      1 => '%node:field-nivel-escuela:title',
      2 => 'Niveles Escolares',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => 'escuelas',
      1 => 'node/%node:field-nivel-escuela:nid',
      2 => 'node/%node:field-nivel-escuela:nid/niveles-educativos',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'nivel_escuela' => 'nivel_escuela',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -93;
  $export['nivel_educativo_ver'] = $path_breadcrumb;

  return $export;
}
