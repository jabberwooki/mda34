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
  $handler->display->display_options['path'] = 'multimedia';

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

  /* Display: Lauréat */
  $handler = $view->new_display('block', 'Lauréat', 'laureat');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les lauréats 2015';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  /* Critère de filtrage: Atome : Identifiant Scald */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value']['value'] = '129';
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
    t('Identifiant Scald'),
    t('Liste'),
    t('Notre chaine'),
    t('Lien Toutes les vidéos'),
    t('<a href="/multimedia/videos">Toutes nos videos</a>'),
    t('Lauréat'),
    t('Les lauréats 2015'),
    t('laureat'),
    t('Videos'),
    t('Affiche'),
    t('Teaser Poket Film'),
    t('Vidéo présentation'),
    t('La MDA 34 en vidéo'),
    t('Video presentation'),
  );
  $export['multimedia'] = $view;

  return $export;
}
