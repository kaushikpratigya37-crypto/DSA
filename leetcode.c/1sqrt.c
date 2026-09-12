#include <stdio.h>
int main() {
    int x;
    int low, high, mid, ans = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    low = 1;
    high = x;
    while (low <= high) {
        mid = (low + high) / 2;
        if (mid * mid == x) {
            ans = mid;
            break;
        }
        else if (mid * mid < x) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    printf("Square root = %d", ans);
    return 0;
}
//enter a number: 16
//output: Square root = 4