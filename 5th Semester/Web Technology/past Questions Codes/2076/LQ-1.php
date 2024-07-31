<?php
// Database configuration
$host = 'localhost';
$dbname = 'book_catalog';
$username = 'root';
$password = '';

// Create a new PDO instance
try {
    $pdo = new PDO("mysql:host=$host;dbname=$dbname", $username, $password);
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
    die("Could not connect to the database $dbname :" . $e->getMessage());
}

// Check if the form is submitted
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $searchType = $_POST['searchType'];
    $keyword = $_POST['keyword'];
    $download = $_POST['download'];

    // Prepare SQL statement
    $sql = "INSERT INTO searches (search_type, keyword, download) VALUES (:searchType, :keyword, :download)";
    $stmt = $pdo->prepare($sql);
    
    // Bind parameters
    $stmt->bindParam(':searchType', $searchType);
    $stmt->bindParam(':keyword', $keyword);
    $stmt->bindParam(':download', $download, PDO::PARAM_INT);

    // Execute statement
    try {
        $stmt->execute();
        echo "Search data has been saved successfully.";
    } catch (PDOException $e) {
        echo "Error: " . $e->getMessage();
    }
}

// Retrieve results
$sql = "SELECT * FROM searches";
$stmt = $pdo->query($sql);

echo "<h2>Search Results</h2>";
echo "<table border='1'>
<tr>
<th>ID</th>
<th>Search Type</th>
<th>Keyword</th>
<th>Download</th>
</tr>";

while ($row = $stmt->fetch(PDO::FETCH_ASSOC)) {
    echo "<tr>
    <td>{$row['id']}</td>
    <td>{$row['search_type']}</td>
    <td>{$row['keyword']}</td>
    <td>" . ($row['download'] ? 'Yes' : 'No') . "</td>
    </tr>";
}
echo "</table>";

?>


CREATE TABLE searches (
    id INT AUTO_INCREMENT PRIMARY KEY,
    search_type VARCHAR(50),
    keyword VARCHAR(255),
    download TINYINT(1)
);
