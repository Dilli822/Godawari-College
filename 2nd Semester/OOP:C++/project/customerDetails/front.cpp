#include <iostream>
#include <fstream>

struct User {
    std::string name;
    int age;
};

int main() {
    std::ifstream file("db.txt");
    std::string name;
    int age;

    std::cout << "Details of all users:" << std::endl;
    while (file >> name >> age) {
        std::cout << "Name: " << name << " Age: " << age << std::endl;
    }
    file.close();

    return 0;
}
