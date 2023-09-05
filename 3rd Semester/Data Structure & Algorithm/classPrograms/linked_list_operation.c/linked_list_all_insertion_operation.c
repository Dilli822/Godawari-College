#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Printing all nodes
void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insert at the beginning
struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// Insert at a specified index
struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    if (index == 0) {
        ptr->next = head;
        return ptr;
    }

    struct Node *current = head;
    int i = 0;
    while (i < index - 1 && current != NULL) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Invalid index. Insertion at the end.\n");
        return head;
    }

    ptr->next = current->next;
    current->next = ptr;
    return head;
}

// Insert at the end
struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) {
        return ptr;
    }

    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = ptr;
    return head;
}

// Insert after a node
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL. Insertion failed.\n");
        return head;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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

    // Link first and second nodes
    head->data = 2;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 4;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 5;
    fourth->next = NULL;

    printf("Linked list after creating\n");
    linkedListTraversal(head);

    // Insert nodes to test various insertion operations
    head = insertAtFirst(head, 1);
    head = insertAtIndex(head, 17, 3);
    head = insertAtEnd(head, 90);
    head = insertAfterNode(head, second, 54);

    printf("\nLinked list after inserting\n");
    linkedListTraversal(head);

    // Free allocated memory for nodes to prevent memory leaks
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
