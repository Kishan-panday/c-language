


#include <stdio.h>

// Function to check endian-ness
void checkEndian() {
    unsigned int x = 1;
    char *c = (char*)&x;

    if (*c)
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");
}

// Function to reverse bytes (endian conversion)
unsigned int convertEndian(unsigned int num) {
    return ((num >> 24) & 0x000000FF) | 
           ((num >> 8)  & 0x0000FF00) | 
           ((num << 8)  & 0x00FF0000) | 
           ((num << 24) & 0xFF000000);
}

int main() {
    unsigned int num;

    checkEndian();  // Check and print endian-ness

    // Input number
    printf("Enter a 32-bit number: ");
    scanf("%u", &num);

    // Convert endian
    unsigned int converted = convertEndian(num);
    printf("Original: %u\n", num);
    printf("Converted Endian: %u\n", converted);

    return 0;
}
