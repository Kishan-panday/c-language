#include<stdio.h>
int main(){
int product=1,n;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<n;i++){
    product=product*i;
}
printf("The factorial is:%d",product);
return 0;
}