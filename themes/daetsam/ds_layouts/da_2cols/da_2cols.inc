<?php
function ds_da_2cols() {
  return array(
    'label' => t('daetsam 2 cols'),
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right'),
	  'footer' => t('Footer')
    ),
    // Add this line if there is a default css file.
    'css' => TRUE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}
?>