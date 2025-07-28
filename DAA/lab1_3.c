#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter how many numbers you want to read from file: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Open file
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read numbers from file
    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
        freq[i] = -1; // initialize frequency array
    }
    fclose(fp);

    // Count frequency
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            int count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Count total duplicate elements
    int dupCount = 0, maxFreq = 0, mostRepeated;
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            dupCount++;
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                mostRepeated = arr[i];
            }
        }
    }

    // Output results
    printf("\nTotal number of duplicate elements: %d\n", dupCount);
    printf("Most repeating element: %d (repeated %d times)\n", mostRepeated, maxFreq);

    return 0;
}
