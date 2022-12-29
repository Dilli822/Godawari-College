#include<iostream>
using namespace std;

int main(){
    char line[150];
    int vowels, consonants, digits, spaces;

    vowels = consonants = digits = spaces = 0;

    cout << "Enter a line of string";
    //The C++ getline() is an in-built function defined in the <string. h> header file that allows accepting and reading single and multiple line strings from the input stream. In C++, the cin object also allows input from the user, but not multi-word or multi-line input.
    cin.getline(line, 150);

    for(int i = 0; line[i] != '\0'; ++i){
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'
        || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U' ){
            ++vowels;
        }
        else if((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'a' && line[i] <= 'z')){
            ++consonants;
        }
        else if(line[i] >='O' && line[i] <='z' || (line[i]>='A' && line[i]<='Z')){
            ++digits;
        }
        else if(line[i] == '/0'){
            ++spaces;
        }
    }

        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "Digits " << digits << endl;
        cout << "White Spaces: " << spaces << endl;
    return 0;
}