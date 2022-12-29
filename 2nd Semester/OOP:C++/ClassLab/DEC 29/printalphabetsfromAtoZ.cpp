#include<iostream>
using namespace std;

int main(){
    int character = 0;
    char ch = "A";
    do{
        character = int(ch);
        cout << ch << " ";
        character++;
        ch = char(character);
    }
    while(ch <= "Z");
}