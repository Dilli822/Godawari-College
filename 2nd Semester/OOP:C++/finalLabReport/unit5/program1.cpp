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
    Customer c1("sapal","itahari","981234567");

    PremiumCustomer c2("dilli", "itahari", "9862231468", 8.5);

  c1.printDetails();
  cout << endl;
  c2.printDetails();
  return 0;
}
