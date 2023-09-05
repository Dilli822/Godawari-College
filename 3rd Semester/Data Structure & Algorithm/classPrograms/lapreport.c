// DSA Lab Report
// Report 1: Dynamic memory allocation and deallocation strategies
#include <stdio.h>
#include <stdlib.h>

int main() {

    int num_elements;

    int *dynamic_array;


    // Read the number of elements from the user
    printf("Enter the number of elements: ");

    scanf("%d", &num_elements);


    // Allocate memory for an array of integers
    dynamic_array = (int *)malloc(num_elements * sizeof(int));


    if (dynamic_array == NULL) {

        printf("Memory allocation failed. Exiting...\n");

        return 1;

    }


    // Input values into the dynamically allocated array
    for (int i = 0;
 i < num_elements;
 i++) {

        printf("Enter element %d: ", i + 1);

        scanf("%d", &dynamic_array[i]);

    }


    // Print the elements of the array along with their memory addresses
    printf("Array elements and their memory addresses:\n");

    for (int i = 0;
 i < num_elements;
 i++) {

        printf("Element %d: %d (Address: %p)\n", i + 1, dynamic_array[i], (void *)&dynamic_array[i]);

    }


    // Deallocate the dynamically allocated memory
    free(dynamic_array);


    return 0;

}


// Report 2: Stack Operations
#include<stdio.h> 
#include<stdlib.h> 
#define Size 4
int Top=-1, inp_array[Size];
 void Push();

void Pop();

void show();

int main() {

int choice;
 while(1)
{

printf("\nOperations performed by Stack");

printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
 printf("\n\nEnter the choice:");

scanf("%d",&choice);

switch(choice)
{

case 1: Push();
 break;

case 2: Pop();

break;

case 3: show();
 break;

case 4: exit(0);

default: printf("\nInvalid choice!!");
 }

}
 }

void Push() {

int x;

if(Top==Size-1) {

printf("\nOverflow!!");
 }

else {

printf("\nEnter element to be inserted to the stack:");
 scanf("%d",&x);

Top=Top+1;

inp_array[Top]=x;

}
 }

void Pop() {

if(Top==-1) {

printf("\nUnderflow!!");
 }

else {

Top=Top-1;
printf("\nPopped element: %d",inp_array[Top]);
 }

}

void show() {

if(Top==-1) {

printf("\nUnderflow!!");
 }

else {


printf("\nElements present in the stack: \n");
 for(int i=Top;
i>=0;
--i)
printf("%d\n",inp_array[i]);

}
 }



// Report 3: Conversion of Infix to postfix expression

// Report 4: Queue Operations
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int inp_arr[SIZE];
int Rear = -1;
int Front = -1;

void enqueue();
void dequeue();
void show();

int main() {
    int ch;

    while (1) {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                printf("Incorrect choice \n");
        }
    }
    return 0;
}

void enqueue() {
    int insert_item;

    if (Rear == SIZE - 1)
        printf("Overflow \n");
    else {
        if (Front == -1)
            Front = 0;

        printf("Element to be inserted in the Queue: ");
        scanf("%d", &insert_item);

        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
}

void dequeue() {
    if (Front == -1 || Front > Rear) {
        printf("Underflow \n");
        return;
    } else {
        printf("Element deleted from the Queue: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
}

void show() {
    if (Front == -1)
        printf("Empty Queue \n");
    else {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}


// Report 6 
// Linked list operations
// Insertion Operations


// Report 7


