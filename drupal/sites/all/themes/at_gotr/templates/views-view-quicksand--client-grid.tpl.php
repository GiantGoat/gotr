<?php
/**
 * @file
 * Displays the the view-rows and appends the clss views-quicksand.
 */
?>
<?php if (!empty($title)): ?>
  <h3 class="<?php print $view_quicksand_id; ?>"><a href="#"><?php print $title; ?></a></h3>
<?php endif; ?>

<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?> views-quicksand">
	<article id="node-<?php print $view->result[$id]->nid;?>">
		<?php print $row; ?>
	</article>
  </div>
<?php endforeach; ?>