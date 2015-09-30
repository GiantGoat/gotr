<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
$wrapper_prefix = '<nav';
if (!empty($class)){$wrapper_prefix .= "class=\"{$class}\"";}
$wrapper_prefix .= '>';
$wrapper_suffix = '</nav>';
print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <?php $bg_image = file_create_url($variables['view']->result[$id]->field_field_image[0]['rendered']['#item']['uri']); ?>
      <li class="<?php print $classes_array[$id]; ?>" style="background-image: url(<?php print $bg_image; ?>);"><?php print $row; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>