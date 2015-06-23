<?php

function mda_settings_form() {
	// Restricted access information page.
	$form['mda_resources_access'] = array(
			'#type' => 'fieldset',
			'#title' => 'Page d\'infos sur l\'accès aux ressources MDA',
			'#description' => 'Information affichée à un utilisateur non connecté essayant de voir une ressource dont la visibilité est "professionnels".',
	);
	
	$default_text = "<p>L'accès à cette ressource est réservée aux professionnels possédant un compte sur ce site.</p>\n";
	$default_text .= "<p><a href=" . "/user" . ">Accès au formulaire de connexion</a>.</p>\n";
	$default_text .= '<p>Si vous êtes un professionnel et que vous ne possédez pas de compte,';
	$default_text .= ' rendez-vous sur la page de création d\'un <a href="/user/register">nouveau compte</a>.';

	$form['mda_resources_access']['mda_restricted_access_text'] = array(
			'#type' => 'text_format',
			'#title' => 'Texte d\'information',
			'#size' => 100,
			'#default_value' => variable_get('mda_restricted_access_text', $default_text),
			'#format'=> 'full_html',
	);

	return system_settings_form($form);
}