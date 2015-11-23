<?php

/**
 * @file soc_boxgroup.admin.inc
 * TODO: Enter file description here.
 */

/**
 * Form builder.
 */
function soc_boxgroup_settings_form($form, &$form_state) {
  $form['soc_boxgroup_variable_foo'] = array(
    '#type' => 'textfield',
    '#title' => t('Foo'),
    '#default_value' => variable_get('soc_boxgroup_variable_foo', 42),
    '#required' => TRUE,
  );
  
  // TODO! You probably don't need validation or submit handlers if using system_settings_form().
  return system_settings_form($form);
}

/**
 * Form validate handler.
 */
function soc_boxgroup_settings_form_validate($form, &$form_state) {
  if ($form_state['values']['element'] != 'hello') {
    form_set_error('element', t('Please say hello?'));
  }
}

/**
 * Form submit handler.
 */
function soc_boxgroup_settings_form_submit($form, &$form_state) {

}
