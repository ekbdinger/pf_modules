<?php

/**
 * Implementation of hook_content_default_fields().
 */
function all_content_types_content_default_fields() {
  $fields = array();

  // Exported field: field_pp_node_reference
  $fields['security_attribute-field_pp_node_reference'] = array(
    'field_name' => 'field_pp_node_reference',
    'type_name' => 'security_attribute',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'panel' => 'panel',
      'primary_page' => 'primary_page',
      'content_chunk' => 0,
      'document_upload' => 0,
      'forum' => 0,
      'interface_team' => 0,
      'page' => 0,
      'public_content' => 0,
      'quiz' => 0,
      'sap' => 0,
      'security_attribute' => 0,
      'story' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => NULL,
      'fallback' => NULL,
      'edit_fallback' => NULL,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_pp_node_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'autocomplete_match' => 'contains',
      'size' => '60',
      'label' => 'Primary Page Ref',
      'weight' => '31',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_pp_node_ref
  $fields['video-field_pp_node_ref'] = array(
    'field_name' => 'field_pp_node_ref',
    'type_name' => 'video',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'primary_page' => 'primary_page',
      'content_chunk' => 0,
      'document_upload' => 0,
      'forum' => 0,
      'interface_team' => 0,
      'page' => 0,
      'panel' => 0,
      'public_content' => 0,
      'quiz' => 0,
      'sap' => 0,
      'security_attribute' => 0,
      'story' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_pp_node_ref][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Primary Page Reference',
      'weight' => '11',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_pp_reference
  $fields['video-field_pp_reference'] = array(
    'field_name' => 'field_pp_reference',
    'type_name' => 'video',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'panel' => 'panel',
      'primary_page' => 'primary_page',
      'content_chunk' => 0,
      'document_upload' => 0,
      'forum' => 0,
      'interface_team' => 0,
      'page' => 0,
      'public_content' => 0,
      'quiz' => 0,
      'sap' => 0,
      'security_attribute' => 0,
      'story' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 0,
        'title' => '',
        'hover_title' => '',
        'destination' => 'node',
      ),
      'fallback' => 'leave_blank',
      'edit_fallback' => 0,
      'label' => 'Primary Page Reference',
      'weight' => '1',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_video_date
  $fields['video-field_video_date'] = array(
    'field_name' => 'field_video_date',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - g:ia',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-4:+1',
      'label_position' => 'above',
      'label' => 'Video Date',
      'weight' => '-1',
      'description' => 'Date when the video was created',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_video_duration
  $fields['video-field_video_duration'] = array(
    'field_name' => 'field_video_duration',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'duration',
    'required' => '0',
    'multiple' => '0',
    'module' => 'duration',
    'active' => '1',
    'widget' => array(
      'use_weeks' => 0,
      'largest_metric' => 'minutes',
      'smallest_metric' => 'seconds',
      'default_value' => array(
        '0' => array(
          'duration' => array(
            'duration' => array(
              'years' => '0',
              'months' => '0',
              'days' => '0',
              'hours' => '0',
              'minutes' => '0',
              'seconds' => '0',
            ),
            'is_negative' => FALSE,
            'is_valid' => TRUE,
            'conversion_factors' => array(
              'seconds/minutes' => 60,
              'minutes/hours' => 60,
              'hours/days' => 24,
              'days/weeks' => 7,
              'days/months' => 30,
              'weeks/years' => 52.142857142857,
              'months/years' => 12,
            ),
          ),
          'iso8601' => 'PT0S',
          'approx_seconds' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Duration',
      'weight' => 0,
      'description' => 'Enter the length of the video',
      'type' => 'duration_combo',
      'module' => 'duration',
    ),
  );

  // Exported field: field_video_password
  $fields['video-field_video_password'] = array(
    'field_name' => 'field_video_password',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_video_password][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Password',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_video_url
  $fields['video-field_video_url'] = array(
    'field_name' => 'field_video_url',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'vimeo' => 'vimeo',
        'archive' => 0,
        'bliptv' => 0,
        'dailymotion' => 0,
        'google' => 0,
        'guba' => 0,
        'imeem' => 0,
        'lastfm' => 0,
        'livevideo' => 0,
        'metacafe' => 0,
        'myspace' => 0,
        'revver' => 0,
        'sevenload' => 0,
        'spike' => 0,
        'tudou' => 0,
        'twistage' => 0,
        'ustream' => 0,
        'ustreamlive' => 0,
        'voicethread' => 0,
        'yahoomusic' => 0,
        'youtube' => 0,
        'zzz_custom_url' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video URL',
      'weight' => '-4',
      'description' => 'Enter the Vimeo link here',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Password');
  t('Primary Page Ref');
  t('Primary Page Reference');
  t('Video Date');
  t('Video Duration');
  t('Video URL');

  return $fields;
}
