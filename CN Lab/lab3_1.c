#inlclude<stdio.h>
#include<stdlib.h>

void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2= temp;
}
int main(){
    int x,y;
    printf("Enter two number to swap:");
    scanf("first number %d second number%d",&x,&y);
    printf("Before swap%d and %d",x,y);
    swap(&x,&y);
   printf("After swap%d and %d",x,y);
return 0;
}