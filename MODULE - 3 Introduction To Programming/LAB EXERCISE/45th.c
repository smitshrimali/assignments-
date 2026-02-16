// Q.45 Write a C program that checks whether a given number is an Armstrong 
// number or not (e.g., 153 = 1^3 + 5^3 + 3^3). 


#include <stdio.h> 
 
int main() { 
    int num, originalNum, remainder, n = 0; 
    int sum = 0, power; 
 
    printf("Enter an integer: "); 
    scanf("%d", &num); 
 
    originalNum = num; 
    while (originalNum != 0) { 
        originalNum /= 10; 
        ++n; 
    } 
 
    originalNum = num; 
    while (originalNum != 0) { 
        remainder = originalNum % 10; 
        power = 1; 
        for (int i = 0; i < n; i++) { 
            power *= remainder; 
        } 
        sum += power; 
        originalNum /= 10; 
    } 
    if (sum == num) 
        printf("%d is an Armstrong number.\n", num); 
    else 
        printf("%d is not an Armstrong number.\n", num); 
 
    return 0; 
}