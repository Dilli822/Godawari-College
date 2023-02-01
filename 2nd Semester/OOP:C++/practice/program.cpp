// pass by reference

#include<iostream>
using namespace std;

// function having reference variable as arguments or passing refeernce as an argument
int add(int &a, int &b){
  return a + b;
}

// function return by reference in c++
int &addOne(int &a, int &b){
  
}

int main(){
  int x = 34, y =56;

  cout << add(x,y);
  return 0;
}