<?php
function ds_da_2rows() {
  return array(
    'label' => t('daetsam 2 rows'),
    'regions' => array(
      'top' => t('Top'),
	  'bottom' => t('Bottom')
    ),
    // Add this line if there is a default css file.
    'css' => TRUE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}
?>