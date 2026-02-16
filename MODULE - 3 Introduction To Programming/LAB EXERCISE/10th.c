// Q.10 Write a C program to demonstrate pointer usage. Use a pointer to modify 
// the value of a variable and print the result. 

#include <stdio.h>

int main() {
    int num = 10; // Original value
    int *ptr = &num; // Pointer to the variable 'num'

    printf("Original value of num: %d\n", num);

    // Modifying the value of 'num' using the pointer
    *ptr = 20;

    printf("Modified value of num: %d\n", num);

    return 0;
}