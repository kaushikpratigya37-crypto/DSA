/*
STACK IN C

Definition:
Stack is a linear data structure in which
insertion and deletion happen at TOP.

LIFO:
Last In, First Out.
Jo element last mein insert hota hai,
wo sabse pehle remove hota hai.

Example:
PUSH(10)
PUSH(20)
PUSH(30)

Stack:
    30 <- TOP
    20
    10

POP removes 30 first.

VARIABLES:
arr[5]  = stores 5 elements
top = -1 = stack is empty
size = 5 = maximum capacity

CONDITIONS:
Empty: top == -1
Full:  top == size - 1

OPERATIONS:
PUSH    = Insert element
POP     = Remove top element
PEEK    = Show top element
DISPLAY = Show all elements

OVERFLOW:
Trying to insert into a full stack.

UNDERFLOW:
Trying to remove from an empty stack.
*/
----------------------------------------------------------------------------------------------------
/*
## 1. What is Stack?
Stack is a linear data structure that follows LIFO (Last In, First Out).

## 2. Important Terms
- arr[5] → Stack mein maximum 5 elements store ho sakte hain.
- top = -1 → Stack initially empty hai.
- Push → Element insert karna.
- Pop → Top element remove karna.
- Peek→ Top element ko bina remove kiye dekhna.
- Size → Total elements count karna.
- IsEmpty → Check karna ki stack empty hai ya nahi.
- Overflow → Full stack mein element insert karna.
- Underflow → Empty stack se element remove ya peek karna.
*/
#include <stdio.h>

// Stack array with capacity 5
int arr[5];
int top = -1;

// PUSH: Insert an element into stack
int push(int val)
{
    // Check if stack is full
    if (top == 4)
        return -1;  // Stack Overflow

    top++;
    arr[top] = val;

    return 0;  // Successful insertion
}

// PEEK: Return the top element without removing it
int peek()
{
    // Check if stack is empty
    if (top == -1)
        return -1;  // Stack Underflow

    return arr[top];
}

// POP: Remove and return the top element
int pop()
{
    // Check if stack is empty
    if (top == -1)
        return -1;  // Stack Underflow

    int val = arr[top];
    top--;

    return val;
}

// SIZE: Count the number of elements
int isSize()
{
    return top + 1;
}

// ISEMPTY: Check whether stack is empty
int isEmpty()
{
    if (top == -1)
        return 1;  // Stack is empty
    else
        return 0;  // Stack is not empty
}

int main()
{
    // Insert elements
    push(10);
    push(20);
    push(30);

    printf("Push: 10 20 30\n");

    // Display the top element
    printf("Peek: %d\n", peek());

    // Remove the top element
    printf("Pop: %d\n", pop());

    // Display the current size
    printf("Size: %d\n", isSize());

    // Check whether stack is empty
    printf("Is Empty: %d\n", isEmpty());

    return 0;
}
/*

## 6. Important Formulas for Exams

- Full stack:top == 4
- Empty stack: top == -1
- Current size: top + 1
- Push: top++; arr[top] = val;
- Pop:val = arr[top]; top--;
- Peek: return arr[top];

Remember: LIFO = Last In, First Out.
*/