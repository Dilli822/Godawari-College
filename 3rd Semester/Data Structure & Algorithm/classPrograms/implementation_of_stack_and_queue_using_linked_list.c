#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void push(struct Stack* stack, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        return -1;  // Underflow
    }
    int data = stack->top->data;
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        return -1;  // Underflow
    }
    int data = queue->front->data;
    struct Node* temp = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    return data;
}

int main() {
    struct Stack stack = { .top = NULL };
    struct Queue queue = { .front = NULL, .rear = NULL };

    push(&stack, 10);
    push(&stack, 20);
    printf("Popped: %d\n", pop(&stack));

    enqueue(&queue, 30);
    enqueue(&queue, 40);
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}
