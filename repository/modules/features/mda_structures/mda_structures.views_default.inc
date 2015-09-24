<?php
/**
 * @file
 * mda_structures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mda_structures_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'annuaire_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'annuaire filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'isotope_filter_block';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relation: Terme de taxonomie : Contenu avec terme */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'nœud(s) rattaché(s) au terme';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Critère de tri: Terme de taxonomie : Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Critère de filtrage: Vocabulaire de taxonomie : Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'competence_fields' => 'competence_fields',
  );
  /* Critère de filtrage: Domain Access : Disponible sur le domaine actuel */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['relationship'] = 'nid';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: Filtre annuaire */
  $handler = $view->new_display('block', 'Filtre annuaire', 'annuaire_champs_filter');
  $translatables['annuaire_filter'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('nœud(s) rattaché(s) au terme'),
    t('Filtre annuaire'),
  );
  $export['annuaire_filter'] = $view;

  $view = new view();
  $view->name = 'structures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Structures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  /* Relation: Contenu : Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'competence_fields' => 'competence_fields',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'authors' => 0,
    'radio_prog_categories' => 0,
    'faq_categories' => 0,
    'editors' => 0,
    'publics' => 0,
    'article_types' => 0,
    'themes' => 0,
    'action_types' => 0,
    'event_types' => 0,
    'resource_types' => 0,
    'structure_types' => 0,
  );
  /* Relation: Contenu : Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo_120x120',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'structure' => 'structure',
  );

  /* Display: Liste */
  $handler = $view->new_display('page_with_page_title', 'Liste', 'list_structures');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'L\'annuaire';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = TRUE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'annuaire_filter:annuaire_champs_filter';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'competence_fields' => 'competence_fields',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'authors' => 0,
    'radio_prog_categories' => 0,
    'faq_categories' => 0,
    'editors' => 0,
    'publics' => 0,
    'article_types' => 0,
    'themes' => 0,
    'action_types' => 0,
    'event_types' => 0,
    'resource_types' => 0,
    'structure_types' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['label'] = '';
  $handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_mission']['settings'] = array(
    'trim_length' => '200',
  );
  /* Champ: isotop */
  $handler->display->display_options['fields']['field_competence_fields']['id'] = 'field_competence_fields';
  $handler->display->display_options['fields']['field_competence_fields']['table'] = 'field_data_field_competence_fields';
  $handler->display->display_options['fields']['field_competence_fields']['field'] = 'field_competence_fields';
  $handler->display->display_options['fields']['field_competence_fields']['ui_name'] = 'isotop';
  $handler->display->display_options['fields']['field_competence_fields']['label'] = '';
  $handler->display->display_options['fields']['field_competence_fields']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_competence_fields']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_competence_fields']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competence_fields']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_competence_fields']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Global : Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'structure' => 'structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Domain Access : Disponible sur le domaine actuel */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nom de la structure';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    183916278 => 0,
    155963314 => 0,
    22875792 => 0,
    193262079 => 0,
    109177673 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Critère de filtrage: Contenu : Public concerné (field_public) */
  $handler->display->display_options['filters']['field_public_tid']['id'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['table'] = 'field_data_field_public';
  $handler->display->display_options['filters']['field_public_tid']['field'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator_id'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['label'] = 'Public';
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['identifier'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    183916278 => 0,
    155963314 => 0,
    22875792 => 0,
    193262079 => 0,
    109177673 => 0,
  );
  $handler->display->display_options['filters']['field_public_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_public_tid']['vocabulary'] = 'publics';
  $handler->display->display_options['filters']['field_public_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Contenu : Types d&#039;action (field_action_types) */
  $handler->display->display_options['filters']['field_action_types_tid']['id'] = 'field_action_types_tid';
  $handler->display->display_options['filters']['field_action_types_tid']['table'] = 'field_data_field_action_types';
  $handler->display->display_options['filters']['field_action_types_tid']['field'] = 'field_action_types_tid';
  $handler->display->display_options['filters']['field_action_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['operator_id'] = 'field_action_types_tid_op';
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['label'] = 'Types d\'actions';
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['operator'] = 'field_action_types_tid_op';
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['identifier'] = 'field_action_types_tid';
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    183916278 => 0,
    155963314 => 0,
    22875792 => 0,
    193262079 => 0,
    109177673 => 0,
  );
  $handler->display->display_options['filters']['field_action_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_action_types_tid']['vocabulary'] = 'action_types';
  $handler->display->display_options['path'] = 'annuaire';

  /* Display: Infos contact */
  $handler = $view->new_display('block', 'Infos contact', 'block_1');
  $handler->display->display_options['display_description'] = 'Infos visibles sur une fiche événement';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo_120x120',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Email du gestionnaire */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu : Contact téléphone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu : Lieu de l'événement */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'field_formatter_class' => '',
  );
  $translatables['structures'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('terme'),
    t('Liste'),
    t('L\'annuaire'),
    t('Rechercher'),
    t('Nom de la structure'),
    t('Public'),
    t('Types d\'actions'),
    t('Infos contact'),
    t('Infos visibles sur une fiche événement'),
    t('Email du gestionnaire'),
    t('Contact téléphone'),
  );
  $export['structures'] = $view;

  return $export;
}
