<?php
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $class: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * @ingroup views_templates
 */
?>
<div class="lista-sin-marcadores linea-inferior-gruesa">
<ul>
  <?php foreach ($rows as $count => $row): ?>
  <li class="linea-inferior-fina <?php print $row['topic_icon']; ?>">
    <h2 class="sin-margen-superior"><?php print $row['title']; ?></h2>
    <div class="clearfix">
      <div class="grid-2 alpha">Creado por <?php print $row['name_1']; ?></div>
      <div class="grid-2"><?php print $row['comment_count']; ?> respuestas</div>
      <div class="grid-3 omega">Último post: <?php print $row['last_updated']; ?></div>
    </div>
  </li>
  <?php endforeach; ?>
</ul>
</div>
