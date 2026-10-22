/*LINKED LIST IN C — NOTES
1. LINKED LIST
Linked List ek linear data structure hai jisme elements nodes ke form mein store hote hain. Har node mein data aur next node ka address hota hai.

Array mein elements generally continuous memory locations mein store hote hain, lekin Linked List ke nodes memory mein alag-alag locations par ho sakte hain.

Example:

10 -> 20 -> 30 -> NULL

Important terms:

- Node: Data aur pointer ka combination.
- Data: Actual value store karta hai.
- Pointer: Next node ka address store karta hai.
- Head: First node ka address store karta hai.
- NULL: List ka end show karta hai.


Types of Linked List:

1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List


2. SINGLY LINKED LIST

Singly Linked List mein har node ke paas data aur ek next pointer hota hai.

Structure:

struct Node {
    int data;
    struct Node *next;
};

Example:

10 -> 20 -> 30 -> NULL

Important points:

- Traversal sirf forward direction mein hota hai.
- Last node ka next NULL hota hai.
- Har node mein ek pointer hota hai.

Time complexity:

- Beginning insertion: O(1)
- End insertion: O(n), jab tail pointer use nahi karte.
- Traversal: O(n)


3. DOUBLY LINKED LIST

Doubly Linked List mein har node ke paas data, prev aur next pointers hote hain.

Structure:

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

Example:

NULL <-> 10 <-> 20 <-> 30 <-> NULL

Important points:

- Forward aur backward dono directions mein traversal hota hai.
- First node ka prev NULL hota hai.
- Last node ka next NULL hota hai.
- Do pointers ki wajah se extra memory lagti hai.

Time complexity:

- Beginning insertion: O(1)
- End insertion: O(n), jab tail pointer use nahi karte.
- Traversal: O(n)


4. CIRCULAR LINKED LIST

Circular Linked List mein last node ka next NULL nahi hota. Woh wapas first node ko point karta hai.

Example:

10 -> 20 -> 30
^           |
|___________|

Singly Circular Linked List mein last node ka next, head ko point karta hai.

Important points:

- List ka end NULL se identify nahi hota.
- Traversal circular manner mein hota hai.
- Traversal ko rokne ke liye head par wapas aane ki condition use kar sakte hain.
- Circular Linked List ka singly aur doubly, dono forms ho sakte hain.

Time complexity:

- Beginning insertion: O(1), agar head pointer ke saath suitable linking ho.
- End insertion: O(n), agar tail pointer use nahi karte.
- Traversal: O(n).


5. DIFFERENCE BETWEEN LINKED LIST TYPES

Singly Linked List:
- Pointers: 1
- Direction: Forward
- Last node: next = NULL

Doubly Linked List:
- Pointers: 2
- Direction: Forward and backward
- First node: prev = NULL
- Last node: next = NULL

Circular Linked List:
- Singly circular mein pointer: 1 per node
- Direction: Forward
- Last node: next = head

Remember:

Singly = One pointer

Doubly = Two pointers

Circular = Last
*/
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