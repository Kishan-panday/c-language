# include<stdio.h>
int main(){
    int n;
     printf("enter the no.:");
    scanf("%d",&n);
    float a=100;
    for (  int i = 1; i<=n; i++){
       
      printf("% f  ",a);
      a = a * 0.5;
      
    }
    
    return 0;
}