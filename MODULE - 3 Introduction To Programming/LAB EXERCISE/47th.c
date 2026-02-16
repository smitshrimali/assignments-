// Q.47 Write a C program that generates Pascal’s Triangle up to N rows using 
// loops. 


#include <stdio.h> 
 
int main() { 
    int rows, i, j, val; 
 
    printf("Enter the number of rows: "); 
    scanf("%d", &rows); 
 
    for (i = 0; i < rows; i++) { 
        val = 1; // First value in each row is 1 
        for (j = 0; j <= i; j++) { 
            printf("%d ", val); 
            val = val * (i - j) / (j + 1); // Compute next value using combination formula 
        } 
        printf("\n"); 
    } 
 
    return 0; 
}