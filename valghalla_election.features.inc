<?php
/**
 * @file
 * valghalla_election.features.inc
 */

/**
 * Implements hook_node_info().
 */
function valghalla_election_node_info() {
  $items = array(
    'election' => array(
      'name' => t('Valg'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Valg'),
      'help' => '',
    ),
  );
  return $items;
}
