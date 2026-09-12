#include <stdio.h>              
int main() {                    
    int n;                      
    scanf("%d", &n);            
    int arr[n];                 
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);   
    int j = 0;                  // Non-zero element ki next position track karne ke liye
    for (int i = 0; i < n; i++) { // Pura array check karne ke liye
         if (arr[i] != 0) {      // Check karne ke liye ki current element zero nahi hai
            int temp = arr[i];  // Current non-zero element ko temporarily store karne ke liye
            arr[i] = arr[j];    // arr[j] ki value ko current position par lane ke liye
            arr[j] = temp;      // Non-zero value ko arr[j] par rakhne ke liye
            j++;                // Next non-zero element ke liye position aage badhane ke liye
        }
    }
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);   

    return 0;                   
}