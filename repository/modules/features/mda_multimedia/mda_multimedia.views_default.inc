<?php
/**
 * @file
 * mda_multimedia.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mda_multimedia_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'multimedia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'scald_atoms';
  $view->human_name = 'Multimedia';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Multimedia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relation: Atomes : Tags (scald_tags) */
  $handler->display->display_options['relationships']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['relationships']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['relationships']['scald_tags_tid']['field'] = 'scald_tags_tid';
  /* Relation: Atomes : Authors (scald_authors) */
  $handler->display->display_options['relationships']['scald_authors_tid']['id'] = 'scald_authors_tid';
  $handler->display->display_options['relationships']['scald_authors_tid']['table'] = 'field_data_scald_authors';
  $handler->display->display_options['relationships']['scald_authors_tid']['field'] = 'scald_authors_tid';
  $handler->display->display_options['relationships']['scald_authors_tid']['required'] = TRUE;
  /* Champ: Atome : Identifiant Scald */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'scald_col_4';

  /* Display: Liste */
  $handler = $view->new_display('page', 'Liste', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vidéos';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Identifiant Scald */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'grille_player';
  /* Champ: Atomes : Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Champ: Atome : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/atom/[sid]';
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'ucfirst';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Critère de filtrage: Atomes : Tags (scald_tags) */
  $handler->display->display_options['filters']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['field'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator_id'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['label'] = 'TAG';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['identifier'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    141037677 => 0,
    183916278 => 0,
    155963314 => 0,
    22875792 => 0,
    193262079 => 0,
    109177673 => 0,
  );
  $handler->display->display_options['filters']['scald_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['scald_tags_tid']['vocabulary'] = 'scald_tags';
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'ad6cb0c3-f74a-4ab1-8f50-6ada55ce5eca';
  $handler->display->display_options['path'] = 'multimedia';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vidéos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Liste pocketfilm */
  $handler = $view->new_display('page', 'Liste pocketfilm', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les films du concours';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Identifiant Scald */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'grille_player';
  /* Champ: Atomes : Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Champ: Atome : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/atom/[sid]';
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'ucfirst';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'ad6cb0c3-f74a-4ab1-8f50-6ada55ce5eca';
  $handler->display->display_options['path'] = 'rubrique/pocket-film-2016/lesfilms';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Les films';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Notre chaine */
  $handler = $view->new_display('block', 'Notre chaine', 'block_last_video');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Notre chaine';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Texte non filtré */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Lien Toutes les vidéos';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/multimedia/videos">Toutes nos videos</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'scald_col_4';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Global : Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '9fd4d5c4-a656-4906-922d-1a801916704a';
  /* Critère de filtrage: Atome : Fournisseur */
  $handler->display->display_options['filters']['provider']['id'] = 'provider';
  $handler->display->display_options['filters']['provider']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['provider']['field'] = 'provider';
  $handler->display->display_options['filters']['provider']['value'] = array(
    'scald_dailymotion' => 'scald_dailymotion',
    'scald_vimeo' => 'scald_vimeo',
    'scald_youtube' => 'scald_youtube',
  );

  /* Display: Lauréat */
  $handler = $view->new_display('block', 'Lauréat', 'laureat');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les lauréats 2016';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="rubrique/pocket-film-2016/lesfilms">Tout les films</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'grille';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Global : Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '341803af-f616-45d1-af01-8013093cb8b6';
  /* Critère de filtrage: Atome : Fournisseur */
  $handler->display->display_options['filters']['provider']['id'] = 'provider';
  $handler->display->display_options['filters']['provider']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['provider']['field'] = 'provider';
  $handler->display->display_options['filters']['provider']['value'] = array(
    'scald_video' => 'scald_video',
  );
  $handler->display->display_options['block_description'] = 'laureat';

  /* Display: Videos */
  $handler = $view->new_display('page', 'Videos', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Identifiant Scald */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'list';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Atome : Date de création */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'scald_atoms';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['path'] = 'multimedia';

  /* Display: Affiche */
  $handler = $view->new_display('block', 'Affiche', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Global : Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '341803af-f616-45d1-af01-8013093cb8b6';

  /* Display: Teaser Poket Film */
  $handler = $view->new_display('block', 'Teaser Poket Film', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lauréats 2016';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'scald_col_8';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'f9aebd06-c8f6-42d3-8186-2c18d534c6d0';

  /* Display: Vidéo présentation */
  $handler = $view->new_display('block', 'Vidéo présentation', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'La MDA 34 en vidéo';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'scald_col_4';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Critère de filtrage: Terme de taxonomie : Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '16a9102b-edab-4a3d-ba6c-496a3503f043';
  $handler->display->display_options['block_description'] = 'Video presentation';
  $translatables['multimedia'] = array(
    t('Master'),
    t('Multimedia'),
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
    t('terme à partir de scald_tags'),
    t('terme à partir de scald_authors'),
    t('Identifiant Scald'),
    t('Liste'),
    t('Vidéos'),
    t('TAG'),
    t('Liste pocketfilm'),
    t('Les films du concours'),
    t('Notre chaine'),
    t('Lien Toutes les vidéos'),
    t('<a href="/multimedia/videos">Toutes nos videos</a>'),
    t('Lauréat'),
    t('Les lauréats 2016'),
    t('<a href="rubrique/pocket-film-2016/lesfilms">Tout les films</a>'),
    t('laureat'),
    t('Videos'),
    t('Affiche'),
    t('Teaser Poket Film'),
    t('Lauréats 2016'),
    t('Vidéo présentation'),
    t('La MDA 34 en vidéo'),
    t('Video presentation'),
  );
  $export['multimedia'] = $view;

  return $export;
}
