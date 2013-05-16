<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  
  <?php if ($top): ?>
    <div class="<?php print $top_classes; ?>">
      <?php print $top; ?>
    </div>
  <?php endif; ?>

  <?php if ($bottom): ?>
    <div class="<?php print $bottom_classes; ?>">
      <?php print $bottom; ?>
    </div>
  <?php endif; ?>
</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
