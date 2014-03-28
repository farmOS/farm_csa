<?php
/**
 * @file
 * farm_csa_subscription.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function farm_csa_subscription_commerce_product_default_types() {
  $items = array(
    'farm_csa_subscription' => array(
      'type' => 'farm_csa_subscription',
      'name' => 'CSA Subscription',
      'description' => 'A product type for selling CSA subscriptions.',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_csa_subscription_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}