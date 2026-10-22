#include <stdio.h>
void selectionsort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}
int main() {
    int arr[] = {4, 3, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}