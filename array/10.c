#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    char city[30];

    scanf("%d", &roll);
    scanf(" %[^\n]", name);
    scanf("%s", city);

    printf("roll number: %d\n", roll);
    printf("full name: %s\n", name);
    printf("city: %s\n", city);

    return 0;
}