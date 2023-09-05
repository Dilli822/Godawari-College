

// // do-while loops execute a statement once before going to the loop condition
// // even if the condition is meet it will go to iteration or looping
// // syntax is do{} while(){}

// // while-loop first check the condition and only the loop will execute
// // syntax is while(){}


// // for loops 
// // syntax is for(intialization; condition; updated(increment/decrement)) { // loop body }
// // In C programming, a for loop is a control flow statement that allows 
// // you to execute a block of code repeatedly based on a specified condition

// /*
// For loops are a powerful tool for 
// executing a block of code repeatedly 
// based on a specified condition. They are 
// often used when you know the number of iterations 
// or want to iterate over a range of values, such as 
// in the examples provided.
// */

// #include<stdio.h>
// int main(){
//     int i = 0;
//     do{
//         printf(" %d ", i);
//         i++;
//     }
//     while(i< 10);
//     printf("%d", i);

//     printf("\n------------\n");

//     i = 0;

//     while( i < 5){
//         i++;
//         printf("%d ", i);
//     }
//     printf("\n------------\n");


//     printf(" for looping in strings \n- ");

//     char str[] = "Hello";
//     for (int i = 0; str[i] != '\0'; i++) {
//         printf("%c ", str[i]);
//     }

//     printf("\n");

//     i = 10;
//     for (int i = 10; i < 20; i++){
//         printf(" %d", i);
//     }

//     return 0;
// }

// / Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arrA[4] = {12,2,6,7};
    int arrC[4];
    for(int i = 0; i < 4; i++){
        arrC[i];
        printf("%d", arrC[i]);
    }
 

    return 0;
}