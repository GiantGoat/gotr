<?php
/**
 * @file
 * Defines a leaflet map views style.
 */

$plugin = array(
// Just do this one, it is needed.
  'single' => TRUE,
// Title to show up on the pane screen.
  'title' => t('Leaflet Map'),
// Description to show up on the pane screen.
  'description' => t('A leaflet map'),
// A category to put this under.
  'category' => t('Leaflet Map'),
// A function that will return the settings form for the pane.
  'edit form' => 'ggmap_pane_settings_form',
// A function that will return the renderable content.
  'render callback' => 'ggmap_pane_render',
// Return the information displayed on the admin screen (optional).
  'admin info' => 'ggmap_admin_info',
// Array of defaults for the settings form.
  'defaults' => array(
    'lat' => '43.0',
    'lng' => '-80.0',
  ),
// This is NEEDED to be able to use substitution strings in your pane.
  'all contexts' => TRUE,
);
