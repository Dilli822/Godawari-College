#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int linkedlist_traversal(struct node *ptr){
    while(ptr!= NULL){
        printf("data is %d ", ptr->data);
        ptr = ptr->next;
    }
};

struct node *delete_node_atfirstNode(struct node *head){
    struct node *ptr;
    // ptr node is head
    ptr = head;
    // now head has secondnode address or it is secondnode
    head = head->next;
    free(ptr);
    return head;
}



struct node *delete_node_at_index(struct node *head, int index){
    struct node *p = head;

    // in our case head->next is firstnode
    struct node *q = head->next;

    for(int i = 0; i < index -1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *delete_node_at_last(struct node *head){
    struct node *p = head;
    struct node *q = head->next;

    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main(){
    struct node *head;
    struct node *firstnode;
    struct node *secondnode;
    
    head = (struct node *)malloc(sizeof(struct node));
    firstnode = (struct node *)malloc(sizeof(struct node));
    secondnode = (struct node *)malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = firstnode;
    
    firstnode->data = 2;
    firstnode->next = secondnode;
    
    secondnode->data = 3;
    secondnode->next = NULL;
    
    linkedlist_traversal(head);
    
    return 0;
}
