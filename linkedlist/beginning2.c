#include<stdio.h>// printf() ke liye
#include<stdlib.h>// malloc() ke liye

struct Node {
    int data;// node ke andar data store hoga
    struct Node *prev;// previous node ka address
    struct Node *next;// next node ka address
};

// End me element insert karne ka function
void insertElement(struct Node **head, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));// naya node banaya

    if(newNode == NULL) {// agar memory nahi mili
        printf("can't insert\n");// error message
        return;// function se bahar
    }
    newNode->data = val;// new node me value dali
    newNode->next = NULL;// abhi next NULL hai
    newNode->prev = NULL;// abhi prev NULL hai
    if(*head == NULL) {// agar list empty hai
        *head = newNode;// new node ko head bana do
        return;// function khatam
    }
    struct Node *temp = *head;// temp ko head par rakha
    while(temp->next != NULL) {// last node tak jao
        temp = temp->next;// next node par move karo
    }
    temp->next = newNode;// last node ka next new node
    newNode->prev = temp;// new node ka prev last node
}
// Beginning me element insert karne ka function
void insertAtBeginning(struct Node **head, int val) {

    struct Node *newNode = malloc(sizeof(struct Node));// naya node banaya

    if(newNode == NULL) {// agar memory nahi mili
        printf("can't insert\n");// error message
        return;// function se bahar
    }
    newNode->data = val;// new node me value dali
    newNode->prev = NULL;// first node ka prev NULL
    newNode->next = *head;// new node ka next purana head
    if(*head != NULL) {// agar list empty nahi hai
        (*head)->prev = newNode;// purane head ka prev new node
    }
    *head = newNode;// new node ko head bana diya
}
// List print karne ka function
void printlist(struct Node *head) {
    struct Node *temp = head;// temp ko head par rakha
    while(temp != NULL) {// jab tak node available hai
        printf("%d<->", temp->data);// data print karo
        temp = temp->next;// next node par jao
    }
    printf("NULL");// list ke end me NULL
}
int main() {
    struct Node *head = NULL;// initially list empty
    insertElement(&head, 10);                            
    insertElement(&head, 20);                             
    insertElement(&head, 30);
    insertAtBeginning(&head, 13);// beginning me 13 insert
    printlist(head);// puri list print
    return 0;// program end
}