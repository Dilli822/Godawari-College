#include <iostream>
using namespace std;

int main() {
    // Basic to basic data conversion
    int i = 10;
    float f = static_cast<float>(i);
    cout << "i = " << i << ", f = " << f << endl;

    // Basic to user-defined data conversion
    float flt = 3.5;
    int feet = static_cast<int>(flt);
    
    float inches = 12 * (flt - feet);
    cout << feet << "\'-" << inches << "\"" << endl;

    // User-defined to basic data conversion
    int feet_ = 3;
    float inches_ = 6;

    float flt_ = feet_ + inches_ / 12;
    cout << "flt_ = " << flt_ << endl;

    // User-defined to user-defined data conversion
    int feet1 = 2;
    int feet2 = 3;

    float inches1 = 6;
    float inches2 = 6;

    int ft = feet1 + feet2;

    float in = inches1 + inches2;

    if (in >= 12.0) {
        in -= 12.0;
        ft++;
    }
    cout<<ft<<"\'"<<"-"<<in<<"\""<< endl;
    return 0;
}
