<?php

/**
 * @file
 * Display Suite 1 column template with layout wrapper.
 */
$pret=render($content['field_disponible_la_mda']['#items'][0]['value']);

?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $ds_content_wrapper ?> class="<?php print trim($ds_content_classes); ?>">
    <?php //print $ds_content; ?>
  </<?php print $ds_content_wrapper ?>>
  <?php print render($content['sharethis']);?>
<?php print render($content['field_resource_type']);?>
<?php print render($content['field_themes']);?>
<?php print render($content['field_resource_authors']); ?>

<?php if (!empty($content['field_editor']['#items'])): ?>
    <?php print render($content['field_editor']); ?>
<?php endif; ?>


<?php if (!empty($content['field_isbn']['#title'])): ?>
<div class="field field-name-field-isbn field-type-text field-label-inline clearfix">
	<div class="field-label"><?php print render($content['field_isbn']['#title']);?></div>
	<div class="field-items">
		<div class="field-item even"> : <?php print render($content['field_isbn']['#items'][0]['value']);?></div>
	</div>
</div>
<?php endif; ?>


<?php 
if ($pret=="1"){
print render($content['field_disponible_la_mda']); 
}
else {	
}
?>
<?php print render($content['field_resource_image']);?>
<?php print render($content['body']);?>
<?php print render($content['field_resource_files']); ?>
<?php print render($content['field_resource_url']); ?>
</br>
<?php print render($content['field_scald_video']); ?>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
