#include <stdio.h>

int main() {
int pin, balance = 10000, amount;

printf("Enter PIN: ");
scanf("%d", &pin);

if (pin == 1234) {

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (balance < 500) {
        printf("Insufficient minimum balance");
    }
    else if (amount > balance) {
        printf("Insufficient balance");
    }
    else if (amount <= 0) {
        printf("Invalid amount");
    }
    else if (amount % 10 != 0) {
        printf("Amount must be a multiple of 10");
    }
    else {
        balance = balance - amount;

        printf("Withdrawal successful\n");
        printf("Remaining balance = %d\n", balance);

        if (balance < 1000) {
            printf("Warning: Low balance!");
        }
    }

}
else {
    printf("Incorrect PIN");
}

return 0;


}