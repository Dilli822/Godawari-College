<!DOCTYPE html>
<html>
<body>

<h1>My first PHP page</h1>

<?php
$t = 10;
if($t < 0){
echo "less than 0 and invalid number";
}
elseif($t === 0){
echo "number itself is 0 ";
}

elseif($t % 2 == 0){
echo "even";
} elseif($t % 2 !== 0){
echo "odd";
}
else{
  echo "invalide number";
  }
?> 

</body>
</html>