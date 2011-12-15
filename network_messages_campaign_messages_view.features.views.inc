<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _network_messages_campaign_messages_view_views_default_views() {
  $views = array();

$view = new view;
$view->name = 'campaign_messages_details';
$view->description = 'Display a list of campaigns and various related details.';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'title' => array(
    'label' => 'Title',
    'alter' => array(
      'alter_text' => 0,
      'text' => '<p>[title]</p>',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'type' => array(
    'label' => 'Type',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'machine_name' => 0,
    'exclude' => 1,
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'created' => array(
    'label' => 'Post date',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<p>[created]</p>',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'date_format' => 'custom',
    'custom_date_format' => 'Y-m-d H:i',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'field_date_time_value' => array(
    'label' => 'Starts / Ends',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<p>[field_date_time_value]</p>',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'custom',
    'format' => 'short',
    'multiple' => array(
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'group' => TRUE,
    ),
    'repeat' => array(
      'show_repeat_rule' => '',
    ),
    'fromto' => array(
      'fromto' => 'value',
    ),
    'exclude' => 0,
    'id' => 'field_date_time_value',
    'table' => 'node_data_field_date_time',
    'field' => 'field_date_time_value',
    'relationship' => 'none',
  ),
  'field_date_time_value2' => array(
    'label' => 'Ends',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<p>[field_date_time_value2]</p>',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'custom',
    'format' => 'short',
    'multiple' => array(
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'group' => TRUE,
    ),
    'repeat' => array(
      'show_repeat_rule' => '',
    ),
    'fromto' => array(
      'fromto' => 'value2',
    ),
    'exclude' => 0,
    'id' => 'field_date_time_value2',
    'table' => 'node_data_field_date_time',
    'field' => 'field_date_time_value2',
    'relationship' => 'none',
  ),
  'field_outrate_value' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '0',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'none',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 1,
    'id' => 'field_outrate_value',
    'table' => 'node_data_field_outrate',
    'field' => 'field_outrate_value',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'phpcode_1' => array(
    'label' => '1',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<div style="text-align:center;">
<?php
if (empty($static[\'dir\'])) {
  $i = $this->options[\'label\'] - 1;

  $log_views = array(\'node_content_3\', \'attachment_4\');
  $out_views = array(\'attachment_1\', \'attachment_2\', \'attachment_3\', \'attachment_4\');
  $curr_view = views_get_current_view();
  $static[\'feed\'] = array_search($curr_view->current_display,$log_views) !== FALSE ? $static[\'feed\'] = $curr_view->args[0] : NULL;
  $static[\'dir\'] = array_search($curr_view->current_display, $out_views) !== FALSE ? \'O\' : \'I\';
  $providers = network_providers_list();
  $list = array_keys($providers);
  $static[\'key\'] = $list[$i];
  $this->options[\'label\'] = $providers[$static[\'key\']][\'name\'];
}
$count = network_messages_get_count($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
$count = $count ? $count : 0;

if ($static[\'dir\'] == \'I\') {
  $profit = network_messages_get_profit($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
}
else {
  $rate = $data->node_data_field_outrate_field_outrate_value;
  $rate = $rate ? $rate : 0;
  $profit = 1 * $count * $rate;
}
$profit = number_format($profit / 100.00, 2);

print $count .\'<br/>\'. \'R\' . $profit;
?>
</div>',
    'exclude' => 0,
    'id' => 'phpcode_1',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'phpcode_2' => array(
    'label' => '2',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<div style="text-align:center;">
<?php
if (empty($static[\'dir\'])) {
  $i = $this->options[\'label\'] - 1;

  $log_views = array(\'node_content_3\', \'attachment_4\');
  $out_views = array(\'attachment_1\', \'attachment_2\', \'attachment_3\', \'attachment_4\');
  $curr_view = views_get_current_view();
  $static[\'feed\'] = array_search($curr_view->current_display,$log_views) !== FALSE ? $static[\'feed\'] = $curr_view->args[0] : NULL;
  $static[\'dir\'] = array_search($curr_view->current_display, $out_views) !== FALSE ? \'O\' : \'I\';
  $providers = network_providers_list();
  $list = array_keys($providers);
  $static[\'key\'] = $list[$i];
  $this->options[\'label\'] = $providers[$static[\'key\']][\'name\'];
}
$count = network_messages_get_count($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
$count = $count ? $count : 0;

if ($static[\'dir\'] == \'I\') {
  $profit = network_messages_get_profit($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
}
else {
  $rate = $data->node_data_field_outrate_field_outrate_value;
  $rate = $rate ? $rate : 0;
  $profit = 1 * $count * $rate;
}
$profit = number_format($profit / 100.00, 2);

print $count .\'<br/>\'. \'R\' . $profit;
?>
</div>',
    'exclude' => 0,
    'id' => 'phpcode_2',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'phpcode_3' => array(
    'label' => '3',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<div style="text-align:center;">
<?php
if (empty($static[\'dir\'])) {
  $i = $this->options[\'label\'] - 1;

  $log_views = array(\'node_content_3\', \'attachment_4\');
  $out_views = array(\'attachment_1\', \'attachment_2\', \'attachment_3\', \'attachment_4\');
  $curr_view = views_get_current_view();
  $static[\'feed\'] = array_search($curr_view->current_display,$log_views) !== FALSE ? $static[\'feed\'] = $curr_view->args[0] : NULL;
  $static[\'dir\'] = array_search($curr_view->current_display, $out_views) !== FALSE ? \'O\' : \'I\';
  $providers = network_providers_list();
  $list = array_keys($providers);
  $static[\'key\'] = $list[$i];
  $this->options[\'label\'] = $providers[$static[\'key\']][\'name\'];
}
$count = network_messages_get_count($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
$count = $count ? $count : 0;

if ($static[\'dir\'] == \'I\') {
  $profit = network_messages_get_profit($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
}
else {
  $rate = $data->node_data_field_outrate_field_outrate_value;
  $rate = $rate ? $rate : 0;
  $profit = 1 * $count * $rate;
}
$profit = number_format($profit / 100.00, 2);

print $count .\'<br/>\'. \'R\' . $profit;
?>
</div>',
    'exclude' => 0,
    'id' => 'phpcode_3',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'phpcode_4' => array(
    'label' => '4',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '0',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<div style="text-align:center;">
<?php
if (empty($static[\'dir\'])) {
  $i = $this->options[\'label\'] - 1;

  $log_views = array(\'node_content_3\', \'attachment_4\');
  $out_views = array(\'attachment_1\', \'attachment_2\', \'attachment_3\', \'attachment_4\');
  $curr_view = views_get_current_view();
  $static[\'feed\'] = array_search($curr_view->current_display,$log_views) !== FALSE ? $static[\'feed\'] = $curr_view->args[0] : NULL;
  $static[\'dir\'] = array_search($curr_view->current_display, $out_views) !== FALSE ? \'O\' : \'I\';
  $providers = network_providers_list();
  $list = array_keys($providers);
  $static[\'key\'] = $list[$i];
  $this->options[\'label\'] = $providers[$static[\'key\']][\'name\'];
}
$count = network_messages_get_count($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
$count = $count ? $count : 0;

if ($static[\'dir\'] == \'I\') {
  $profit = network_messages_get_profit($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
}
else {
  $rate = $data->node_data_field_outrate_field_outrate_value;
  $rate = $rate ? $rate : 0;
  $profit = 1 * $count * $rate;
}
$profit = number_format($profit / 100.00, 2);

print $count .\'<br/>\'. \'R\' . $profit;
?>
</div>',
    'exclude' => 0,
    'id' => 'phpcode_4',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'phpcode' => array(
    'label' => 'Total',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '0',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<div style="text-align:center;">
<?php
if (empty($static[\'dir\'])) {
  $static[\'key\'] = NULL;;

  $log_views = array(\'node_content_3\', \'attachment_4\');
  $out_views = array(\'attachment_1\', \'attachment_2\', \'attachment_3\', \'attachment_4\');
  $curr_view = views_get_current_view();
  $static[\'feed\'] = array_search($curr_view->current_display,$log_views) !== FALSE ? $static[\'feed\'] = $curr_view->args[0] : NULL;
  $static[\'dir\'] = array_search($curr_view->current_display, $out_views) !== FALSE ? \'O\' : \'I\';
}
$count = network_messages_get_count($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
$count = $count ? $count : 0;

if ($static[\'dir\'] == \'I\') {
  $profit = network_messages_get_profit($data->node_type, $data->nid, $static[\'key\'], $static[\'dir\'], $static[\'feed\']);
}
else {
  $rate = $data->node_data_field_outrate_field_outrate_value;
  $rate = $rate ? $rate : 0;
  $profit = 1 * $count * $rate;
}
$profit = number_format($profit / 100.00, 2);

print $count .\'<br/>\'. \'R\' . $profit;
?>
</div>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'field_keyword_value' => array(
    'operator' => '=',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'field_keyword_value_op',
      'identifier' => 'field_keyword_value',
      'label' => 'Keyword',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_keyword_value',
    'table' => 'node_data_field_keyword',
    'field' => 'field_keyword_value',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'date_filter' => array(
    'operator' => '=',
    'value' => array(
      'value' => NULL,
      'min' => NULL,
      'max' => NULL,
      'default_date' => '',
      'default_to_date' => '',
    ),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'date_filter_op',
      'identifier' => 'date_filter',
      'label' => 'Starts',
      'optional' => 1,
      'remember' => 0,
    ),
    'date_fields' => array(
      'node_data_field_date_time.field_date_time_value' => 'node_data_field_date_time.field_date_time_value',
    ),
    'date_method' => 'OR',
    'granularity' => 'day',
    'form_type' => 'date_popup',
    'default_date' => '',
    'default_to_date' => '',
    'year_range' => '-3:+3',
    'id' => 'date_filter',
    'table' => 'node',
    'field' => 'date_filter',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'date_filter_1' => array(
    'operator' => '=',
    'value' => array(
      'value' => NULL,
      'min' => NULL,
      'max' => NULL,
      'default_date' => '',
      'default_to_date' => '',
    ),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'date_filter_1_op',
      'identifier' => 'date_filter_1',
      'label' => 'Ends',
      'optional' => 1,
      'remember' => 0,
    ),
    'date_fields' => array(
      'node_data_field_date_time.field_date_time_value2' => 'node_data_field_date_time.field_date_time_value2',
    ),
    'date_method' => 'OR',
    'granularity' => 'day',
    'form_type' => 'date_popup',
    'default_date' => '',
    'default_to_date' => '',
    'year_range' => '-3:+3',
    'id' => 'date_filter_1',
    'table' => 'node',
    'field' => 'date_filter',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
));
$handler->override_option('access', array(
  'type' => 'perm',
  'perm' => 'view service statistics',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Campaign Details');
$handler->override_option('header', 'Incoming Service Messages');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 0);
$handler->override_option('footer', '<?php
$page = \'page_1\';
$providers = network_providers_list();
$curr_view = views_get_current_view();
$type = current($curr_view->display[\'default\']->display_options[\'filters\'][\'type_1\'][\'value\']);
$feed_nid = ($curr_view->current_display == $page) ? NULL : $curr_view->args[0];
$td_head = \'<td><div style="text-align:center;">\';
$td_foot = \'</div></td>\';
?>
<table>
<tr class="odd">
<td>&nbsp;</td>
<?php
foreach ($providers as $key => $value) {
  print \'<td>\'. $value[\'name\'] .\'</td>\';
}
?>
<td>Total</td>
</tr>
<tr class="even">
<td>
<?php
print t(\'Messages without matching services\');
?>
</td>
<?php
foreach ($providers as $key => $value) {
  $count = network_messages_get_count($type, 0, NULL, \'I\', $feed_nid);
  $profit = network_messages_get_profit($type, 0, NULL, \'I\', $feed_nid);
  $count = $count ? $count : 0;
  $profit = number_format($profit / 100.00, 2);
  $feed_lost = $count .\'<br/>\' .\'R\'. $profit;

  print $td_head . $feed_lost . $td_foot;
}
?>
<?php
$count = network_messages_get_count($type, 0, NULL, \'I\', $feed_nid);
$profit = network_messages_get_profit($type, 0, NULL, \'I\', $feed_nid);
$count = $count ? $count : 0;
$profit = number_format($profit / 100.00, 2);
$feed_lost = $count .\'<br/>\' .\'R\'. $profit;

print $td_head . $feed_lost . $td_foot;
?>
</tr>
</table>');
$handler->override_option('footer_format', '3');
$handler->override_option('footer_empty', 1);
$handler->override_option('items_per_page', 25);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'desc',
  'columns' => array(
    'title' => 'title',
    'type' => 'type',
    'created' => 'title',
    'field_date_time_value' => 'field_date_time_value',
    'field_date_time_value2' => 'field_date_time_value',
    'phpcode_1' => 'phpcode_1',
    'phpcode_2' => 'phpcode_2',
    'phpcode_3' => 'phpcode_3',
    'phpcode_4' => 'phpcode_4',
    'phpcode' => 'phpcode',
    'field_outrate_value' => 'field_outrate_value',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 1,
      'separator' => '<br />',
    ),
    'type' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_date_time_value' => array(
      'sortable' => 1,
      'separator' => '<hr />',
    ),
    'field_date_time_value2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'phpcode_1' => array(
      'separator' => '',
    ),
    'phpcode_2' => array(
      'separator' => '',
    ),
    'phpcode_3' => array(
      'separator' => '',
    ),
    'phpcode_4' => array(
      'separator' => '',
    ),
    'phpcode' => array(
      'separator' => '<hr />',
    ),
    'field_outrate_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  ),
  'default' => 'field_date_time_value',
));
$handler = $view->new_display('page', 'Services Details', 'page_1');
$handler->override_option('path', 'admin/reports/campaign-details');
$handler->override_option('menu', array(
  'type' => 'normal',
  'title' => 'Campaign Details',
  'description' => 'Display a list of campaigns and various related details.',
  'weight' => '0',
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('node_content', 'Service User Details', 'node_content_1');
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '4' => 0,
      '10' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
      '3' => 0,
    ),
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'feed_fast' => 0,
      'panel' => 0,
      'agent' => 0,
      'auction' => 0,
      'auction_service' => 0,
      'campaign' => 0,
      'campaign_messages_import' => 0,
      'campaign_service' => 0,
      'merchant' => 0,
      'page' => 0,
      'product' => 0,
      'profile' => 0,
      'sale' => 0,
      'salesappointment' => 0,
      'sphere' => 0,
      'story' => 0,
      'subscription' => 0,
      'subscription_service' => 0,
      'sub_agent' => 0,
      'wasp_client' => 0,
      'wasp_operator' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '6' => 0,
      '5' => 0,
      '7' => 0,
      '8' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'uid_current' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'uid_current',
    'table' => 'users',
    'field' => 'uid_current',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'status_extra' => array(
    'id' => 'status_extra',
    'table' => 'node',
    'field' => 'status_extra',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('footer', '');
$handler->override_option('footer_format', '1');
$handler->override_option('footer_empty', 0);
$handler->override_option('empty', 'No messages.');
$handler->override_option('empty_format', '1');
$handler->override_option('types', array(
  'campaign_service' => 'campaign_service',
));
$handler->override_option('modes', array(
  '0' => 'full',
));
$handler->override_option('argument_mode', 'nid');
$handler->override_option('default_argument', '');
$handler = $view->new_display('node_content', 'Service Admin Details', 'node_content_2');
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '4' => 0,
      '10' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
      '3' => 0,
    ),
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'feed_fast' => 0,
      'panel' => 0,
      'agent' => 0,
      'auction' => 0,
      'auction_service' => 0,
      'campaign' => 0,
      'campaign_messages_import' => 0,
      'campaign_service' => 0,
      'merchant' => 0,
      'page' => 0,
      'product' => 0,
      'profile' => 0,
      'sale' => 0,
      'salesappointment' => 0,
      'sphere' => 0,
      'story' => 0,
      'subscription' => 0,
      'subscription_service' => 0,
      'sub_agent' => 0,
      'wasp_client' => 0,
      'wasp_operator' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '6' => 0,
      '5' => 0,
      '7' => 0,
      '8' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'uid_current' => array(
    'operator' => '=',
    'value' => '0',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'uid_current',
    'table' => 'users',
    'field' => 'uid_current',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('footer', '');
$handler->override_option('footer_format', '1');
$handler->override_option('footer_empty', 0);
$handler->override_option('empty', 'No messages.');
$handler->override_option('empty_format', '1');
$handler->override_option('types', array(
  'campaign_service' => 'campaign_service',
));
$handler->override_option('modes', array(
  '0' => 'full',
));
$handler->override_option('argument_mode', 'nid');
$handler->override_option('default_argument', '');
$handler = $view->new_display('node_content', 'Import Details', 'node_content_3');
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'php',
    'validate_fail' => 'empty',
    'break_phrase' => 1,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '4' => 0,
      '10' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
      '3' => 0,
    ),
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'feed_fast' => 0,
      'panel' => 0,
      'agent' => 0,
      'auction' => 0,
      'auction_messages_import' => 0,
      'auction_service' => 0,
      'campaign' => 0,
      'campaign_messages_import' => 0,
      'campaign_service' => 0,
      'merchant' => 0,
      'page' => 0,
      'product' => 0,
      'profile' => 0,
      'sale' => 0,
      'salesappointment' => 0,
      'sphere' => 0,
      'story' => 0,
      'subscription' => 0,
      'subscription_service' => 0,
      'sub_agent' => 0,
      'wasp_client' => 0,
      'wasp_operator' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '6' => 0,
      '5' => 0,
      '7' => 0,
      '8' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '$type = current($view->display[\'default\']->display_options[\'filters\'][\'type_1\'][\'value\']);
$services = network_messages_get_feed_services($type, $argument);
if (!empty($services)) {
  $handler->argument = implode(",", $services);
  return TRUE;
}
return FALSE;',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
));
$handler->override_option('types', array(
  'campaign_messages_import' => 'campaign_messages_import',
));
$handler->override_option('modes', array(
  '0' => 'full',
  '1' => 5,
));
$handler->override_option('argument_mode', 'nid');
$handler->override_option('default_argument', '');
$handler = $view->new_display('attachment', 'Services Details Outgoing', 'attachment_1');
$handler->override_option('header', 'Outgoing Service Messages');
$handler->override_option('footer', '');
$handler->override_option('footer_empty', 0);
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', 0);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
  'node_content_1' => 0,
  'node_content_2' => 0,
  'node_content_3' => 0,
));
$handler = $view->new_display('attachment', 'Service User Details Outgoing', 'attachment_2');
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '4' => 0,
      '10' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
      '3' => 0,
    ),
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'feed_fast' => 0,
      'panel' => 0,
      'agent' => 0,
      'auction' => 0,
      'auction_service' => 0,
      'campaign' => 0,
      'campaign_messages_import' => 0,
      'campaign_service' => 0,
      'merchant' => 0,
      'page' => 0,
      'product' => 0,
      'profile' => 0,
      'sale' => 0,
      'salesappointment' => 0,
      'sphere' => 0,
      'story' => 0,
      'subscription' => 0,
      'subscription_service' => 0,
      'sub_agent' => 0,
      'wasp_client' => 0,
      'wasp_operator' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '6' => 0,
      '5' => 0,
      '7' => 0,
      '8' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'uid_current' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'uid_current',
    'table' => 'users',
    'field' => 'uid_current',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'status_extra' => array(
    'operator' => '=',
    'value' => '',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'status_extra',
    'table' => 'node',
    'field' => 'status_extra',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('header', 'Outgoing Service Messages');
$handler->override_option('footer', '');
$handler->override_option('footer_empty', 0);
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', 0);
$handler->override_option('displays', array(
  'node_content_1' => 'node_content_1',
  'default' => 0,
  'page_1' => 0,
  'node_content_2' => 0,
  'node_content_3' => 0,
));
$handler = $view->new_display('attachment', 'Service Admin Details Outgoing', 'attachment_3');
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '4' => 0,
      '10' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
      '3' => 0,
    ),
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'feed_fast' => 0,
      'panel' => 0,
      'agent' => 0,
      'auction' => 0,
      'auction_service' => 0,
      'campaign' => 0,
      'campaign_messages_import' => 0,
      'campaign_service' => 0,
      'merchant' => 0,
      'page' => 0,
      'product' => 0,
      'profile' => 0,
      'sale' => 0,
      'salesappointment' => 0,
      'sphere' => 0,
      'story' => 0,
      'subscription' => 0,
      'subscription_service' => 0,
      'sub_agent' => 0,
      'wasp_client' => 0,
      'wasp_operator' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '6' => 0,
      '5' => 0,
      '7' => 0,
      '8' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'uid_current' => array(
    'operator' => '=',
    'value' => '0',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'uid_current',
    'table' => 'users',
    'field' => 'uid_current',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', 'Outgoing Service Messages');
$handler->override_option('footer', '');
$handler->override_option('footer_empty', 0);
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', 0);
$handler->override_option('displays', array(
  'node_content_2' => 'node_content_2',
  'default' => 0,
  'page_1' => 0,
  'node_content_1' => 0,
  'node_content_3' => 0,
));
$handler = $view->new_display('attachment', 'Import Details Outgoing', 'attachment_4');
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'ignore',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'php',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '4' => 0,
      '10' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
      '3' => 0,
    ),
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'feed_fast' => 0,
      'panel' => 0,
      'agent' => 0,
      'auction' => 0,
      'auction_messages_import' => 0,
      'auction_service' => 0,
      'campaign' => 0,
      'campaign_messages_import' => 0,
      'campaign_service' => 0,
      'merchant' => 0,
      'page' => 0,
      'product' => 0,
      'profile' => 0,
      'sale' => 0,
      'salesappointment' => 0,
      'sphere' => 0,
      'story' => 0,
      'subscription' => 0,
      'subscription_service' => 0,
      'sub_agent' => 0,
      'wasp_client' => 0,
      'wasp_operator' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '6' => 0,
      '5' => 0,
      '7' => 0,
      '8' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '$type = current($view->display[\'default\']->display_options[\'filters\'][\'type_1\'][\'value\']);
$services = network_messages_get_feed_services($type, $argument);
if (!empty($services)) {
  $handler->argument = implode(",", $services);
  return TRUE;
}
return FALSE;',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'campaign_service' => 'campaign_service',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
));
$handler->override_option('header', 'Outgoing Service Messages');
$handler->override_option('footer', '');
$handler->override_option('footer_empty', 0);
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', 0);
$handler->override_option('displays', array(
  'node_content_3' => 'node_content_3',
  'default' => 0,
  'page_1' => 0,
  'node_content_1' => 0,
  'node_content_2' => 0,
));

  $views[$view->name] = $view;

  return $views;
}
