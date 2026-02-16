// Q.19 Write a C program that takes three numbers from the user and determines:  
// 1] The largest number. 

#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("\n Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("\n The largest number is: %d", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("\n The largest number is: %d", num2);
    } else {
        printf("\n The largest number is: %d", num3);
    }

    return 0;
}

// 2] The smallest number. 
#include <stdio.h>
int main() {        
    int num1, num2, num3;
    printf("\n Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("\n The smallest number is: %d", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("\n The smallest number is: %d", num2);
    } else {
        printf("\n The smallest number is: %d", num3);
    }

    return 0;
}

