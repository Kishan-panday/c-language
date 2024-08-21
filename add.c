#include<stdio.h>
void addpolynomial(int poly1[],int poly2[], int result[], int n){

    for (int i = 0; i < n; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}

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
    }
    printf("\n");
}

int main(){
    int poly1[10] ;
    int poly2[10] ;
    int result[10] ;
    int n;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    n++; 
    printf("Enter the coeff of the 1st polynomial:\n");
    for (int i = 0; i < n; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    printf("Enter the coefficient of the 2nd polynomial:\n");
    for (int i = 0; i < n; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly2[i]);
    }
    
   addpolynomial(poly1,poly2,result,n);
    printf("Resultant polynomial after addition :\n");
    printPolynomial(result, n);
    return 0;
}