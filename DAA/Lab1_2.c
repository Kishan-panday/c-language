#include <stdio.h>
int n;
int main(){
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
int prefixSum[n];
for (int  i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
prefixSum[0]= arr[0];
for (int  i = 1; i < n; i++)
{
    prefixSum[i]= prefixSum[i-1]+arr[i];
   
}

for (int  i = 0; i < n; i++)
{
    printf("Ans:%d\n",prefixSum[i]);
}
return 0;
}