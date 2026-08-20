//two pointer approach----------->>>>>array is sorted or not
#include<stdio.h>
int main(){
    printf("Hello world");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){//last wala element i+1 se access kr rhe hain
            printf("Array is not sorted");
            break;
        }
    }
    printf("Array is sorted");
    return 0;
}