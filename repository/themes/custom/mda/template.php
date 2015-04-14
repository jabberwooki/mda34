<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_theme().
 * 
 */
function mda_theme(&$existing, $type, $theme, $path) {
	bootstrap_include($theme, 'theme/system/page.vars.php');
	$hooks = array();
	return $hooks;
}