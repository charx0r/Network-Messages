<?php

/**
 * Implementation of hook_views_default_views().
 */
function network_messages_campaign_messages_view_views_default_views() {
  module_load_include('inc', 'network_messages_campaign_messages_view', 'network_messages_campaign_messages_view.features.views');
  $args = func_get_args();
  return call_user_func_array('_network_messages_campaign_messages_view_views_default_views', $args);
}
