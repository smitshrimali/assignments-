// Q.12 Write a C program that defines a structure to store a student's details 
// (name, roll number, and marks). Use an array of structures to store details of 3 
// students and print them.

#include <stdio.h> 
 
struct Student { 
    char name[50]; 
    int rollNumber; 
    float marks; 
}; 
 
int main() { 
    struct Student students[3]; // Array of structures 
    int i; 
 
    for (i = 0; i < 3; i++) { 
        printf("Enter details for student %d\n", i + 1); 
        printf("Name: "); 
        scanf("%s", students[i].name); 
        printf("Roll Number: "); 
        scanf("%d", &students[i].rollNumber); 
        printf("Marks: "); 
        scanf("%f", &students[i].marks); 
        printf("\n"); 
    } 
 
    printf("\nStudent Details:\n"); 
    for (i = 0; i < 3; i++) { 
        printf("Student %d\n", i + 1); 
        printf("Name: %s\n", students[i].name); 
        printf("Roll Number: %d\n", students[i].rollNumber); 
        printf("Marks: %.2f\n\n", students[i].marks); 
    } 
 
    return 0; 
}