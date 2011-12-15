<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function network_messages_campaign_messages_feed_ctools_plugin_api() {
  module_load_include('inc', 'network_messages_campaign_messages_feed', 'network_messages_campaign_messages_feed.defaults');
  $args = func_get_args();
  return call_user_func_array('_network_messages_campaign_messages_feed_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_data_default().
 */
function network_messages_campaign_messages_feed_data_default() {
  module_load_include('inc', 'network_messages_campaign_messages_feed', 'network_messages_campaign_messages_feed.defaults');
  $args = func_get_args();
  return call_user_func_array('_network_messages_campaign_messages_feed_data_default', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function network_messages_campaign_messages_feed_feeds_importer_default() {
  module_load_include('inc', 'network_messages_campaign_messages_feed', 'network_messages_campaign_messages_feed.defaults');
  $args = func_get_args();
  return call_user_func_array('_network_messages_campaign_messages_feed_feeds_importer_default', $args);
}
