#include <stdio.h>

// Function to swap two integers
void EXCHANGE(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

// Function to rotate first p2 elements to the right by 1
void ROTATE_RIGHT(int *p1, int p2) {
    for (int i = p2 - 1; i > 0; i--) {
        EXCHANGE(&p1[i], &p1[i - 1]);
    }
}

int main() {
    int A[9];
    int N = 9;

    printf("Enter an array A of size 9: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Before ROTATE: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    ROTATE_RIGHT(A, 5); // Rotate first 5 elements

    printf("\nAfter ROTATE: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
