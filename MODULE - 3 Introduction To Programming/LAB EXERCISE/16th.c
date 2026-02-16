// Q.16 Write a C program that takes an integer from the user and checks the 
// following using different operators:  
// 1] Whether the number is even or odd.

#include <stdio.h>
int main() {
    int num;
    printf("\n Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\n %d is an even number.", num);
    } else {
        printf("\n %d is an odd number.", num);
    }

    return 0;

}

// 2] Whether the number is positive, negative, or zero.

#include <stdio.h>
int main() {
    int num;
    printf("\n Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("\n %d is a positive number.", num);
    } else if (num < 0) {
        printf("\n %d is a negative number.", num);
    } else {
        printf("\n The number is zero.");
    }

    return 0;
}

// 3] Whether the number is a multiple of both 3 and 5. 

#include <stdio.h>
int main() {
    int num;
    printf("\n Enter an integer: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("\n %d is a multiple of both 3 and 5.", num);
    } else {
        printf("\n %d is not a multiple of both 3 and 5.", num);
    }

    return 0;
}