// Q.27 Write a C program that accepts 10 integers from the user and stores them 
// in an array. The program should then find and print the maximum and minimum 
// values in the array. 

#include <stdio.h>
int main() {
    int arr[10], i, max, min;

    printf("\n Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; // Initialize max to the first element
    min = arr[0]; // Initialize min to the first element

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }

    printf("\n Maximum value in the array: %d", max);
    printf("\n Minimum value in the array: %d", min);

    return 0;
}