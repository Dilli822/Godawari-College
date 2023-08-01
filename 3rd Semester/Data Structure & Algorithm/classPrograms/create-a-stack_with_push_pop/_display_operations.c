#include<stdio.h>
#include<stdlib.h>
#define size 5

int top = -1;
int arr[size];

void show() {
  if (top == -1) {
    printf("Stack underflow");
  } else {
    printf("Elements inside the stack are");
    for (int i = top; i >= 0; i--) {
      printf(" %d", arr[top]);
    }
  }
};

void push() {
  if (top == size - 1) {
    printf("Stack overflow");
  } else {
    int x;
    printf("Enter the elements to be inserted into the stack ");
    scanf("%d", & x);
    top = top + 1;
    arr[top] = x;
  }
};

void pop() {
  if (top == -1) {
    printf("Stack underflow");
  } else {
    top = top - 1;
    printf("poped array element is %d ", arr[top]);
  }
}

int main() {
  int choice;
  while (1) {
    printf("\nOperations performed by Stack");
    printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
    printf("\n\nEnter the choice:");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      show();
      break;
    case 4:
      exit(0);
    default:
      printf("\nInvalid choice!!");
    }
  }

  return 0;
}