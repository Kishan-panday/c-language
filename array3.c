#include<stdio.h>
void printPolynomial(int poly[], int n) {
    for (int i = n-1; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i != n-1 && poly[i] > 0)
                printf(" + ");
            if (i == 0)
                printf("%d", poly[i]);
            else
                printf("%dx^%d", poly[i], i);
        }
        // poly[n]=result[n];
    }
    printf("\n");
}
int main(){
    int n,arr[100],poly[n],result[n];
     printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    n++; 
    printf("Enter the coeff of the 1st polynomial:\n");
    for (int i = 0; i < n; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &arr[i]);
    }
    // poly[n]=result[n];
    printf("Resultant polynomial after addition :\n");
    printPolynomial(result, n);
    return 0;
}