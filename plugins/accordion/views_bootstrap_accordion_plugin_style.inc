<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class views_bootstrap_accordion_plugin_style extends views_plugin_style {

  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['title_field'] = array('default' => NULL);
    $options['label_field'] = array('default' => NULL);
    $options['behavior'] = array('default' => 'closed');
    $options['title_tag'] = array('default' => 'h4');
    return $options;
  }

  /**
   * Options form.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    if (isset($form['grouping'])) {
      $options = array();
      foreach (element_children($form['grouping']) as $key => $value) {
        if (!empty($form['grouping'][$key]['field']['#options']) && is_array($form['grouping'][$key]['field']['#options'])) {
          $options = array_merge($options, $form['grouping'][$key]['field']['#options']);
        }
      }
      // TODO: restore this help line when we can point to a Backdrop doc page.
//       $form['help'] = array(
//         '#markup' => t('The Bootstrap accordion displays content in collapsible panels (<a href="!docs">see documentation</a>).', ['!docs' => 'https://www.drupal.org/docs/7/modules/views-bootstrap/accordion']),
//         '#weight' => -99,
//       );
      $form['title_field'] = array(
        '#type' => 'select',
        '#title' => t('Title field'),
        '#options' => $options,
        '#required' => TRUE,
        '#default_value' => $this->options['title_field'],
        '#description' => t('Select the field that will be used as the title.'),
      );
      $form['label_field'] = array(
        '#type' => 'select',
        '#title' => t('Label field'),
        '#options' => $options,
        '#required' => FALSE,
        '#default_value' => $this->options['label_field'],
        '#description' => t('Select the field that will be used as the label.'),
      );
      $form['behavior'] = array(
        '#type' => 'radios',
        '#title' => t('Collapse Options'),
        '#options' => array(
          'closed' => t('All Items Closed'),
          'first' => t('First Item Open'),
          'all' => t('All Items Open'),
        ),
        '#required' => TRUE,
        '#description' => t('Default panel state for collapse behavior.'),
        '#default_value' => $this->options['behavior'],
      );
      $form['title_tag'] = array(
        '#type' => 'select',
        '#title' => t('Title HTML tag'),
        '#options' => array(
          'h1' => 'H1',
          'h2' => 'H2',
          'h3' => 'H3',
          'h4' => 'H4',
          'h5' => 'H5',
          'p' => 'P',
          'div' => 'DIV',
        ),
        '#required' => TRUE,
        '#default_value' => $this->options['title_tag'],
        '#description' => t('HTML tag to be used for the title.'),
      );
    }
  }

}
