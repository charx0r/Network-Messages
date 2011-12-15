<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _network_messages_campaign_messages_feed_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "data" && $api == "data_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_data_default().
 */
function _network_messages_campaign_messages_feed_data_default() {
  $export = array();
$data_table = new stdClass;
$data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
$data_table->api_version = 1;
$data_table->title = 'Campaign Messages';
$data_table->name = 'feeds_data_campaign_messages';
$data_table->table_schema = array(
  'description' => '',
  'fields' => array(
    'feed_nid' => array(
      'type' => 'int',
      'size' => 'normal',
      'unsigned' => TRUE,
      'not null' => TRUE,
      'description' => '',
    ),
    'id' => array(
      'type' => 'serial',
      'size' => 'normal',
      'unsigned' => TRUE,
      'not null' => TRUE,
      'description' => '',
    ),
    'timestamp' => array(
      'type' => 'int',
      'size' => 'normal',
      'unsigned' => TRUE,
      'not null' => FALSE,
      'description' => '',
    ),
    'service_nid' => array(
      'type' => 'int',
      'size' => 'normal',
      'unsigned' => TRUE,
    ),
    'date' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'mobile_number' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'network' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'direction' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'type' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'message' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'local' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'tariff' => array(
      'type' => 'float',
      'size' => 'normal',
    ),
    'phase' => array(
      'type' => 'int',
      'size' => 'normal',
      'unsigned' => FALSE,
    ),
    'service' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'status' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
    'channel' => array(
      'type' => 'int',
      'size' => 'normal',
      'unsigned' => FALSE,
    ),
    'charge' => array(
      'type' => 'float',
      'size' => 'normal',
    ),
    'profit' => array(
      'type' => 'float',
      'size' => 'normal',
    ),
    'service_name' => array(
      'type' => 'text',
      'size' => 'normal',
    ),
  ),
  'name' => 'feeds_data_campaign_messages',
  'indexes' => array(
    'feed_nid' => array(
      '0' => 'feed_nid',
    ),
    'id' => array(
      '0' => 'id',
    ),
    'timestamp' => array(
      '0' => 'timestamp',
    ),
    'service_nid' => array(
      '0' => 'service_nid',
    ),
    'network' => array(
      '0' => array(
        '0' => 'network',
        '1' => 31,
      ),
    ),
    'direction' => array(
      '0' => array(
        '0' => 'direction',
        '1' => 1,
      ),
    ),
  ),
  'primary key' => array(
    '0' => 'id',
  ),
);
$data_table->meta = array(
  'fields' => array(
    'service_nid' => array(
      'label' => '',
    ),
    'date' => array(
      'label' => '',
    ),
    'mobile_number' => array(
      'label' => '',
    ),
    'network' => array(
      'label' => '',
    ),
    'direction' => array(
      'label' => '',
    ),
    'type' => array(
      'label' => '',
    ),
    'feed_nid' => array(
      'label' => '',
    ),
    'id' => array(
      'label' => '',
    ),
    'timestamp' => array(
      'label' => '',
    ),
    'message' => array(
      'label' => '',
    ),
    'local' => array(
      'label' => '',
    ),
    'phase' => array(
      'label' => '',
    ),
    'service' => array(
      'label' => '',
    ),
    'status' => array(
      'label' => '',
    ),
    'channel' => array(
      'label' => '',
    ),
    'tariff' => array(
      'label' => '',
    ),
    'charge' => array(
      'label' => '',
    ),
    'profit' => array(
      'label' => '',
    ),
    'service_name' => array(
      'label' => '',
    ),
  ),
);

  $export['feeds_data_campaign_messages'] = $data_table;
  return $export;
}

/**
 * Helper to implementation of hook_feeds_importer_default().
 */
function _network_messages_campaign_messages_feed_feeds_importer_default() {
  $export = array();
$feeds_importer = new stdClass;
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'campaign_messages';
$feeds_importer->config = array(
  'name' => 'Campaign Messages',
  'description' => 'Import SMS Messages related to Campaigns',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ',',
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsDataProcessor',
    'config' => array(
      'update_existing' => 0,
      'expire' => '-1',
      'mappings' => array(
        '0' => array(
          'source' => 'Date',
          'target' => 'date',
          'unique' => 0,
        ),
        '1' => array(
          'source' => 'MobileNumber',
          'target' => 'mobile_number',
          'unique' => 0,
        ),
        '2' => array(
          'source' => 'MobileNetwork',
          'target' => 'network',
          'unique' => 0,
        ),
        '3' => array(
          'source' => 'Direction',
          'target' => 'direction',
          'unique' => 0,
        ),
        '4' => array(
          'source' => 'Type',
          'target' => 'type',
          'unique' => 0,
        ),
        '5' => array(
          'source' => 'Message',
          'target' => 'message',
          'unique' => 0,
        ),
        '6' => array(
          'source' => 'Local',
          'target' => 'local',
          'unique' => 0,
        ),
        '7' => array(
          'source' => 'Tariff',
          'target' => 'tariff',
          'unique' => 0,
        ),
        '8' => array(
          'source' => 'Phase',
          'target' => 'phase',
          'unique' => 0,
        ),
        '9' => array(
          'source' => 'Service',
          'target' => 'service',
          'unique' => 0,
        ),
        '10' => array(
          'source' => 'ServiceName',
          'target' => 'service_name',
          'unique' => 0,
        ),
        '11' => array(
          'source' => 'ServiceName',
          'target' => 'service_nid',
          'unique' => 0,
        ),
        '12' => array(
          'source' => 'Status',
          'target' => 'status',
          'unique' => 0,
        ),
        '13' => array(
          'source' => 'Channel',
          'target' => 'channel',
          'unique' => 0,
        ),
        '14' => array(
          'source' => 'Charge',
          'target' => 'charge',
          'unique' => FALSE,
        ),
        '15' => array(
          'source' => 'Charge',
          'target' => 'profit',
          'unique' => FALSE,
        ),
      ),
    ),
  ),
  'content_type' => 'campaign_messages_import',
  'update' => 0,
  'import_period' => '-1',
  'expire_period' => 3600,
  'import_on_create' => 1,
);

  $export['campaign_messages'] = $feeds_importer;
  return $export;
}
