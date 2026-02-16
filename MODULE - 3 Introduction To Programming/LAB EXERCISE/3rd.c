// Q.3 Write a C program that includes variables, constants, and comments. 
// Declare and use different data types (int, char, float) and display their values.

#include <stdio.h> 
int main() { 
    int age = 23;                   
    char grade = 'A';               
    float height = 5.5;             
 
    const int BIRTH_YEAR = 2002;    
    printf("\n Enter age : %d", age);   // Display integer value
    printf("\n Enter grade : %c", grade);   // Display character value
    printf("\n Enter height : %.2f", height); // Display float value with 2 decimal places
    printf("\n Enter birth year : %d", BIRTH_YEAR); // Display constant value
 
    
}