<?php
/**
 * Returns a rendered MDA shortcut block.
 *
 * @ingroup themeable
 */
function theme_mda_shortcut_block($variables) {
	// If saved block url suffix (.dev, .org ...) 
	// and running instance (local, staging, prod) domain suffix are different,
	// we must replace block url suffix by domain suffix.
	$current_domain = domain_get_domain();
	$current_domain_suffix = mda_url_suffix($current_domain['subdomain']);
	$block_url = $variables['mda_shortcut_data']['url'];
	$block_url_suffix = mda_url_suffix($block_url);
	if ($current_domain_suffix != $block_url_suffix) {
		$block_url = str_replace($block_url_suffix, $current_domain_suffix, $block_url);
	}
	
	// Build shortcut block content.
	$output = '<a href="http://'. $block_url . '">';
	$output .= mda_tag_shortcut_title($variables['mda_shortcut_data']['title'],$variables['mda_shortcut_data']['title_tag']);
	$output .= '<p class="mda-shortcut-ados-text">' . $variables['mda_shortcut_data']['text'] . '</p>';;
	$output .= '</a>';
	
	return $output;
}

/**
 * Helper functions.
 */
function mda_tag_shortcut_title($title,$tag) {
	if ($tag == 'aucune') {
		return $title;
	}
	return '<' . $tag . '>' . $title . '</' . $tag . '>';
}

function mda_url_suffix($url) {
	$parts = explode('.mda34.', $url);
	$suffix = $parts[1];
	$subparts = explode('/', $suffix);
	return $subparts[0];
}