#include <stdio.h>
#include <stdlib.h>

struct Node {
    int bookID;
    struct Node* next;
};

void insert_at_beginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->bookID = data;
    newNode->next = *head;
    *head = newNode;
}

void insert_at_end(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->bookID = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_node(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;

    if (temp != NULL && temp->bookID == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->bookID != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void traverse(struct Node* node) {
    printf("Issued Book IDs: ");
    while (node != NULL) {
        printf("%d -> ", node->bookID);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* library = NULL;

    insert_at_end(&library, 101);      
    insert_at_end(&library, 102);      
    insert_at_beginning(&library, 50); 
    traverse(library);

    delete_node(&library, 101);     
    printf("After returning 101: ");
    traverse(library);

    return 0;
}
