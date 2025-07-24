#include<stdio.h>
int main(){
    int n,rem,rev=0;
printf("Enter the number:");
scanf("%d",&n);
printf(" The number is %d\n",n);
while(n!=0){
rem= n%10;
rev = rev*10+rem;
n= n/10;
}
printf("The reverse number is :%d",rev);
return 0;
}