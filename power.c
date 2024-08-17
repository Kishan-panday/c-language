#include<stdio.h>
int power(int a,int b){
    if(b==1) return a;
    int x = (a*b/2);
    if(b%2==0)
    {return x*x;}
    else{
     return x*x*a;
    }
}
int main(){
    int a;
    printf("Enter the number of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the number of b :");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d raised to the power %d is %d:",a,b,p);
    return 0;
}