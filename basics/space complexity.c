#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n], temp[n], j=0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }   

    scanf("%d", &k);

    k = k % n;

    for(int i = n-k-1; i < n; i++){
        temp[j] = arr[i];
        j++;
    }
    for(int i=0; i<n-k-1; i++){
        temp[j] = arr[i];
        j++;
    }
    for(int i=0; i<n; i++){
        printf("%d ",temp[i]);
    }

    return 0;
}