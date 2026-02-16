// Q.25 Write a C program that takes an integer from the user and calculates the 
// sum of its digits using a while loop. 

#include <stdio.h>
int main() {    
    int num, sum = 0, digit;
    printf("\n Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit; // Add the digit to the sum
        num /= 10; // Remove the last digit
    }

    printf("\n The sum of the digits is: %d", sum);
    return 0;
} 