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

  // Translatables
  // Included for use with string extractors like potx.
  t('Escuela');

  return $menu_links;
}
