#include <stdio.h>
int main() {
    int n;
    int sum1 = 0, sum2 = 0;
    // Matrix ka size lena
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    // Matrix ke elements input lena
    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            scanf("%d", &matrix[i][j]);
        }
    }
    // Main diagonal ka sum
    for (int i = 0; i < n; i++) {
        sum1 = sum1 + matrix[i][i];
        // Main diagonal: matrix[i][i]
    }
    // Secondary diagonal ka sum
    for (int i = 0; i < n; i++) {
        sum2 = sum2 + matrix[i][n - 1 - i];
        // Secondary diagonal: matrix[i][n-1-i]
    }
    printf("Main diagonal sum = %d\n", sum1);
    printf("Secondary diagonal sum = %d\n", sum2);
    return 0;
}