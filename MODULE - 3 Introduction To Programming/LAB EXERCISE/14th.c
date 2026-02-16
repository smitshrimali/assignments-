// Q.14 Write a C program that acts as a simple calculator. The program should 
// take two numbers and an operator as input from the user and perform the 
// respective operation (addition, subtraction, multiplication, division, or modulus) 
// using operators.

#include <stdio.h>
int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator); // Space before %c to consume any leftover newline
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}