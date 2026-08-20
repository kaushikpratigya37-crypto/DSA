#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node n1;
    n1.data=4;
    n1.next=NULL;
    printf("%d->",n1.data);
    printf("NULL");

}