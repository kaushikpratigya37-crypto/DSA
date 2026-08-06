#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter electricity units: ");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else if (units <= 300)
    {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + (100 * 20) + (units - 300) * 25;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}