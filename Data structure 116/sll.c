#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;
int main() {
    int choice, value;
    struct node *newnode, *temp;
    while (1) {
        printf("\n--- Stack using LL ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                newnode = (struct node *)malloc(sizeof(struct node));
				if (newnode == NULL) {
                    printf("\nStack is overflow");
                } 
				else {
                    printf("\nEnter your value: ");
                    scanf("%d", &value);

                    newnode->data = value;
                    newnode->next = top;
                    top = newnode;

                    printf("\nPushed into stack = %d", value);
                }
                break;
            case 2:
                if (top == NULL) {
                    printf("\nStack is underflow");
                } 
				else {
                    temp = top;
                    printf("\nPopped from stack = %d", top->data);
                    top = top->next;
                    free(temp);
                }
                break;

            case 3:
                if (top == NULL) {
                    printf("\nStack is empty");
                } else {
                    printf("\nTop element = %d", top->data);
                }
                break;

            case 4:
                if (top == NULL) {
                    printf("\nStack is empty");
                }
				 else {
                    temp = top;
                    printf("\nStack elements are: ");

                    while (temp != NULL) {
                        printf("%d -> ", temp->data);
                        temp = temp->next;
                    }
                    printf("NULL");
                }
                break;

            case 5:
                printf("\nExiting...!!");
                return 0;

            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}

