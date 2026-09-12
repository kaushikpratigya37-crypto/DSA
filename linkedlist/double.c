#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
void insertatFirst(struct node **head, int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    if(*head == NULL){
        *head = newnode;
        newnode->data = val;
        newnode->prev = NULL;
        newnode->next = NULL;
        return;
    }

    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = *head;
    (*head)->prev = newnode;
    *head = newnode;
}
int main()
{
    struct node *head = NULL;
    insertatFirst(&head, 10);
    insertatFirst(&head, 20);
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}