#include <stdio.h>

int main()
{
    int amount, count = 0;

    printf("Enter Amount: ");
    scanf("%d", &amount);

    if(amount >= 500)
    {
        count = count + (amount / 500);
        amount = amount % 500;
    }

    if(amount >= 200)
    {
        count = count + (amount / 200);
        amount = amount % 200;
    }

    if(amount >= 100)
    {
        count = count + (amount / 100);
        amount = amount % 100;
    }

    if(amount >= 50)
    {
        count = count + (amount / 50);
        amount = amount % 50;
    }

    if(amount >= 20)
    {
        count = count + (amount / 20);
        amount = amount % 20;
    }

    if(amount >= 10)
    {
        count = count + (amount / 10);
        amount = amount % 10;
    }

    if(amount >= 5)
    {
        count = count + (amount / 5);
        amount = amount % 5;
    }

    if(amount >= 2)
    {
        count = count + (amount / 2);
        amount = amount % 2;
    }

    if(amount >= 1)
    {
        count = count + (amount / 1);
        amount = amount % 1;
    }

    printf("Total Notes/Coins = %d", count);

    return 0;
}