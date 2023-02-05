#include<iostream>
using namespace std;

// global 
int number;

// call by value it gets only copy of variable
int swap(int a, int b){
  int c = a;
  a = b;
  b = c;
}

// pass by reference or call by reference. it will directly change the reference variable value
int swaps(int &a, int &b){
  int c = a;
  a = b;
  b = c;
}

// return by reference is suitable for multiple function arguments to modify the same reference or variable
int &pass();

class Laptop{
  // default public constructor
  public:
  Laptop(){
    cout << " Default public constructor with zero arguments " << endl;
  }

  // copy constructor
  Laptop(const Laptop &copyConstructObj){
    cout << " This is copy constructor " << endl;
  }

};

// parameterized constructor
class Pass{
  private:
  int x;
  int y;
  public:
  Pass(int age, int number){
    x = age;
    y = number;
    cout << age << " " << number << endl;
  }
};

int main(){
  int first_number = 1, second_number = 2;
  swap(first_number, second_number);
  cout << "after swapping " << first_number << " " << second_number << endl;
  
  swaps(first_number, second_number);
  cout << "after swapping " << first_number << " " << second_number << endl;

  pass() = 2023;
  cout << pass() << endl;

  // class obj
  Laptop macbook;
  Laptop hp = macbook;

  Pass obj(23,31);

  return 0;
}

int &pass(){
  return number;
}