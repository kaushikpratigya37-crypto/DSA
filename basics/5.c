#include <stdio.h>

int main() {
    float salary, bonus, totalSalary;
    int years;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &years);

    if (years >= 5) {
        bonus = salary * 0.10;
    }
    else if (years >= 3) {
        bonus = salary * 0.07;
    }
    else if (years >= 1) {
        bonus = salary * 0.05;
    }
    else {
        bonus = 0;
    }

    totalSalary = salary + bonus;

    printf("Bonus = %.2f\n", bonus);
    printf("Total Salary = %.2f\n", totalSalary);

    return 0;
}