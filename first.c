#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the of Ram:");
scanf("%d",&a);
printf("Enter the Shyam:");
scanf("%d",&b);
printf("Enter the Ajay:");
scanf("%d",&c);

if (a<b ){
  if(a<c)
  printf("Ram is the youngest",a);
  else
  printf("Ajay is the youngest",c);
  
}
else{
if (b<c)
{
  printf("Shyam is the youngest",b);
}
else
printf("Ajay is the youngest",c);
}
return 0;
}