<?php
function concatenateStrings($string1, $string2) {
    // Concatenate the two strings using the dot (.) operator
    $concatenatedString = $string1 . $string2;

    // Print the concatenated string
    echo $concatenatedString;
}

// Example usage:
$str1 = "Hello, ";
$str2 = "world!";

concatenateStrings($str1, $str2); // Output: Hello, world!
?>

<?php
session_start();
?>

<?php
session_start();

$_SESSION['username'] = 'John Doe';
$_SESSION['cart'] = array('item1', 'item2');
?>

<?php
session_start();
echo "Username: " . $_SESSION['username'];
?>

<?php
session_start();
session_destroy();
?>