<?php
/**
 * @file
 * kcontextes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcontextes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All pages';
  $context->tag = 'Core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '0',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '5',
        ),
        'menu-menu-shortcuts' => array(
          'module' => 'menu',
          'delta' => 'menu-shortcuts',
          'region' => 'footer',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  t('Core');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page only';
  $context->tag = 'Core';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kcore-mda_shortcut_ados' => array(
          'module' => 'kcore',
          'delta' => 'mda_shortcut_ados',
          'region' => 'header',
          'weight' => '0',
        ),
        'kcore-mda_shortcut_parents' => array(
          'module' => 'kcore',
          'delta' => 'mda_shortcut_parents',
          'region' => 'header',
          'weight' => '1',
        ),
        'kcore-mda_shortcut_pros' => array(
          'module' => 'kcore',
          'delta' => 'mda_shortcut_pros',
          'region' => 'header',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Front page only');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'All pages but front';
  $context->tag = 'Core';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~faq' => '~faq',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'mailchimp_signup-newsletter' => array(
          'module' => 'mailchimp_signup',
          'delta' => 'newsletter',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-pros_resources_link' => array(
          'module' => 'boxes',
          'delta' => 'pros_resources_link',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages but front');
  t('Core');
  $export['not-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'philado';
  $context->description = 'No front';
  $context->tag = 'Philado';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        4 => 4,
      ),
    ),
    'path' => array(
      'values' => array(
        'presentation' => 'presentation',
        'ressources' => 'ressources',
        'contact' => 'contact',
        '~annuaire' => '~annuaire',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_pros_trainings' => array(
          'module' => 'views',
          'delta' => 'events-block_pros_trainings',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-philado-block_1' => array(
          'module' => 'views',
          'delta' => 'philado-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-philado-block_2' => array(
          'module' => 'views',
          'delta' => 'philado-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('No front');
  t('Philado');
  $export['philado'] = $context;

  return $export;
}
