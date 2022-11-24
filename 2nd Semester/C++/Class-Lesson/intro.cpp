#include <iostream>
// program with using namespace std 
//When we use using namespace std into the C++ program, then it does not require writing
//std:: in front of standard commands throughout the code. Namespace std contains all the
//classes, objects and functions of the standard C++ library.
using namespace std;
int main() {
  string first_name;
  cout << "Enter your first_name: ",
  cin >> first_name;
  cout << "Hello " << first_name << "!" << endl;
  return 0;
}