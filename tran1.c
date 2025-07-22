#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows/columns :");
    scanf("%d",&n);
    printf("Enter the number of elements in array :\n");
   int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int resultant =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            resultant = arr[i][j]; 
           arr[i][j] = arr[j][i];
            arr[j][i] = resultant ;
        }
        printf("\n");
    }
     printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // int resultant =0;
    for(int i=0; i<n; i++){
        int j =0;
        int k= n-1;
        while (j<k)
       {
             int resultant = arr[i][j]; 
           arr[i][j] = arr[j][i];
            arr[j][i] = resultant ;
            j++;
            k--;
        }
        printf("\n");
    }
       printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}