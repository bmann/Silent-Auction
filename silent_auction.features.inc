<?php

/**
 * Implementation of hook_content_default_fields().
 */
function silent_auction_content_default_fields() {
  module_load_include('inc', 'silent_auction', 'silent_auction.defaults');
  $args = func_get_args();
  return call_user_func_array('_silent_auction_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function silent_auction_ctools_plugin_api() {
  module_load_include('inc', 'silent_auction', 'silent_auction.defaults');
  $args = func_get_args();
  return call_user_func_array('_silent_auction_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function silent_auction_imagecache_default_presets() {
  module_load_include('inc', 'silent_auction', 'silent_auction.defaults');
  $args = func_get_args();
  return call_user_func_array('_silent_auction_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function silent_auction_node_info() {
  module_load_include('inc', 'silent_auction', 'silent_auction.features.node');
  $args = func_get_args();
  return call_user_func_array('_silent_auction_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function silent_auction_strongarm() {
  module_load_include('inc', 'silent_auction', 'silent_auction.defaults');
  $args = func_get_args();
  return call_user_func_array('_silent_auction_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function silent_auction_views_default_views() {
  module_load_include('inc', 'silent_auction', 'silent_auction.features.views');
  $args = func_get_args();
  return call_user_func_array('_silent_auction_views_default_views', $args);
}
