<?php

$plugin = array(
  'single' => TRUE,  // Just do this one, it is needed.
  'title' => t('Leaflet Map'),  // Title to show up on the pane screen.
  'description' => t('A leaflet map'), // Description to show up on the pane screen.
  'category' => t('Leaflet Map'), // A category to put this under.
  'edit form' => 'ggmap_pane_settings_form', // A function that will return the settings form for the pane.
  'render callback' => 'ggmap_pane_render', // A function that will return the renderable content.
  'admin info' => 'ggmap_admin_info', // A function that will return the information displayed on the admin screen (optional).
  'defaults' => array( // Array of defaults for the settings form.
    'lat' => '43.0',
    'lng' => '-80.0',
  ),
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);