<?php
/**
 * @file
 * menu_main.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function menu_main_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dhtml_menu_settings';
  $strongarm->value = array(
    'nav' => 'open',
    'animation' => array(
      'effects' => array(
        'height' => 'height',
        'opacity' => 'opacity',
      ),
      'speed' => 500,
    ),
    'effects' => array(
      'siblings' => 'close-same-tree',
      'children' => 'none',
      'remember' => 0,
    ),
    'filter' => array(
      'type' => 'blacklist',
      'list' => array(),
    ),
  );
  $export['dhtml_menu_settings'] = $strongarm;

  return $export;
}
