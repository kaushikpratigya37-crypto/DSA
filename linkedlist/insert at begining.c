#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void insertElement(struct Node **head, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode == NULL) {
        printf("can't insert\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}
// 13 ko beginning me insert karne ka function
void insertAtBeginning(struct Node **head, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode == NULL) {
        printf("can't insert\n");
        return;
    }
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}
void printlist(struct Node *head) {
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main() {
    struct Node *head = NULL;

    insertElement(&head, 10);
    insertElement(&head, 20);
    insertElement(&head, 30);

    insertAtBeginning(&head, 13);

    printlist(head);

    return 0;
}