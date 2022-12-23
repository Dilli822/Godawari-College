
#include<iostream>
using namespace std;

class Point{
    private:
      int x, y;

    public:
     Point(int x1, int y1){
        x = x1;
        y = y1;
     }
    // copy constructor
    // syntax is
    /** Classname(const Classname & objectName){}
     *  Point(const Point& pointObj)
        - note: const is optional **/
    Point(const Point& copyPointerObj){
        x = copyPointerObj.x;
        y = copyPointerObj.y;
    }

    int getX(){return x;}
    int getY(){return y;}

};

int main(){
    Point p23(10, 15); // Normal Constructor is called here
    Point p31 = p23; // Copy constructor is called here

    // Accessing the values assigned by constructors and printing out
    cout << "copyPointerObj.x = " << p23.getX() << "," << p23.getY() << endl;
    cout << "This is from copied pointer obj to new obj. p31 = " << p31.getX() << " p31.y = " << p31.getY();

    return 0;
}