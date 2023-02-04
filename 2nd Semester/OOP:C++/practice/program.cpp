#include<iostream>
using namespace std;

int num;
// return by reference 
int &add();

int main(){
  add() = 34;
  return 0;
}

int &add(){
  return num;
}

// return by reference means returing pointer to an object which means returning origrinal value rather than duplicate
// we can modify he same object or function arguments
// we use & to return the object 
// multiple function can access and modify the same object
// retuning to reference means passing pointer to an object