<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function all_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function all_content_types_node_info() {
  $items = array(
    'administrative_content' => array(
      'name' => t('Administrative Content'),
      'module' => 'features',
      'description' => t('Only accessed by the eKB Team.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'content_chunk' => array(
      'name' => t('Content Chunk'),
      'module' => 'features',
      'description' => t('This is primarily content coming from documentation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'interface_team' => array(
      'name' => t('Interface Team Content'),
      'module' => 'features',
      'description' => t('Nodes created by the Interfaces team and only viewable by them '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'primary_page' => array(
      'name' => t('Primary Page (Old)'),
      'module' => 'features',
      'description' => t('Primary Page content type, created by Paul on Feb. 13, 2012.

No longer going to use as of March 7, 2012'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'public_content' => array(
      'name' => t('Public Content'),
      'module' => 'features',
      'description' => t('This is public content that clients as well as employees can see.  Please be careful what you post here.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'sap' => array(
      'name' => t('SAP'),
      'module' => 'features',
      'description' => t('Content for our SAP team'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'security_attribute' => array(
      'name' => t('Security Attribute'),
      'module' => 'features',
      'description' => t('List all security attributes here.  Created by Paul on 02/13/12.  Want to use this as a dynamic piece of content on a Primary page'),
      'has_title' => '1',
      'title_label' => t('Security Attribute'),
      'has_body' => '1',
      'body_label' => t('Action'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'module' => 'features',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('This is the video content type, created by Paul on 02/12/2012'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
