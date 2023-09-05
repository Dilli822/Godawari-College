#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head) {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return NULL;
    }

    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index) {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return NULL;
    }

    if (index == 0) {
        return deleteFirst(head);
    }

    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1 && q != NULL; i++) {
        p = p->next;
        q = q->next;
    }

    if (q == NULL) {
        printf("Invalid index. Deletion failed.\n");
        return head;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node *deleteAtLast(struct Node *head) {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node *deleteByValue(struct Node *head, int value) {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return NULL;
    }

    if (head->data == value) {
        return deleteFirst(head);
    }

    struct Node *p = head;
    struct Node *q = head->next;

    while (q != NULL && q->data != value) {
        p = p->next;
        q = q->next;
    }

    if (q != NULL) {
        p->next = q->next;
        free(q);
    } else {
        printf("Element with value %d not found. Deletion failed.\n", value);
    }

    return head;
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link the nodes in the linked list
    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // Uncomment the following lines one at a time to test different deletion operations
    // head = deleteFirst(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteAtLast(head);
    // head = deleteByValue(head, 4);

    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    // Free allocated memory for nodes to prevent memory leaks
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
