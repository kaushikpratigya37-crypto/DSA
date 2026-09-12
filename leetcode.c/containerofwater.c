#include<stdio.h>
int main(){
    int i=0;
    int j=heightsize-1;
    int maxarea=0;
    while(i<j){
        int width=height[i] < height[j] ? height[i] : height[j];
        int length =j-1;
        int area = length*width;
        if(maxarea < area){
            maxarea = area;
        }
        if (height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
        return maxarea;
    }
}