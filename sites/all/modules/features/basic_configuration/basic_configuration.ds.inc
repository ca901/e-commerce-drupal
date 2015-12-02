<?php
/**
 * @file
 * basic_configuration.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function basic_configuration_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto_1|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto_1';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'path',
        2 => 'body',
        3 => 'field_product_image',
        4 => 'field_product_description',
        5 => 'field_fabricante',
        6 => 'field_precio',
      ),
      'hidden' => array(
        7 => 'field_review_reciente',
        8 => 'field_profile_picture',
        9 => 'field_profile_names',
        10 => 'field_review_comment',
        11 => 'field_rating_review',
        12 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'path' => 'ds_content',
      'body' => 'ds_content',
      'field_product_image' => 'ds_content',
      'field_product_description' => 'ds_content',
      'field_fabricante' => 'ds_content',
      'field_precio' => 'ds_content',
      'field_review_reciente' => 'hidden',
      'field_profile_picture' => 'hidden',
      'field_profile_names' => 'hidden',
      'field_review_comment' => 'hidden',
      'field_rating_review' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|producto_1|form'] = $ds_layout;

  return $export;
}
