#include <iostream>
#include <string>
using namespace std;

// simple inheritance program that stores customer details
class Customer {
  private:
    string name;
    string address;
    string phone;
    

  public:
    Customer(string name, string address, string phone) {
      this->name = name;
      this->address = address;
      this->phone = phone;
    }

    void printDetails() {
      cout << "Name: " << name << endl;
      cout << "Address: " << address << endl;
      cout << "Phone: " << phone << endl;
    }

};

class PremiumCustomer: public Customer {
  private:
    int loyaltyPoints;

  public:
    PremiumCustomer(string name, string address, string phone, int loyaltyPoints)
      : Customer(name, address, phone) {
        this->loyaltyPoints = loyaltyPoints;
    }

    void printDetails() {
      Customer::printDetails();
      cout << "Loyalty Points: " << loyaltyPoints << endl;
    }

};

int main() {
    string name,address,phone;
    int loyaltyPoints;
    cout <<"============Enter Details for Normal customers========" << endl;
    cout << "Enter customer name: " << endl; 
    cin >> name;
    cout << "Enter customer address: " << endl; 
    cin >> address;
    cout  << "Enter customer phone: "  << endl; 
    cin >> phone;
    Customer c1(name,address,phone);

    cout <<"============Enter Details for permium customers========" << endl;
    cout << "Enter customer name: " << endl; 
    cin >> name;
    cout << "Enter customer address: " << endl; 
    cin >> address;
    cout  << "Enter customer phone: "  << endl; 
    cin >> phone;
    cout  << "Enter Permium customer loyalty points: "  << endl; 
    cin >> loyaltyPoints;
    PremiumCustomer c2(name, address, phone, loyaltyPoints);

  c1.printDetails();
  cout << endl;
  c2.printDetails();
  return 0;
}
