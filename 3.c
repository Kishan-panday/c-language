#include<stdio.h>
void swap (int* x,int* y)
int temp;
temp = *x;
*x = *y;
temp = *y;
return;
int main(){
    int a = 2;
    int b = 9;
    swap(&a,&b);
    printf("enter the value of a is %d\n,a");
    printf("enter the value of b is %d,b");
    return 0;
}


