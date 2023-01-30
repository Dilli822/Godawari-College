#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

template <typename T1,typename T2,typename T3>
void writeToFile(T1 arg1, T2 arg2, T3 arg3) {
    ofstream file("file.txt", ios::out | ios::binary);
    if (file.is_open()) {
        file << arg1 << " " << arg2 << " " << arg3 << endl;
        cout << "Data written to file successfully" << endl;
    }
    else {
        cout << "Error opening file" << endl;
    }
    file.close();
}

template <typename T>
void readFromFile(vector<T> &vec) {
    T data;
    ifstream file("file.txt", ios::in | ios::binary);
    if (file.is_open()) {
        // Use random access to read the data from the file
        file.seekg(0, ios::end);
        int fileSize = file.tellg();
        int recordSize = sizeof(T);
        int numRecords = fileSize / recordSize;
        vec.resize(numRecords);

        file.seekg(0, ios::beg);
        file.read((char *)vec.data(), fileSize);

        cout << "Data read from file using random access successfully" << endl;
    }
    else {
        cout << "Error opening file" << endl;
    }
    file.close();
}

int main() {
    int a=1024;
    string b="kilobytes tested";
    bool status=true;
    writeToFile(a, b, status);
    vector<int>vec;
    readFromFile(vec);
    for(auto i: vec){
        cout << i << endl;
    }
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}

// explain me each step clearly
// The function readFromFile takes a vector of any data type T as an argument and reads the data from a file named "file.txt". Here is a step by step explanation of the code:

// Declaration of data of type T: The data variable is declared to store the data read from the file.
// Opening the file "file.txt": The ifstream object file is used to open the file "file.txt". The is_open function is used to check if the file is successfully opened.
// Reading data from the file: The while loop is used to read data from the file using the file >> data statement. This reads one piece of data from the file and stores it in the data variable. The loop continues until there is no more data to be read.
// Storing data in the vector: The push_back function is used to add the data to the end of the vector. This is repeated for each piece of data read from the file.
// Printing "Data read from file successfully": If the file is successfully opened and all the data is read from the file, then the message "Data read from file successfully" is displayed on the screen.
// Error handling: If the file is not successfully opened, the message "Error opening file" is displayed on the screen.
// Closing the file: The close function is used to close the file after it has been read. This is important to ensure that the file is not left open and the resources are freed.


// The function readFromFile takes a vector of any data type T as an argument and reads the data from a file named "file.txt". Here is a step by step explanation of the code:

// Declaration of data of type T: The data variable is declared to store the data read from the file.
// Opening the file "file.txt": The ifstream object file is used to open the file "file.txt". The is_open function is used to check if the file is successfully opened.
// Reading data from the file: The while loop is used to read data from the file using the file >> data statement. This reads one piece of data from the file and stores it in the data variable. The loop continues until there is no more data to be read.
// Storing data in the vector: The push_back function is used to add the data to the end of the vector. This is repeated for each piece of data read from the file.
// Printing "Data read from file successfully": If the file is successfully opened and all the data is read from the file, then the message "Data read from file successfully" is displayed on the screen.
// Error handling: If the file is not successfully opened, the message "Error opening file" is displayed on the screen.
// Closing the file: The close function is used to close the file after it has been read. This is important to ensure that the file is not left open and the resources are freed.



// what is &vec 
//  The '&' symbol in the function argument "vector<T> &vec" is a reference operator.
//  It means that the function is using a reference to the original vector, rather than a copy of it. 
//  This means that any changes made to the vector within the function will be reflected in the original 
//  vector outside the function.

// This is a C++ program that demonstrates writing to a file and reading from a file.

// The program includes the headers <iostream>, <fstream>, and <vector> which provide input/output, file I/O, and vector functions, respectively.
// The "using namespace std;" line allows the program to use functions and objects from the standard C++ library without having to specify the namespace (std) each time.
// The "writeToFile" function is a template function that takes two arguments of any data type (T1, T2). The function opens a file named "file.txt" and writes the values of the two arguments to it, separated by a space. If the file is successfully opened, the function outputs "Data written to file successfully". If the file cannot be opened, the function outputs "Error opening file". The function closes the file after writing to it.
// The "readFromFile" function is a template function that takes a vector of any data type (T) as an argument. The function opens the "file.txt" file and reads the values from it into the vector. If the file is successfully opened, the function outputs "Data read from file successfully". If the file cannot be opened, the function outputs "Error opening file". The function closes the file after reading from it.
// In the "main" function, two integers, a and b, are declared and initialized to 10 and 20, respectively. These values are passed as arguments to the "writeToFile" function.
// A vector of integers, "vec", is declared. The "readFromFile" function is called and the "vec" vector is passed as an argument to it.
// A "for" loop iterates over the elements in the "vec" vector and outputs each element, separated by a space.
// The "return 0;" line at the end of the "main" function signals successful execution of the program.

// Sequential access to a file means reading or writing data to the file in the order it appears in the file. 
// In sequential access, data is read or written one byte at a time, starting from the beginning of the file 
// and moving towards the end.

// Random access to a file means the ability to read or write data at any location within the file. In 
// random access, data can be read or written in any order, and the file pointer can be moved to any position 
// in the file. This type of access is often used when working with binary files, where the size of data being 
// written is fixed, and the data can be easily read from a specific location.

//ios::in and ios::binary are bit flags used to specify the open mode of a file stream in C++.

// ios::in means to open the file in input mode, which means you can read the data from the file.
// ios::binary means to open the file in binary mode, which means you can read and write binary data directly to the file, rather than as text data.
// These bit flags are passed as parameters to the ifstream or ofstream constructor when opening a file.

// The given code defines 3 functions: writeToFile, readFromFile, and main.

// writeToFile:
// This is a generic function that takes 3 arguments of different types (T1, T2, T3).
// The function opens a binary file file.txt for writing using ofstream and checks if the file is open. If it is open, the function writes the arguments to the file in the format arg1 << " " << arg2 << " " << arg3 << endl and outputs a message indicating that data was written to the file successfully. If the file couldn't be opened, the function outputs an error message. The file is then closed.

// readFromFile:
// This is a generic function that takes a vector of type T as an argument and reads data from the binary file file.txt into the vector. The function opens the file using ifstream and checks if the file is open. If it is open, the function uses random access to read the data from the file into the vector. The function uses seekg to go to the end of the file and calculates the size of the file in bytes, which is then used to determine the number of records in the file. The function then resizes the vector to the number of records and uses seekg to go to the beginning of the file and reads the data into the vector using read. A message indicating that the data was read successfully is then output. If the file couldn't be opened, the function outputs an error message. The file is then closed.

// main:
// The main function declares 3 variables, a, b, and status, and calls writeToFile with the 3 variables as arguments. It then declares a vector vec and calls readFromFile with vec as an argument. The function outputs the content of the vector twice: first using a range-based for loop and then using an index-based for loop. Finally, the function returns 0.

// Output:
// The program outputs:

// vbnet
// Copy code
// Data written to file successfully
// Data read from file using random access successfully
// 543891505
// 543891505 
// Note: The actual output of the vector may vary based on the data stored in the file and the specific 
// implementation of the compiler.



// Dilli Hang Rai
// what is 543891505
// 543891505 is the output of the program. It is the binary representation of the data stored in the file 
// and read into the vector. The value of the binary representation depends on the data type, size of the 
// data type, the endianness of the system and other factors.