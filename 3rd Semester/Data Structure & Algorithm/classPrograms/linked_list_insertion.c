/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};


void linkedlist_traversal(struct node *ptr){
    while(ptr != NULL){
        printf("data is %d  ", ptr->data);
        ptr = ptr->next;
    }
    
};


// insertion at the first node
struct node *insertNode_At_firstNode(struct node *head, int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    // insertion of data into ptr variable
    ptr->data = data;
    // assigning the head address to the ptr variable
    ptr->next = head;
    // now ptr is head
    head = ptr;
    return ptr;
}

// insetion of node at the index
struct node *insertNode_At_Index(struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    // new p pointer variable
    struct node *p = head;
    int i = 0;
    
    while(i != index - 1){
        p = p->next;
        i++;
    }
    
    // ptr has data now
    ptr->data = data;
    // now ptr has head's next address
    ptr->next = p->next;
    
    // now p is ptr which have data and head's next addess
    p->next = ptr;
    return head;
    
}

// insertion of node at the last
struct node *insertNode_At_LastIndex(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    // ptr node is created after assiging the data to the ptr
    ptr->data = data;
    
    // now p pointer has head node
    struct node *p = head;
    
    while(p->next != NULL){
        p = p->next;
    }
    
    // p pointer variable
    p->next = ptr;
    
    // since ptr is new node at the last index
    ptr->next = NULL;
    return head;
    
}


int main(){
    struct node *head;
    struct node *first_node;
    struct node *second_node;
    
    // dynamically allocate the memory
    head = (struct node *) malloc(sizeof(struct node));
    first_node = (struct node *) malloc(sizeof(struct node));
    second_node = (struct node *) malloc(sizeof(struct node));
    
    // assign the data and address for node
    head->data = 12;
    head->next = first_node;
    
    first_node->data = 23;
    first_node->next = second_node;
    
    second_node->data = 34;
    second_node->next = NULL;
    
    
    // show the display
    linkedlist_traversal(head);
       printf("linked list created and new node is inserted at the first");
    // insertion of node at first/begining or makeing new node at the first
    head = insertNode_At_firstNode(head, 1);
    
    
    // show the display
    linkedlist_traversal(head);
    
    
    insertNode_At_Index(head, 4, 2);
    
    // show the display
    linkedlist_traversal(head);
    
    printf("linked list created");

    return 0;
}

