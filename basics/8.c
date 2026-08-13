#include<stdio.h>
int main() {
    int a[10];
    int n;
    int min,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    for(int i=0; i<n; i++){
      min = max = a[0];
      if(a[i]<min){
          min = a[i];
      }
      else if(a[i]>max){
          max = a[i];
      }
    }
    printf("Minimum value is: %d\n", min);
    printf("Maximum value is: %d\n", max);
    return 0;
}