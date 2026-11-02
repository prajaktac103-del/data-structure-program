#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;
void enqueue() {
    int value;

    if ((rear + 1) % MAX == front) 
	{
        printf("\nQueue Overflow!!");
    } 
    else {
        printf("\nEnter value: ");
        scanf("%d", &value);

        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % MAX;
        queue[rear] = value;

        printf("\n%d elements inserted successfully", value);
    }
}
void dequeue() {
    if (front == -1) {
        printf("\nQueue Underflow!!");
    } 
    else {
        printf("\nDeleted element = %d", queue[front]);

        if (front == rear) {
            front = rear = -1;
        } 
        else {
            front = (front + 1) % MAX;
        }
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("\nQueue is empty");
        return;
    }

    printf("\nQueue: ");

    i = front;

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear) {
            break;
        }

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n\n--- Circular Queue Menu ---");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

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
                display();
                break;

            case 4:
                printf("\nExiting program!!");
                return 0;

            default:
                printf("\nInvalid choice!!");
        }
    }

    return 0;
}
