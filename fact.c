# include<stdio.h>
int main(){
    int n,pact=1;
printf("Enter the number:");
scanf("%d",&n);
for(int i=1; i<=n;i++){
pact = pact*i;
printf("The factorial of %d is: %d\n",i,pact);
}

    return 0;
}