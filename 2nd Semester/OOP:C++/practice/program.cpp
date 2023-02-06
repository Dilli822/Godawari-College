#include<iostream>
using namespace std;

class Speaker{
  //data members
  public:
  string brandName;
  string modelName;

  // constructor
  Speaker(){
    cout << "constructor" << endl;
    cout << modelName << " " << brandName << endl;
  }

  // function or method members
  void mobileDetails(Speaker brand, Speaker model){
    cout << " ------------------- " << endl;
    cout << brand.brandName << " " << model.modelName << endl;
  }
};

int main(){
  // class object creation
  Speaker obj1, obj2, callObj;
  obj1.brandName  = "iphone";
  obj2.modelName = "14 pro max";
  callObj.mobileDetails(obj1, obj2);

  return 0;
}