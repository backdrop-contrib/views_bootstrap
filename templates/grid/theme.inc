<?php
/**
 * @file
 * Preprocessors and helper functions for grid theming.
 */

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_bootstrap_grid_plugin_style(&$vars) {
  _views_bootstrap_include_bootstrap_assets();
  _views_bootstrap_preprocess_views_style_plugin_prepare_grid($vars);
}
