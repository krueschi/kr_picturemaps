<?php
/**
 * @file
 * kr_picturemaps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kr_picturemaps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}
