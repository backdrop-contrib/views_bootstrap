<?php
/**
 * @file
 * Preprocessors and helper functions for thumbnail theming.
 */

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_bootstrap_thumbnail_plugin_style(&$vars) {
  _views_bootstrap_include_bootstrap_assets();
  _views_bootstrap_preprocess_views_style_plugin_prepare_grid($vars);
}

/**
 * Implementation of template preprocess for the view fields.
 */
function template_preprocess_views_bootstrap_thumbnail_plugin_rows(&$vars) {
  $view = &$vars['view'];
  // Clone value because get_field will unset it.
  $row_index = $view->row_index;

  foreach ($vars['options'] as $id => $field) {
    switch ($id) {
      case 'image':
      case 'title':
        if (isset($view->field[$field])) {
          $vars[$id] = $view->style_plugin->get_field($row_index, $field);
        }
        break;

      case 'content':
        $vars[$id] = array();
        foreach (array_filter($field) as $content_field) {
          if (isset($view->field[$content_field])) {
            $vars[$id][$content_field] = $view->style_plugin->get_field($row_index, $content_field);
          }
        }
        break;
    }
  }
}
