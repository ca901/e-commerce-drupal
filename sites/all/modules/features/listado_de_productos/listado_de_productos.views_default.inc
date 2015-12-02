<?php
/**
 * @file
 * listado_de_productos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function listado_de_productos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'listado_de_productos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listado de productos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de Productos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'productos' => 'productos',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: manufacturer */
  $handler->display->display_options['fields']['field_manufacturer']['id'] = 'field_manufacturer';
  $handler->display->display_options['fields']['field_manufacturer']['table'] = 'field_data_field_manufacturer';
  $handler->display->display_options['fields']['field_manufacturer']['field'] = 'field_manufacturer';
  /* Field: Content: price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: image-product */
  $handler->display->display_options['fields']['field_image_product']['id'] = 'field_image_product';
  $handler->display->display_options['fields']['field_image_product']['table'] = 'field_data_field_image_product';
  $handler->display->display_options['fields']['field_image_product']['field'] = 'field_image_product';
  $handler->display->display_options['fields']['field_image_product']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_product']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'listado-de-productos';
  $translatables['listado_de_productos'] = array(
    t('Master'),
    t('Listado de Productos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('manufacturer'),
    t('price'),
    t('image-product'),
  );
  $export['listado_de_productos'] = $view;

  return $export;
}
