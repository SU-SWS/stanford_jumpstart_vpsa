<?php
/**
 * @file
 * stanford_jumpstart_vpsa_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_jumpstart_vpsa_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vpsa_jumpstart_homepage';
  $context->description = 'VPSA homepage layout with carousel, events, news';
  $context->tag = 'Home Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e0d332942ed45c1f9bc1cad46fc018d6' => array(
          'module' => 'views',
          'delta' => 'e0d332942ed45c1f9bc1cad46fc018d6',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
        'views-stanford_events_views-block_3' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-stanford_news-block_1' => array(
          'module' => 'views',
          'delta' => 'stanford_news-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'bean-jumpstart-footer-social-media--0' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-social-media--0',
          'region' => 'sidebar_second',
          'weight' => '-32',
        ),
        'bean-homepage-about-block' => array(
          'module' => 'bean',
          'delta' => 'homepage-about-block',
          'region' => 'sidebar_second',
          'weight' => '-31',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Page');
  t('VPSA homepage layout with carousel, events, news');
  $export['vpsa_jumpstart_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vpsa_all_pages_but_homepage';
  $context->description = 'VPSA All pages but the home page and landing pages';
  $context->tag = 'Sub-pages';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~landing_page_content_type' => '~landing_page_content_type',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'stanford_jsvpsa_layouts-4' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_jsvpsa_layouts-4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sub-pages');
  t('VPSA All pages but the home page and landing pages');

  $export['vpsa_all_pages_but_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vpsa_sitewide';
  $context->description = 'VPSA Sitewide - All pages';
  $context->tag = 'Sitewide';
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
        'webauth-webauth_login_block' => array(
          'module' => 'webauth',
          'delta' => 'webauth_login_block',
          'region' => 'global_header',
          'weight' => '-10',
        ),
        'stanford_jsvpsa_layouts-1' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_jsvpsa_layouts-1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
        'bean-vpsa-student-affairs-block' => array(
          'module' => 'bean',
          'delta' => 'vpsa-student-affairs-block',
          'region' => 'footer',
          'weight' => '-20',
        ),
        'bean-vpsa-helpful-links-footer-block' => array(
          'module' => 'bean',
          'delta' => 'vpsa-helpful-links-footer-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-jumpstart-footer-contact-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-contact-block',
          'region' => 'footer',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('VPSA Sitewide - All pages');

  $export['vpsa_sitewide'] = $context;

  return $export;
}
