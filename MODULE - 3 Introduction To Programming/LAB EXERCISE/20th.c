// Q.20 Solve the problem using both if-else and switch-case statements.

#include <stdio.h>
int main() {
    int marks;
    printf("\n Enter the marks of the student: ");
    scanf("%d", &marks);

    // Using if-else statements
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

    // Using switch-case statements
    switch (marks / 10) { // Divide by 10 to get the tens digit
        case 10:
        case 9:
            printf("\n Grade: A");
            break;
        case 8:
            printf("\n Grade: B");
            break;
        case 7:
            printf("\n Grade: C");
            break;
        case 6:
            printf("\n Grade: D");
            break;
        default:
            printf("\n Grade: F");
            break;
    }

    return 0;
}