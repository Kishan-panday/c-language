#include<stdio.h>
#include<stdlib.h>

void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2= temp;
     printf("After swap%d and %d\n",*num1,*num2);
}
int main(){
    int x,y;
    printf("Enter first number to swap:");
    scanf("%d\n",&x);
    printf("Enter second number to swap:");
    scanf("%d\n",&y);
    printf("Before swap%d and %d\n",x,y);
    swap(&x,&y);
   
return 0;
}