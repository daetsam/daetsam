<?php

/**
 * Configure the webform_to_gdocs module.
 */
function webform_to_gdocs_configure() {
  $output = drupal_get_form('webform_to_gdocs_configure_form');
  return $output;
}

/**
 * Form with administrative options.
 */
function webform_to_gdocs_configure_form($form, &$form_state) {
  $form['gdocs_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Docs Username'),
    '#description' => t('The username of the Google accont that you want docs created under.'),
    '#default_value' => variable_get('webform_to_gdocs_username', ''),
  );
  $form['gdocs_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Docs Password'),
    '#description' => t('The password for the account above.'),
    '#default_value' => variable_get('webform_to_gdocs_password', ''),
  );
  $form['zend_gdata_location'] = array(
    '#type' => 'textfield',
    '#title' => t('Zend GData Library Location'),
    '#description' => t('The path to the Zend GData library, relative to the Drupal root (ex: sites/all/libraries/zend_gdata).'),
    '#default_value' => variable_get('webform_to_gdocs_zend_gdata_location', ''),
  );

  if (strlen(variable_get('webform_to_gdocs_zend_gdata_location', '')) == 0) {
    drupal_set_message('You must provide the location of the zend_gdata library.', 'error');
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' =>  'Save Settings',
  );

  return $form;
}

function webform_to_gdocs_configure_form_submit(&$form, &$form_state) {
  variable_set('webform_to_gdocs_username', $form_state['values']['gdocs_username']);
  variable_set('webform_to_gdocs_password', $form_state['values']['gdocs_password']);
  variable_set('webform_to_gdocs_zend_gdata_location', $form_state['values']['zend_gdata_location']);
  drupal_set_message('Settings updated.');
}
