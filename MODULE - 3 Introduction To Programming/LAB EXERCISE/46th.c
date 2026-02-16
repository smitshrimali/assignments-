// Q.46 Write a program to find all Armstrong numbers between 1 and 1000. 


#include <stdio.h> 
#include <math.h> 
 
int main() { 
    int num, originalNum, remainder, n, sum, temp; 
 
    printf("Armstrong numbers between 1 and 1000 are:\n"); 
 
    for (num = 1; num <= 1000; num++) { 
        temp = num; 
        n = 0; 
        while (temp != 0) { 
            temp /= 10; 
            n++; 
        } 
 
        temp = num; 
        sum = 0; 
        while (temp != 0) { 
            remainder = temp % 10; 
            sum += (int)pow(remainder, n); 
            temp /= 10; 
        } 
 
        if (sum == num) { 
            printf("%d ", num); 
        } 
    } 
 
    printf("\n"); 
    return 0; 
} 

