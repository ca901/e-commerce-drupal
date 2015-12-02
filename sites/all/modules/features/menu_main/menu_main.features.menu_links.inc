<?php
/**
 * @file
 * menu_main.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_main_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_categoras:<front>
  $menu_links['main-menu_categoras:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Categorías',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_categoras:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_cmo-comprar:<front>
  $menu_links['main-menu_cmo-comprar:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Cómo comprar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_cmo-comprar:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contacto:<front>
  $menu_links['main-menu_contacto:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contacto:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_elephone:taxonomy/term/9
  $menu_links['main-menu_elephone:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'ELEPHONE',
    'options' => array(
      'attributes' => array(
        'title' => 'ELEPHONE',
      ),
      'identifier' => 'main-menu_elephone:taxonomy/term/9',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_htc:taxonomy/term/12
  $menu_links['main-menu_htc:taxonomy/term/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/12',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'HTC',
    'options' => array(
      'attributes' => array(
        'title' => 'HTC',
      ),
      'identifier' => 'main-menu_htc:taxonomy/term/12',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_huawei:taxonomy/term/15
  $menu_links['main-menu_huawei:taxonomy/term/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/15',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'HUAWEI',
    'options' => array(
      'attributes' => array(
        'title' => 'HUAWEI',
      ),
      'identifier' => 'main-menu_huawei:taxonomy/term/15',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_iphone:taxonomy/term/10
  $menu_links['main-menu_iphone:taxonomy/term/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'IPHONE',
    'options' => array(
      'attributes' => array(
        'title' => 'IPHONE',
      ),
      'identifier' => 'main-menu_iphone:taxonomy/term/10',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_nokia:taxonomy/term/14
  $menu_links['main-menu_nokia:taxonomy/term/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'NOKIA',
    'options' => array(
      'attributes' => array(
        'title' => 'NOKIA',
      ),
      'identifier' => 'main-menu_nokia:taxonomy/term/14',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_one-plus:taxonomy/term/11
  $menu_links['main-menu_one-plus:taxonomy/term/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/11',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'ONE PLUS',
    'options' => array(
      'attributes' => array(
        'title' => 'ONE PLUS',
      ),
      'identifier' => 'main-menu_one-plus:taxonomy/term/11',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_samsung:taxonomy/term/16
  $menu_links['main-menu_samsung:taxonomy/term/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'SAMSUNG',
    'options' => array(
      'attributes' => array(
        'title' => 'SAMSUNG',
      ),
      'identifier' => 'main-menu_samsung:taxonomy/term/16',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 6,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: main-menu_xiaomi:taxonomy/term/13
  $menu_links['main-menu_xiaomi:taxonomy/term/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/13',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'XIAOMI',
    'options' => array(
      'attributes' => array(
        'title' => 'XIAOMI',
      ),
      'identifier' => 'main-menu_xiaomi:taxonomy/term/13',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 7,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categoras:<front>',
  );
  // Exported menu link: management_dhtml-menu:admin/config/user-interface/dhtml_menu
  $menu_links['management_dhtml-menu:admin/config/user-interface/dhtml_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/dhtml_menu',
    'router_path' => 'admin/config/user-interface/dhtml_menu',
    'link_title' => 'DHTML Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behavior of DHTML Menu.',
      ),
      'identifier' => 'management_dhtml-menu:admin/config/user-interface/dhtml_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: menu-flexslider-example_slider-wthumbnail-slider-views:flexslider-views-example-with-thumbnail-slider
  $menu_links['menu-flexslider-example_slider-wthumbnail-slider-views:flexslider-views-example-with-thumbnail-slider'] = array(
    'menu_name' => 'menu-flexslider-example',
    'link_path' => 'flexslider-views-example-with-thumbnail-slider',
    'router_path' => 'flexslider-views-example-with-thumbnail-slider',
    'link_title' => 'slider w/thumbnail slider (Views)',
    'options' => array(
      'identifier' => 'menu-flexslider-example_slider-wthumbnail-slider-views:flexslider-views-example-with-thumbnail-slider',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorías');
  t('Contacto');
  t('Cómo comprar');
  t('DHTML Menu');
  t('ELEPHONE');
  t('HTC');
  t('HUAWEI');
  t('Home');
  t('IPHONE');
  t('NOKIA');
  t('ONE PLUS');
  t('SAMSUNG');
  t('XIAOMI');
  t('slider w/thumbnail slider (Views)');

  return $menu_links;
}
