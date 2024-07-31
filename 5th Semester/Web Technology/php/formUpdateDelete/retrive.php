<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "cct";
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
?>
<h2>HTML Table</h2>
<table>
  <tr>
    <th>ID</th>
    <th>Name</th>
    <th>Last Name</th>
    <th>Email</th>
    <th>Option</th>
  </tr>
  <?php
$sql = "SELECT id, firstname, lastname, email FROM student";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
    ?>
  <tr>
    <td><?php echo $row["id"]  ?> </td>
    <td><?php echo $row["firstname"]  ?></td>
    <td><?php echo $row["lastname"]  ?></td>
    <td><?php echo $row["email"]  ?></td>
    <td><?php echo "<a href='delete.php?id=".$row['id']."'>Delete</a>"; ?></td>
  </tr></br>
</table>
    <?php
}
} else {
  echo "0 results";
}
$conn->close();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Form</title>
</head>
<body>
    <form action="update.php" method="post">
        <label for="id">ID:</label>
        <input type="text" id="id" name="id" required>
        <br>
        <label for="firstName">First Name:</label>
        <input type="text" id="firstname" name="firstname" required>
        <br>
        <label for="lastName">Last Name:</label>
        <input type="text" id="lastname" name="lastname" required>
        <br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required>
        <br>
        <input type="submit" value="Update Data">
    </form>
</body>
</html>
