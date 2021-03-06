<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_d427ca8e-0c1c-4692-aad2-34b6c2afc7f4';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 6;
$handler->conf = array(
  'title' => 'Homepage',
  'no_blocks' => 1,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'home' => 'home',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'planer_one_column';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'content' => array(
      'region_wrapper' => array(
        'type' => '',
        'add_default_classes' => 0,
        'class_enable' => 0,
        'class' => '',
        'attributes_enable' => 0,
        'attributes' => '',
      ),
      'separator' => array(
        'active' => 0,
        'element_type' => '',
        'show_css' => 0,
        'element_class' => '',
      ),
    ),
    'default' => NULL,
  ),
  'content' => array(
    'style' => 'planer',
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'e6db8870-b9c7-4b32-a4ba-f40805eb1109';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-cecaf36e-9cf4-450c-ad96-c5bdb3f84ae3';
$pane->panel = 'content';
$pane->type = 'homepage';
$pane->subtype = 'homepage';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'context' => array(
    0 => 'argument_entity_id:node_1',
  ),
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-zxWsj1Fd4N7tznfByVCtKKjOwroIddbYSwuwaLJBfIw',
  'form_token' => '-i53wI46xsYBwMAvb0gcayPURTW0l2UFqUGnxrqENhc',
  'form_id' => 'immoklink_sitewide_homepage_content_type_edit_form',
  'op' => 'Finish',
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_title' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_content' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
  ),
  'style' => 'planer',
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'cecaf36e-9cf4-450c-ad96-c5bdb3f84ae3';
$display->content['new-cecaf36e-9cf4-450c-ad96-c5bdb3f84ae3'] = $pane;
$display->panels['content'][0] = 'new-cecaf36e-9cf4-450c-ad96-c5bdb3f84ae3';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
