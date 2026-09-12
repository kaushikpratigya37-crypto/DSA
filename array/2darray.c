#include <stdio.h>
int main() {
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);   // User se rows lena

    printf("Enter number of columns: ");
    scanf("%d", &columns);   // User se columns lena

    int matrix[rows][columns];// rows × columns ki 2D array banana
    printf("Enter matrix elements:\n");
//matrix input lene k liye
    // Outer loop → rows ke liye
    for (int i = 0; i < rows; i++) {
        // Inner loop → columns ke liye
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix is:\n");

    // Matrix ko display karne ke liye
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]); 
        }

        printf("\n");// Next row ke liye new line
    }

    return 0; 
}