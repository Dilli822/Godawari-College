
// #include <iostream>
// #include<string>
// using namespace std;

// // global variable
// string sem;

// class Student{
//     public:
//       int totalStudents;
//       int totalSubjects;

//     int records(int totalStudents){
//         if(sem == "first"){
//             cout << "total students in " << sem << ":" << totalStudents << endl;
//         }
//         else if(sem == "second"){
//             cout << "total students in " << sem << ":" << totalStudents << endl;
//         }
//         else if(sem == "third"){
//             cout << "total students in " << sem << ":" << totalStudents << endl;
//         }
//         return 0;
//     }
    
// };

// class MyClass{

// };

// int main() {
//     // Student *firstSem = new Student;
//     // Student *newFirstSem = firstSem;

//     Student firstSem,SecondSem,ThirdSem;
//     firstSem.records(29);
//     SecondSem.records(26);
//     ThirdSem.records(24);
//     cout << "Enter which Semester do you want to print out the student details? first ,second or third " << endl;
//     cin >> sem;
    
//   return 0;
// }

// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped
// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;
class Student{
    public:
    int totalStudent = 0;
    int totalSubject = 0;
    int girls = 0;
    int boys = 0;
    int busStudent = 0;
 
    public:
    int print(string sem){
        
        cout << sem << endl;
        cout << "-----------------------------" << endl;
        cout << "TotalStudent " << totalStudent << endl<< "TotalSubject " << totalSubject << endl<< "No.of Girls " << girls << endl << "No.of boys " << boys << endl << "No.of Bus Students " << busStudent << endl;
        cout << "========================================" << endl;
        return 0;
    }
};
int main() {
    cout << "Godawari College Semester Records " << endl;
    Student firstSem,SecondSem,ThirdSem;
    firstSem.print("First Semester");
    firstSem.totalStudent = 30;
    firstSem.totalSubject = 5;
    firstSem.girls = 10;
    firstSem.boys = 20;
    firstSem.busStudent = 9;
    
    
    SecondSem.print("Second Semester");
    SecondSem.totalStudent = 26;
    SecondSem.totalSubject = 5;
    SecondSem.girls = 0;
    SecondSem.boys = 26;
    SecondSem.busStudent = 18;
    
    
    ThirdSem.print("Third Semester");
    ThirdSem.totalStudent = 33;
    ThirdSem.totalSubject = 5;
    ThirdSem.girls = 13;
    ThirdSem.boys = 20;
    ThirdSem.busStudent = 12;

   return 0;
}
