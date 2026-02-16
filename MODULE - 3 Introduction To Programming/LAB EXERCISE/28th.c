// Q.28 Extend the program to sort the array in ascending order.

#include <stdio.h>
int main() {
    int arr[10], i, j, temp, max, min;

    printf("\n Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum and minimum values
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Sort the array in ascending order using bubble sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n Maximum value in the array: %d", max);
    printf("\n Minimum value in the array: %d", min);
    
    printf("\n Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}