#include<stdio.h>
void greet( int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    greet(x+1,n);
    return;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
greet(1,n);
return 0;
}