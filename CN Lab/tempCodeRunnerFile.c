#include<stdio.h>
#include<stdlib.h>

void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2= temp;
}
int main(){
    int x,y;
    printf("Enter first number to swap:");
    scanf("first number %d\n",&x);
    printf("Enter second number to swap:");
    scanf("second number %d\n",&y);
    printf("Before swap%d and %d\n",x,y);
    swap(&x,&y);
   printf("After swap%d and %d\n",x,y);
return 0;
}