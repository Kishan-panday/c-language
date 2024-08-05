#include <stdio.h>
int main() {
    int n, newElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted at the first position: ");
    scanf("%d", &newElement);
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newElement;
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
