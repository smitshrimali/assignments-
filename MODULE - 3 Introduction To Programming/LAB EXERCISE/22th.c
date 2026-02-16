// Q.22 Modify the program to print all prime numbers between 1 and a given 
// number. 

#include <stdio.h>
int main() {
    int num, i, j, isPrime;

    printf("\n Enter an integer: ");
    scanf("%d", &num);

    printf("\n Prime numbers between 1 and %d are:\n", num);
    for (i = 2; i <= num; i++) {
        isPrime = 1; // Assume the number is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Found a divisor, not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}