<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class views_bootstrap_table_plugin_style extends views_plugin_style_table {

  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['bootstrap_styles'] = array('default' => array());
    $options['responsive'] = array('default' => FALSE);

    return $options;
  }

  /**
   * Form.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // TODO: restore this help line when we can point to a Backdrop doc page.
//     $form['help'] = array(
//       '#markup' => t('The Bootstrap table style adds default Bootstrap table classes and optional classes (<a href="!docs">see documentation</a>).', ['!docs' => 'https://www.drupal.org/docs/7/modules/views-bootstrap/table']),
//       '#weight' => -99,
//     );

    $form['responsive'] = array(
      '#type' => 'checkbox',
      '#title' => t('Responsive'),
      '#default_value' => $this->options['responsive'],
      '#description' => t('To make a table scroll horizontally on small devices.'),
    );

    $form['bootstrap_styles'] = array(
      '#title' => t('Bootstrap styles'),
      '#type' => 'checkboxes',
      '#default_value' => $this->options['bootstrap_styles'],
      '#options' => array(
        'striped' => t('Striped'),
        'bordered' => t('Bordered'),
        'hover' => t('Hover'),
        'condensed' => t('Condensed'),
      ),
    );
  }

}
