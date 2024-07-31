<?php

function printIntArray($array) {
    foreach ($array as $value) {
      echo $value . " ";
    }
    echo "\n";
  }
  
  $numbers = [10, 20, 30, 40, 50];
  printIntArray($numbers);
?>