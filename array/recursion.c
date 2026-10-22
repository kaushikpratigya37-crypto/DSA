/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void n_number(int n)
{
   // for(int i=n;i>0;i--){
    printf("%d",n);
    n_number(n-1);//stack overflow
}
int main(){
    int n;
    scanf("%d",&n);
    n_number(n);
    return 0;
}