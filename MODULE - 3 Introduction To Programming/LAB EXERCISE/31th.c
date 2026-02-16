// Q.31 Write a C program that takes N numbers from the user and stores them in 
// an array. The program should then calculate and display the sum of all array 
// elements.

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("\n Enter integers: %d", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum
    }

    printf("\n The sum of the array elements is: %d", sum);
    return 0;
}