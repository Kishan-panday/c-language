#include<stdio.h>
void greet( int n,int s){
    if(n==0){
        printf("%d",s);

     return; 
    }
    greet(n-1,s+n);

    return;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
greet(n,0);
return 0;
}