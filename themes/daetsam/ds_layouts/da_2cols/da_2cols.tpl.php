<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  
  <?php if ($left): ?>
    <div class="<?php print $left_classes; ?>">
      <?php print $left; ?>
    </div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div class="<?php print $right_classes; ?>">
      <?php print $right; ?>
    </div>
  <?php endif; ?>
  
</div>