#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct User {
    std::string name;
    string age;
};

int main(){
    User user;
    vector<User> users;
    ifstream db("db.txt");
    bool found = false;

    cout << "Enter the name of user: ";
    cin >> user.name;   
    
     if (found) {
        cout << "User already exists. Enter a new user." << endl;
        return 0;
    }
    
    cout << "Enter the age of user: ";
    cin >> user.age;

    string name;
    string age;
    while (db >> name >> age) {
        User u = {name, age};
        users.push_back(u);
        if (name == user.name && age == user.age) {
            found = true;
            break;
        }
    }
    db.close();

    if (found) {
        cout << "User already exists. Enter a new user." << endl;
        return 0;
    }

    users.push_back(user);
    ofstream file("db.txt");
    for (auto u : users) {
        file << u.name << " " << u.age << endl;
    }
    file.close();

    ifstream file2("db.txt");
    cout << "Details of all users:" << endl;
    while (file2 >> name >> age) {
        cout << "Name: " << name << " Age: " << age << endl;
    }
    file2.close();

    return 0;

}
