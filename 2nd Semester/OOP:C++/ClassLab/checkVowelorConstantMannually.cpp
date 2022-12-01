#include<iostream>
using namespace std;

int main(){
    char c;
    bool isLowercaseVowel,isUpperCaseVowel;
    cout << "Enter an alphabet ";
    cin >> c;

    // evaluates to 1 (true ) if c is lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUpperCaseVowel = (c == 'A' || c == 'E' || c  == 'I' || c == 'O' || c == 'U');
     
    // show error message if C is not an alphabet
    if(!isalpha(c))
       printf("Error!Non-alphaberic character ");
       else if(isLowercaseVowel || isUpperCaseVowel)
         cout << c << " is a vowel ";
        else 
         cout << c << " is a constant";
    return 0;
}