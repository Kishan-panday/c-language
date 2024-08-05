#include <stdio.h>
#include <limits.h>
void findSecondMaxMin(int arr[], int n, int *secondMax, int *secondMin) {
    int max = INT_MIN, min = INT_MAX;
    *secondMax = INT_MIN;
    *secondMin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > *secondMax && arr[i] < max) {
            *secondMax = arr[i];
        }
        if (arr[i] < *secondMin && arr[i] > min) {
            *secondMin = arr[i];
        }
    }
    if (*secondMax == INT_MIN) {
        printf("No second maximum value found.\n");
    }
    if (*secondMin == INT_MAX) {
        printf("No second minimum value found.\n");
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int secondMax, secondMin;
    findSecondMaxMin(arr, n, &secondMax, &secondMin);
    if (secondMax != INT_MIN) {
        printf("Second maximum value in the array: %d\n", secondMax);
    }
    if (secondMin != INT_MAX) {
        printf("Second minimum value in the array: %d\n", secondMin);
    }
    return 0;
}
