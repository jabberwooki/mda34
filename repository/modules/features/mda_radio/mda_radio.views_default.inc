<?php
/**
 * @file
 * mda_radio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mda_radio_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radio_programmes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Radio';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_radio_image']['id'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['table'] = 'field_data_field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['field'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['label'] = '';
  $handler->display->display_options['fields']['field_radio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_radio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_radio_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Champ: Contenu: Date d'enregistrement */
  $handler->display->display_options['fields']['field_record_date']['id'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['table'] = 'field_data_field_record_date';
  $handler->display->display_options['fields']['field_record_date']['field'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'En savoir plus';
  /* Sort criterion: Contenu: Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'radio_programme' => 'radio_programme',
  );

  /* Display: Liste des émissions */
  $handler = $view->new_display('page_with_page_title', 'Liste des émissions', 'programmes_list');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'list';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'radio_programme' => 'radio_programme',
  );
  /* Filter criterion: Contenu: Catégorie (field_record_category) */
  $handler->display->display_options['filters']['field_record_category_tid']['id'] = 'field_record_category_tid';
  $handler->display->display_options['filters']['field_record_category_tid']['table'] = 'field_data_field_record_category';
  $handler->display->display_options['filters']['field_record_category_tid']['field'] = 'field_record_category_tid';
  $handler->display->display_options['filters']['field_record_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_category_tid']['expose']['operator_id'] = 'field_record_category_tid_op';
  $handler->display->display_options['filters']['field_record_category_tid']['expose']['label'] = 'Trier les émissions par catégorie';
  $handler->display->display_options['filters']['field_record_category_tid']['expose']['operator'] = 'field_record_category_tid_op';
  $handler->display->display_options['filters']['field_record_category_tid']['expose']['identifier'] = 'field_record_category_tid';
  $handler->display->display_options['filters']['field_record_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_record_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_category_tid']['vocabulary'] = 'radio_prog_categories';
  $handler->display->display_options['path'] = 'emissions';

  /* Display: Dernière émission (attachement) */
  $handler = $view->new_display('attachment', 'Dernière émission (attachement)', 'programmes_last');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_radio_image']['id'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['table'] = 'field_data_field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['field'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['label'] = '';
  $handler->display->display_options['fields']['field_radio_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_radio_image']['element_class'] = 'col-sm-5';
  $handler->display->display_options['fields']['field_radio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_radio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_radio_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Champ: Intitulé bloc */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Intitulé bloc';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'La dernière émission';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Date d'enregistrement */
  $handler->display->display_options['fields']['field_record_date']['id'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['table'] = 'field_data_field_record_date';
  $handler->display->display_options['fields']['field_record_date']['field'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = '+ d\'infos';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'nimportnawak';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['null']['validate_options']['code'] = 'return !isset($_GET[\'page\']);';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'programmes_list' => 0,
    'block_last_programme' => 0,
  );

  /* Display: Bloc dernière émission */
  $handler = $view->new_display('block', 'Bloc dernière émission', 'block_last_programme');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'last_item';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'last_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_radio_image']['id'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['table'] = 'field_data_field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['field'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['label'] = '';
  $handler->display->display_options['fields']['field_radio_image']['element_class'] = 'col-sm-5';
  $handler->display->display_options['fields']['field_radio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_radio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_radio_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Champ: Intitulé bloc */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Intitulé bloc';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'La dernière émission';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Date d'enregistrement */
  $handler->display->display_options['fields']['field_record_date']['id'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['table'] = 'field_data_field_record_date';
  $handler->display->display_options['fields']['field_record_date']['field'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Lire la suite';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Lien */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Lire la suite';
  /* Champ: Contenu: Son */
  $handler->display->display_options['fields']['field_scald_audio']['id'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['table'] = 'field_data_field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['field'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['label'] = '';
  $handler->display->display_options['fields']['field_scald_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_audio']['type'] = 'content_block';
  $handler->display->display_options['fields']['field_scald_audio']['settings'] = array(
    'link' => '0',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'nimportnawak';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['null']['validate_options']['code'] = 'return !isset($_GET[\'page\']);';

  /* Display: Bloc colonne droite */
  $handler = $view->new_display('block', 'Bloc colonne droite', 'block_sidebar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radio';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_item';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'sidebar_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_radio_image']['id'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['table'] = 'field_data_field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['field'] = 'field_radio_image';
  $handler->display->display_options['fields']['field_radio_image']['label'] = '';
  $handler->display->display_options['fields']['field_radio_image']['element_class'] = 'col-sm-5';
  $handler->display->display_options['fields']['field_radio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_radio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_radio_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Champ: Intitulé bloc */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Intitulé bloc';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'La dernière émission';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Date d'enregistrement */
  $handler->display->display_options['fields']['field_record_date']['id'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['table'] = 'field_data_field_record_date';
  $handler->display->display_options['fields']['field_record_date']['field'] = 'field_record_date';
  $handler->display->display_options['fields']['field_record_date']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Lire la suite';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu: Lien */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Lire la suite';
  /* Champ: Contenu: Son */
  $handler->display->display_options['fields']['field_scald_audio']['id'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['table'] = 'field_data_field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['field'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['label'] = '';
  $handler->display->display_options['fields']['field_scald_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_audio']['type'] = 'content_block';
  $handler->display->display_options['fields']['field_scald_audio']['settings'] = array(
    'link' => '0',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'nimportnawak';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['null']['validate_options']['code'] = 'return !isset($_GET[\'page\']);';

  /* Display: Accueil portail ados */
  $handler = $view->new_display('block', 'Accueil portail ados', 'radio_portal_front_ados');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radio';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Son */
  $handler->display->display_options['fields']['field_scald_audio']['id'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['table'] = 'field_data_field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['field'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['label'] = '';
  $handler->display->display_options['fields']['field_scald_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_audio']['type'] = 'scald_col_4';
  $handler->display->display_options['fields']['field_scald_audio']['settings'] = array(
    'link' => '0',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_scald_audio']['delta_offset'] = '0';
  /* Champ: Contenu: Lien ShareThis */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'radio_programme' => 'radio_programme',
  );
  /* Filter criterion: Contenu: Promu en page d'accueil */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Domain Access: Identifiant (ID) du domaine */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'domain_access';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['value'] = array(
    1 => '1',
  );

  /* Display: Accueil portail pros */
  $handler = $view->new_display('block', 'Accueil portail pros', 'radio_front_portal_pros');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radio';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Son */
  $handler->display->display_options['fields']['field_scald_audio']['id'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['table'] = 'field_data_field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['field'] = 'field_scald_audio';
  $handler->display->display_options['fields']['field_scald_audio']['label'] = '';
  $handler->display->display_options['fields']['field_scald_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_audio']['type'] = 'scald_col_4';
  $handler->display->display_options['fields']['field_scald_audio']['settings'] = array(
    'link' => '0',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_scald_audio']['delta_offset'] = '0';
  /* Champ: Contenu: Lien ShareThis */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'radio_programme' => 'radio_programme',
  );
  /* Filter criterion: Contenu: Promu en page d'accueil */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Domain Access: Identifiant (ID) du domaine */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'domain_access';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['value'] = array(
    6 => '6',
  );
  $translatables['radio_programmes'] = array(
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
    t('Date d\'enregistrement'),
    t('En savoir plus'),
    t('Liste des émissions'),
    t('Trier les émissions par catégorie'),
    t('Dernière émission (attachement)'),
    t('La dernière émission'),
    t('+ d\'infos'),
    t('Tout'),
    t('Bloc dernière émission'),
    t('Lire la suite'),
    t('Bloc colonne droite'),
    t('Radio'),
    t('Accueil portail ados'),
    t('Accueil portail pros'),
  );
  $export['radio_programmes'] = $view;

  return $export;
}
