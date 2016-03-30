<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<?php
  $navbar_classes = str_replace('container', '', $navbar_classes = str_replace('navbar-default', '', $navbar_classes));
  $navbar_classes .= ' navbar-inverse navbar-fixed-top';
?>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="container row">
    <div class="col-md-5">
      <div class="navbar-header">

        <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
        <?php endif; ?>

          <?php if (!empty($site_name)): ?>
          <h1 class="name navbar-brand"><a href="<?php print $front_page; ?>"><?php print $site_name; ?></a></h1>
          <?php endif; ?>
          <?php if (!empty($site_slogan)): ?>
          <p class="slogan"><?php print $site_slogan; ?></p>
          <?php endif; ?>


        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>
    </div>
    <div class="col-md-7">
      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
          <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
          <?php endif; ?>
          <div class="navbar-collapse collapse">
          <nav role="navigation" id="main-top-menu">

            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </div>
</header>

<?php if (!empty($page['zoom'])): ?>
<div class="" id="zoom">
	<?php print render($page['zoom']); ?>
</div>  <!-- /#zoom -->
<?php endif; ?>
<div id="home-main-container-wrapper">
  <div class="main-container container">

    <header role="banner" id="page-header" >
      <!-- Site slogan removed
      <?php if (!empty($site_slogan)): ?>
          <p class="lead"><?php print $site_slogan; ?></p>
      <?php endif; ?>
      -->
      <div class="row">
        <?php print render($page['header']); ?>
      </div>
    </header> <!-- /#page-header -->

    <div class="row">	
<?php print $messages; ?>
      <?php if (!empty($page['preface_first'])): ?>
        <div class="col-lg-4" id="preface-first">
          <div class="">
            <div class=""><h2 class="line-right-left">Adolescents</h2></div>
            <div class="">
              <?php print render($page['preface_first']); ?>
            </div>
          </div>
        </div>  <!-- /#preface-first -->
      <?php endif; ?>

      <?php if (!empty($page['preface_second'])): ?>
        <div class="col-lg-4" id="preface-second">
          <div class="">
            <div class=""><h2 class="line-right-left">Parents</h2></div>
            <div class="">
              <?php print render($page['preface_second']); ?>
            </div>
          </div>
        </div>  <!-- /#preface-second -->
      <?php endif; ?>

      <?php if (!empty($page['preface_third'])): ?>
        <div class="col-lg-4" id="preface-third">
          <div class="">
            <div class=""><h2 class="line-right-left">Professionnels</h2></div>
            <div class="">
              <?php print render($page['preface_third']); ?>
            </div>
          </div>
        </div>  <!-- /#preface-third -->
      <?php endif; ?>

    </div>

    <div class="row">

      <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-4" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

      <?php
      if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
        $content_column_class = ' class="col-sm-4"';
      } elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
        $content_column_class = ' class="col-sm-8"';
      } else {
        $content_column_class = ' class="col-sm-12"';
      }
      ?>
      <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>
        <?php if (!empty($breadcrumb)): print $breadcrumb;
        endif; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
          <h1 class="page-header"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
      </section>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-4" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>

    </div>
  </div>
</div>

<footer class="footer" id="main-footer">

  <div class="footer-center container" >
  <?php print render($page['footer']); ?>
  </div>
  
 	<div class="footer-bottom container">
  <?php
  // Create a variable to hold the full path, in our theme, to the image.
  //   path_to_theme() takes care of creating the correct path for the active theme (which is likely your own custom one)
  $my_static_banner = path_to_theme() . '/images/logo_hp.jpg';
  $my_static_banner2 = path_to_theme() . '/images/logo-nv-region.jpg';
  $my_static_banner3 = path_to_theme() . '/images/logolrmp.jpg';
  $my_static_banner4 = path_to_theme() . '/images/dep_herault1.png';
  $my_static_banner5 = path_to_theme() . '/images/logo-ville-72-dpi-jpg.jpg';
  $my_static_banner6 = path_to_theme() . '/images/logo-minitere-culture.jpg';
  $my_static_banner7 = path_to_theme() . '/images/mj-pjjlogo.png';
  $my_static_banner8 = path_to_theme() . '/images/adages.jpg';
  $my_static_banner9 = path_to_theme() . '/images/chu.png';
  $my_static_banner10 = path_to_theme() . '/images/logo_ados.jpg';
  $my_static_banner11 = path_to_theme() . '/images/dep_herault1.png';
  ?>

		<div class="gauche">
			<img src="<?php print $my_static_banner ?>" alt="hp" style="width:120px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner2 ?>" alt="lr" style="width:55px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner3 ?>" alt="ars" style="width:65px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner4 ?>" alt="Accueil" style="width:95px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner5 ?>" alt="Accueil" style="width:35px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner6 ?>" alt="Accueil" style="width:40px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner7 ?>" alt="Accueil" style="width:50px; height:auto;padding:0.25em;">
		</div>	
	
		 <div class="droite">
			<img src="<?php print $my_static_banner8 ?>" alt="hp" style="width:75px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner9 ?>" alt="lr" style="width:80px; height:auto;padding:0.25em;">
			<img src="<?php print $my_static_banner10 ?>" alt="ars" style="width:50px; height:auto;padding:0.25em;">
		</div> 
	
	</div>

  
</footer>


