<!DOCTYPE html>
<!--[if lt IE 7]> <html class="lt-ie9 lt-ie8 lt-ie7" lang="<?php print $language->language ?>"> <![endif]-->
<!--[if IE 7]>    <html class="lt-ie9 lt-ie8" lang="<?php print $language->language ?>"> <![endif]-->
<!--[if IE 8]>    <html class="lt-ie9" lang="<?php print $language->language ?>"> <![endif]-->
<!--[if gt IE 8]><!--> <html lang="<?php print $language->language ?>"> <!--<![endif]-->

<head>
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css">
  <link href='https://fonts.googleapis.com/css?family=Roboto:400,100,100italic,300,300italic,400italic,500,500italic,700,700italic,900,900italic' rel='stylesheet' type='text/css'>
  <link href='https://fonts.googleapis.com/css?family=Lato:400,100,100italic,300,300italic,400italic,700,700italic,900,900italic' rel='stylesheet' type='text/css'>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <!--[if lt IE 8]>
      <p class="chromeframe">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> or <a href="http://www.google.com/chromeframe/?redirect=true">activate Google Chrome Frame</a> to improve your experience.</p>
  <![endif]-->

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

</body>
</html>
