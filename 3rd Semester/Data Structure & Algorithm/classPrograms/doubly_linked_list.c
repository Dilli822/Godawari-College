/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>


// creaeting a node for linked list
struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void doubly_linked_list_traversal(struct node *ptr){
    while(ptr != NULL ){
        printf("the data are %d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    printf("Doubly Linked. List");
    
    struct node *head;
    struct node *second_node;
    struct node *third_node;
    struct node *fourth_node;
    
    
    head = (struct node *) malloc(sizeof(struct node));
    second_node = (struct node *) malloc(sizeof(struct node));
    third_node = (struct node*) malloc(sizeof(struct node));
    fourth_node = (struct node*)malloc(sizeof(struct node));
    
    
    head->data = 1;
    head->next = second_node;
    head->prev = NULL;
    
    second_node->data = 2;
    second_node->next = third_node;
    second_node->prev = head;
    
    
    third_node->data = 3;
    third_node->next = fourth_node;
    third_node->prev = second_node;
    
    fourth_node->data = 4;
    fourth_node->next = NULL;
    fourth_node->prev = third_node;
    
    
    doubly_linked_list_traversal(head);
    
    

    return 0;
}
