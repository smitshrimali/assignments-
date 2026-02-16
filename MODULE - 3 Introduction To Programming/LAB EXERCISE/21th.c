// Q.21 Write a C program that checks whether a given number is a prime number 
// or not using a for loop.

#include <stdio.h>
int main() {
    int num, i, isPrime = 1; // Assume the number is prime

    printf("\n Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not a prime number
                break;
            }
        }
    }

    if (isPrime) {
        printf("\n %d is a prime number.", num);
    } else {
        printf("\n %d is not a prime number.", num);
    }

    return 0;
}