<?php
/**
 * @file
 * panels_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
