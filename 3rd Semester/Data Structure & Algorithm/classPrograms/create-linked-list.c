#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

void transversal(struct Node *ptr){
    while(ptr != NULL){
        printf("node values are = %d ", ptr->data);
        ptr = ptr->next;
    }
};

int main(){
    struct Node *head;
    struct Node *firstNode;
    struct Node *secondNode;

    head = (struct Node *) malloc(sizeof(struct Node));
    firstNode = (struct Node *) malloc(sizeof(struct Node));
    secondNode = (struct Node *) malloc(sizeof(struct Node));

    head->data = 9;
    firstNode->data = 10;
    secondNode->data = 17;
    
    head->next = firstNode;
    firstNode->next = secondNode;
    secondNode->next = NULL;

    transversal(head); // print from 10 and 17

    return 0;
};