#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

int main(){
    struct node n1;
    struct node n2;
    struct node n3;
    n1.data = 4;
    n2.data = 45;
    n3.data = 67;
    n1.prev = NULL;
    n1.next = &n2;
    n2.prev = &n1;
    n2.next = &n3;
    n3.prev = &n2;
    n3.next = NULL;
    printf("NULL <-> %d <-> %d <-> %d <-> NULL",n1.data, n2.data, n3.data);
    return 0;
}