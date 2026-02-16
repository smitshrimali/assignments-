// Q.7 Write a C program that uses the break statement to stop printing numbers 
// when it reaches 5. Modify the program to skip printing the number 3 using the 
// continue statement. 

#include <stdio.h>
int main() {
    printf("\n Using break statement:");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Stop the loop when it reaches 5
        }
        printf("%d ", i);
    }
    
    printf("\n Using continue statement:");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; // Skip printing the number 3
        }
        printf("%d ", i);
    }
    
    return 0;
}