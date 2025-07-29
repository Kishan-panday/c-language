
#include <stdio.h>

void convertToBinary(int num) {
    int binary[32], i = 0;

    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    convertToBinary(n);
    return 0;
}
