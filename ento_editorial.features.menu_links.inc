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

  // Exported menu link: main-menu_escuelas:escuelas.
  $menu_links['main-menu_escuelas:escuelas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'escuelas',
    'router_path' => 'escuelas',
    'link_title' => 'Escuelas',
    'options' => array(
      'identifier' => 'main-menu_escuelas:escuelas',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: main-menu_evaluadores:evaluadores.
  $menu_links['main-menu_evaluadores:evaluadores'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'evaluadores',
    'router_path' => 'evaluadores',
    'link_title' => 'Evaluadores',
    'options' => array(
      'identifier' => 'main-menu_evaluadores:evaluadores',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Escuelas');
  t('Evaluadores');

  return $menu_links;
}
