#include<stdio.h>
int n;
int main(){
    printf("Enter the number:");
    scanf("%d",&n);
int arr[n];
for (int  i = 0; i<n; i++)
{
    scanf("%d",&arr[i]);
}
int max = arr[0],max2=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max2 =max;
        max= arr[i];
    }else if(arr[i]>max2 && arr[i]!= max){
        max2 = arr[i];
    }
}
printf("Max digit:%d\n",max);
printf("Max digit2:%d\n",max2);
int min = arr[0], min2=arr[0];
for(int i =0;i<n;i++){
    if(min>arr[i]){
        min2=min;
        min=arr[i];
    }else{
    if(arr[i]<min2 && arr[i]!=min){
        min2=arr[i];
    }
}
}
printf("Min digit is:%d\n",min);
printf("Min2 digit is:%d\n",min2);
return 0;

}