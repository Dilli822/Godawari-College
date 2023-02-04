#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string username;
  
    firstCred: cout << "Enter your username: ";
    cin >> username;

    // read file names dbs.txt 
    ifstream file("dbs.txt");
    string line;
    bool found = false; 

    while (getline(file, line)) {
        if (line == username) {
            found = true;
            break;
        }
    }

    if (!found) {
        // outfile is an object of ofstream here ios::app dono allow to overwrite the previous existing text in file dbs.txt
        ofstream outfile("dbs.txt", ios::app);
        outfile << username << "\n"; // outfile means writing username in dbs.txt
        cout << "Username saved successfully!" << endl;

        cout << "welcome ," << username << endl;
    } else {
        std::cout << "Username already exists." << endl;
        goto firstCred; // goto statement if username match found
    }

    return 0;
}


/**
 * ifstream is a class in the C++ Standard Template Library (STL) used for 
 * reading data from files. An object of type ifstream can be created and 
 * used to open a file and read its contents.
 * 
 * Here file is an object of ifstream and object file will open the "dbs.txt" file
 * 
 * get line is pre defined functions in c++
Yes, getline is a pre-defined function in C++. It is part of the Standard Template Library (STL) 
and is used to read a line of text from an input stream, such as a file or the standard input (cin).

The getline function has the following signature:

istream& getline(istream& is, string& str);
It takes two arguments: an input stream is and a string str. The function reads a line of 
text from the input stream and stores it in the string str. The function returns a reference 
to the input stream, allowing you to chain multiple calls to getline together.


outfile is an object of type 
std::ofstream in the above example. 
The name outfile is a variable that is used 
to refer to the output file stream. The open() method is 
called on outfile to open a file named "example.txt" for writing. 
The data is then written to the file using the << operator. 
Finally, the close() method is called to close the file stream 
and free up any associated resources.

In short, outfile is an object that is used to write data to a file.
 * 
*/