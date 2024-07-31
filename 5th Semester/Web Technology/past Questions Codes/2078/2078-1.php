<?php
$firstName = "John";
$lastName = "Doe";
?>
Concatenating Strings
To combine two strings, you use the dot (.) operator.
<?php
$fullName = $firstName . " " . $lastName;
echo $fullName; // Output: John Doe
?>

<?xml version="1.0" encoding="UTF-8"?>
<books>
  <book>
    <title>The Lord of the Rings</title>
    <author>J.R.R. Tolkien</author>
    <year>1954</year>
  </book>
  <book>
    <title>Pride and Prejudice</title>
    <author>Jane Austen</author>
    <year>1813</year>
  </book>
</books>

<?xml version="1.0" encoding="UTF-8"?>
<xs:schema xmlns:xs="http://www.w3.org/2001/XMLSchema">
  <xs:element name="books">
    <xs:complexType>
      <xs:sequence>
        <xs:element name="book" minOccurs="0" maxOccurs="unbounded">
          <xs:complexType>
            <xs:sequence>
              <xs:element name="title" type="xs:string"/>
              <xs:element name="author" type="xs:string"/>
              <xs:element name="year" type="xs:int"/>
            </xs:sequence>
          </xs:complexType>
        </xs:element>
      </xs:sequence>
    </xs:complexType>
  </xs:element>
</xs:schema>




<?php
// Define and initialize the multidimensional array
$Product = array(
    array("pcode" => "P001", "pname" => "Product 1", "price" => 29.99),
    array("pcode" => "P002", "pname" => "Product 2", "price" => 49.99),
    array("pcode" => "P003", "pname" => "Product 3", "price" => 19.99)
);

// Start the HTML document
echo "<!DOCTYPE html>
<html lang='en'>
<head>
    <meta charset='UTF-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1.0'>
    <title>Product Table</title>
    <style>
        table {
            width: 50%;
            border-collapse: collapse;
            margin: 25px 0;
            font-size: 18px;
            text-align: left;
        }
        th, td {
            padding: 12px;
            border-bottom: 1px solid #ddd;
        }
        th {
            background-color: #f2f2f2;
        }
    </style>
</head>
<body>
    <h1>Product List</h1>
    <table>
        <tr>
            <th>Product Code</th>
            <th>Product Name</th>
            <th>Price</th>
        </tr>";

// Loop through the array and generate table rows
foreach ($Product as $item) {
    echo "<tr>
            <td>{$item['pcode']}</td>
            <td>{$item['pname']}</td>
            <td>\${$item['price']}</td>
          </tr>";
}

// Close the table and HTML document
echo "    </table>
</body>
</html>";
?>
