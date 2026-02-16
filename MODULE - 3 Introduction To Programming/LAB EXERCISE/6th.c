// Q.6 Write a C program to print numbers from 1 to 10 using all three types of 
// loops (while, for, do-while). 

#include <stdio.h>
int main() {
    int i = 1;
    
    // Using while loop
    printf("\n Using while loop:");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    
    // Using for loop
    printf("\n Using for loop:");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    // Using do-while loop
    printf("\n Using do-while loop:");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    
    return 0;
}