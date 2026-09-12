
#include <stdio.h>

int binarysearch(int arr[], int n, int key) {
    int start = 0, end = n-1; 
     while(start<=end){
         int half = (start+end)/2;
         if (arr[half]==key){
             return half;
        }
        else if(arr[half]<key){
            start=half+1;
        }
         else{
             end=half-1;
         }
    }

    return -1; // Element not found
}

