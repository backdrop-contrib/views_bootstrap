<?php

/**
 * @file
 * Contains the administration pages for views_bootstrap.
 *
 */
function views_bootstrap_settings($form_state) {

  $form['views_bootstrap_visibility'] = array(
    '#type' => 'radios',
    '#title' => t('If you are not using a Bootstrap based theme, you can include the Bootstrap styles and scripts on specific pages here'),
    '#options' => array(0 => t('All pages except those listed'), 1 => t('Only the listed pages')),
    '#default_value' => config_get('views_bootstrap.settings', 'views_bootstrap_visibility'),
  );
  $form['views_bootstrap_pages'] = array(
    '#type' => 'textarea',
    '#title' => '<span class="element-invisible">' . t('Pages') . '</span>',
    '#default_value' => config_get('views_bootstrap.settings', 'views_bootstrap_pages'),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  return $form;
}

/**
 * Submit handler for module_settings_form().
 */
function views_bootstrap_settings_submit($form, &$form_state) {
    $config = config('views_bootstrap.settings');
    foreach ($form_state['values'] as $key => $value)
    {
      $config->set($key, $value);
    }

    $config->save();
    backdrop_set_message(t('The configuration options have been saved.'));
}
?>
