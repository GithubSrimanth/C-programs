// Implement the single LL and print those nodes
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Data for the nodes
    int node[5] = {1, 2, 3, 4, 5};
    int size=5;

    // Create the first node
    struct Node* head = NULL;
    struct Node* temp = NULL;
    
    for (int i = 0; i < size; i++) {
        // Allocate memory for a new node
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = node[i];
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            //temp- = temp->next;
            temp = newNode;
        }
    }

    // Print all nodes using a while loop
    temp = head; // Start from the head of the list
    printf("Linked List: ");
    while (temp != NULL) {    // Iterate until current node becomes NULL
        printf("%d ", temp->data); // Print data of the current node
        temp = temp->next;  // Move to the next node
    }

    return 0;
}

OUTPUT:
Linked List: 1 2 3 4 5
