#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
//logic
    int sum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum = arrSum + arr[i];
    }
    int missing = sum - arrSum;
    printf("Missing number = %d", missing);
    return 0;
}
//enter number of elements: 5
//enter elements: 1 2 3 5
//output: Missing number = 4
//enter number of elements: 5
//enter elements: 1 2 3 4 5
//output: Missing number = 0