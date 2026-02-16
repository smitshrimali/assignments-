// Q.9 Write a C program that stores 5 integers in a one-dimensional array and 
// prints them. Extend this to handle a two-dimensional array (3x3 matrix) and 
// calculate the sum of all elements.

#include <stdio.h> 
int main() { 
    // One-dimensional array 
    int oneDArray[5] = {10, 20, 30, 40, 50}; 
    printf("Elements of the one-dimensional array:\n"); 
    for (int i = 0; i < 5; i++) { 
        printf("%d ", oneDArray[i]); 
    } 
    printf("\n\n"); 
 
    // Two-dimensional array (3x3 matrix) 
    int twoDArray[3][3] = { 
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9} 
    }; 
    int sum = 0; 
 
    printf("Elements of the two-dimensional array (3x3 matrix):\n"); 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            printf("%d ", twoDArray[i][j]); 
            sum += twoDArray[i][j]; // Calculate sum 
        } 
        printf("\n"); // New line after each row 
    } 
 
    printf("\nSum of all elements in the 3x3 matrix: %d\n", sum); 
 
    return 0; 
}