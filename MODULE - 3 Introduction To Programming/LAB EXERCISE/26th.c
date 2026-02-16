// Q.26 Extend the program to reverse the digits of the number. 

#include <stdio.h>
int main() {    
    int num, sum = 0, digit, reversed = 0;
    printf("\n Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit; // Add the digit to the sum
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    printf("\n The sum of the digits is: %d", sum);
    printf("\n The reversed number is: %d", reversed);
    return 0;
}