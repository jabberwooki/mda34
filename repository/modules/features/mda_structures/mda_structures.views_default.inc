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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu: Logo */
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
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_competence_fields' => 'field_competence_fields',
    'field_address_locality' => 'field_address_locality',
    'field_phone' => 'field_phone',
    'field_public' => 'field_public',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_competence_fields' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_public' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Champs d'intervention */
  $handler->display->display_options['fields']['field_competence_fields']['id'] = 'field_competence_fields';
  $handler->display->display_options['fields']['field_competence_fields']['table'] = 'field_data_field_competence_fields';
  $handler->display->display_options['fields']['field_competence_fields']['field'] = 'field_competence_fields';
  $handler->display->display_options['fields']['field_competence_fields']['label'] = 'Champ d\'intervention';
  $handler->display->display_options['fields']['field_competence_fields']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competence_fields']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competence_fields']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Lieu de l&#039;événement - Localité (c&#039;est-à-dire Ville) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'Ville';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Contact téléphone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Téléphone';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Public concerné */
  $handler->display->display_options['fields']['field_public']['id'] = 'field_public';
  $handler->display->display_options['fields']['field_public']['table'] = 'field_data_field_public';
  $handler->display->display_options['fields']['field_public']['field'] = 'field_public';
  $handler->display->display_options['fields']['field_public']['label'] = 'Public';
  $handler->display->display_options['fields']['field_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_public']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_public']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_public']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'structure' => 'structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenu: Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nom de la structure';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    217795369 => 0,
    183916278 => 0,
    231346920 => 0,
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
  /* Filter criterion: Contenu: Type de structure (field_structure_type) */
  $handler->display->display_options['filters']['field_structure_type_tid']['id'] = 'field_structure_type_tid';
  $handler->display->display_options['filters']['field_structure_type_tid']['table'] = 'field_data_field_structure_type';
  $handler->display->display_options['filters']['field_structure_type_tid']['field'] = 'field_structure_type_tid';
  $handler->display->display_options['filters']['field_structure_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_structure_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_structure_type_tid']['expose']['operator_id'] = 'field_structure_type_tid_op';
  $handler->display->display_options['filters']['field_structure_type_tid']['expose']['label'] = 'Type de structure';
  $handler->display->display_options['filters']['field_structure_type_tid']['expose']['operator'] = 'field_structure_type_tid_op';
  $handler->display->display_options['filters']['field_structure_type_tid']['expose']['identifier'] = 'field_structure_type_tid';
  $handler->display->display_options['filters']['field_structure_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    183916278 => 0,
    155963314 => 0,
    22875792 => 0,
    193262079 => 0,
    109177673 => 0,
  );
  $handler->display->display_options['filters']['field_structure_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_structure_type_tid']['vocabulary'] = 'structure_types';
  /* Filter criterion: Contenu: Types d&#039;action (field_action_types) */
  $handler->display->display_options['filters']['field_action_types_tid']['id'] = 'field_action_types_tid';
  $handler->display->display_options['filters']['field_action_types_tid']['table'] = 'field_data_field_action_types';
  $handler->display->display_options['filters']['field_action_types_tid']['field'] = 'field_action_types_tid';
  $handler->display->display_options['filters']['field_action_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_action_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['operator_id'] = 'field_action_types_tid_op';
  $handler->display->display_options['filters']['field_action_types_tid']['expose']['label'] = 'Type d\'action';
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
  /* Filter criterion: Contenu: Public concerné (field_public) */
  $handler->display->display_options['filters']['field_public_tid']['id'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['table'] = 'field_data_field_public';
  $handler->display->display_options['filters']['field_public_tid']['field'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['value'] = array(
    21 => '21',
    22 => '22',
    26 => '26',
    28 => '28',
    23 => '23',
    24 => '24',
    25 => '25',
    27 => '27',
    29 => '29',
  );
  $handler->display->display_options['filters']['field_public_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator_id'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['label'] = 'Public concerné';
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['identifier'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    217795369 => 0,
    183916278 => 0,
    231346920 => 0,
    155963314 => 0,
    22875792 => 0,
    193262079 => 0,
    109177673 => 0,
  );
  $handler->display->display_options['filters']['field_public_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_public_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_public_tid']['vocabulary'] = 'publics';
  $handler->display->display_options['filters']['field_public_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'annuaire';

  /* Display: Infos contact */
  $handler = $view->new_display('block', 'Infos contact', 'block_1');
  $handler->display->display_options['display_description'] = 'Infos visibles sur une fiche événement';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Logo */
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
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Email du gestionnaire */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Contact email';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Contact téléphone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Lieu de l'événement */
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
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Liste'),
    t('L\'annuaire'),
    t('Rechercher'),
    t('Nom'),
    t('Champ d\'intervention'),
    t('Ville'),
    t('Téléphone'),
    t('Public'),
    t('Nom de la structure'),
    t('Type de structure'),
    t('Type d\'action'),
    t('Public concerné'),
    t('Infos contact'),
    t('Infos visibles sur une fiche événement'),
    t('Contact email'),
    t('Contact téléphone'),
  );
  $export['structures'] = $view;

  return $export;
}
