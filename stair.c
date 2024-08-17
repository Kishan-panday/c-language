#include<stdio.h>
int stair(int n){
    if(n<=3) return n;
    int ways = stair(n-1) + stair(n-2) + stair(n-3);
    return ways;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}