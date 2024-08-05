#include <stdio.h>

// Function prototypes
void passByValue(int a);
void passByReference(int *a);

int main() {
    int num = 10;

    printf("Original value of num: %d\n", num);

    // Pass by value
    printf("Passing by value:\n");
    passByValue(num);
    printf("Value of num after passByValue: %d\n", num);

    // Pass by reference
    printf("Passing by reference:\n");
    passByReference(&num);
    printf("Value of num after passByReference: %d\n", num);

    return 0;
}

// Function to demonstrate passing by value
void passByValue(int a) {
    printf("Inside passByValue. Original value of a: %d\n", a);
    a = 20; // Modify the parameter
    printf("Inside passByValue. Modified value of a: %d\n", a);
}

// Function to demonstrate passing by reference
void passByReference(int *a) {
    printf("Inside passByReference. Original value of *a: %d\n", *a);
    *a = 30; // Modify the parameter through the pointer
    printf("Inside passByReference. Modified value of *a: %d\n", *a);
}
