#include<stdio.h>
int main(){
    printf("Hello world");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //for(int front=0, rear=n-1; front<rear; front++, rear--){
       // int temp = arr[front];//temp arr ki value store krega
        //arr[front] = arr[rear];//dono ko swap krega 
        //arr[rear] = temp;//swap k baad
   // }
    //for(int front=0;front<n;front++){
        //printf("%d ",arr[front]);
    //}
    //return 0;
    int front=0,rear=n-1;
    while(front<rear){
        int temp=arr[front];
        arr[front]=arr[rear];
        arr[rear]=temp;
        front++;
        rear--;
    }
    for(int i=0;i<n;i++){
        printf("array element is %d\n",arr[i]);
    }
}