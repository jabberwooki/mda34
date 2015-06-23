<?php

/**
 * @file
 * template.php
 */
function mda_preprocess_image(&$variables) {
  foreach (array('width', 'height') as $key) {
  
   unset($variables[$key]);
   unset($variables[$key]);
 }
}
