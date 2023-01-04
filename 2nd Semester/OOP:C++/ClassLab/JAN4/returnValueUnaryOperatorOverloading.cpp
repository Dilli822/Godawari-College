#include<iostream>
using namespace std;

class Count{
    private:
      int value;
    
    public:
      // contructor to initialize count to 5
      Count() : value (5){}

      // overload ++ when used as prefix
      Count operator ++(){
        Count temp;
        //Here value is the value attribute of the calling object
        temp.value = ++value;
        cout << " pre temp ++value of obj temp of operator++ :  " << value;
        // returning object temp
        return temp;
      }

      // overload ++ when used as postfic
      Count operator ++(int){
        Count temp;

        // here value is the value attribute of the calling object
        temp.value = value++;
        
        cout << "Post temp value++ of obj temp of ++(int) operator: " << value;

        // returning object temp
        return temp;
      }

      void display(){
        cout << " " << endl;
        cout << "Count from Display func is : " << value << endl;
      }


};

int main(){
    Count count1, result;

    // calling the "Count Operator ++() function"
    result = ++count1;
    result.display();


    //cout << "--------- " << endl;

    //cout << "Count of operator++ keeps on increasing as we keep on calling the function. " << endl;
    result.operator++();
    cout << "" << endl;
    result.operator++();
    cout << " " << endl;
    //cout << "--------------------" << endl;

    // calling the "Count operator ++(int) function"
    result = count1++;
    result.display();

    return 0;
}