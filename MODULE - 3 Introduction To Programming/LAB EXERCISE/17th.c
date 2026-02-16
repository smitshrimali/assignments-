// Q.17 Write a C program that takes the marks of a student as input and displays 
// the corresponding grade based on the following conditions: 

// 1] Marks > 90: Grade A
#include <stdio.h>
int main() {
    int marks;
    printf("\n Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("\n Grade: A");
    } else if (marks > 80) {
        printf("\n Grade: B");
    } else if (marks > 70) {
        printf("\n Grade: C");
    } else if (marks > 60) {
        printf("\n Grade: D");
    } else {
        printf("\n Grade: F");
    }

    return 0;
}



// 2] Marks > 75 and <= 90: Grade B 
#include <stdio.h>
int main() {
    int marks;
    printf("\n Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("\n Grade: A");
    } else if (marks > 75 && marks <= 90) {
        printf("\n Grade: B");
    } else if (marks > 60 && marks <= 75) {
        printf("\n Grade: C");
    } else if (marks > 50 && marks <= 60) {
        printf("\n Grade: D");
    } else {
        printf("\n Grade: F");
    }

    return 0;
}



// 3] Marks > 50 and <= 75: Grade C 
#include <stdio.h>
int main() {
    int marks;
    printf("\n Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("\n Grade: A");
    } else if (marks > 75 && marks <= 90) {
        printf("\n Grade: B");
    } else if (marks > 50 && marks <= 75) {
        printf("\n Grade: C");
    } else if (marks > 40 && marks <= 50) {
        printf("\n Grade: D");
    } else {
        printf("\n Grade: F");
    }

    return 0;
}

// 4] Marks <= 50: Grade D 
#include <stdio.h>
int main() {
    int marks;
    printf("\n Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("\n Grade: A");
    } else if (marks > 75 && marks <= 90) {
        printf("\n Grade: B");
    } else if (marks > 50 && marks <= 75) {
        printf("\n Grade: C");
    } else if (marks <= 50) {
        printf("\n Grade: D");
    } else {
        printf("\n Grade: F");
    }

    return 0;
}