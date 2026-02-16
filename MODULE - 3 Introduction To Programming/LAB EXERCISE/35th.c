// Q.35 Write a C program that calculates the factorial of a given number using a 
// function.

#include <stdio.h>
// Function declaration 
unsigned long long factorial(int n);
int main() {
    int num;
    printf("\n Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("\n Factorial is not defined for negative numbers.");
    } else {
        printf("\n Factorial of %d is %llu", num, factorial(num)); //%llu is for unsigned long long
    }
    return 0;
}   
// Function definition
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}