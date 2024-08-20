#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={12,23,45,67,87,1,8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<7;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    }
    for(int i=0;i<7;i++){
    if(arr[i]!=max && smax<arr[i]){
        smax=arr[i];
    }
    }
printf("%d",smax);
    return 0;
}