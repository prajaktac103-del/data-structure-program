#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int value;

    if (rear == MAX - 1) {
        printf("\n Queue overflow!!");
    } else {
        printf("\nEnter value: ");
        scanf("%d", &value);

        if (front == -1) {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("\n%d = element inserted successfully", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue underflow!!");
    } else {
        printf("\nDeleted from queue = %d", queue[front]);
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

void peek() {
    if (front == -1) {
        printf("\nQueue is empty");
    } else {
        printf("\nFront element = %d", queue[front]);
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("\nQueue is empty");
        return;
    }

    printf("\nQueue: ");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n\n-- Queue Menu --");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("\nExiting program!!");
                return 0;

            default:
                printf("\nInvalid choice!!");
        }
    }

    return 0;
}

