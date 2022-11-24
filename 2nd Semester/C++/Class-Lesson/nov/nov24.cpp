#include<iostream>
// program without using namespace std
int main(){
    std::string full_name;
    std::cout << "Enter your fullname: ";
    std::cin >> full_name;
    std::cout << "Your name is " + full_name + "!" << std::endl;
    return 0;
}

//// Program with using partial std cout and endl
// using std::cout;
// using std::endl;
// using std::string;

// int main(){
//     string full_name;
//     cout << "Enter your fullname:This is an example of using partial std::cout or std::cin  ";
//     std::cin >> full_name;
//     cout << "Your name is " + full_name + "!" << endl;
//     return 0;
// }
