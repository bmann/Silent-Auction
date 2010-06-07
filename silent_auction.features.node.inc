<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _silent_auction_node_info() {
  $items = array(
    'silentauctionitem' => array(
      'name' => t('Silent Auction Item'),
      'module' => 'features',
      'description' => t('A type of content for submitting Silent Auction items'),
      'has_title' => '1',
      'title_label' => t('Name of Auction Item'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Enter a name and a short description of the item to be auctioned.'),
    ),
  );
  return $items;
}
