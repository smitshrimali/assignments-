// Q.32 Modify the program to also find the average of the numbers.

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

    double average = (double)sum / n; // Calculate the average

    printf("\n The sum of the array elements is: %d", sum);
    printf("\n The average of the array elements is: %.2f", average); // Print average with 2 decimal places
    return 0;
}