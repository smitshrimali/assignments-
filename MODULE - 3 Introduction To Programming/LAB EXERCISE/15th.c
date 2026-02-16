// Q.15 Extend the program to handle invalid operator inputs.


#include <stdio.h> 
 
int main() { 
    double num1, num2, result; 
    char op; 
 
    printf("Enter first number: "); 
    scanf("%lf", &num1); 
 
    printf("Enter an operator (+, -, *, /, %%): "); 
    scanf(" %c", &op); 
 
    printf("Enter second number: "); 
    scanf("%lf", &num2); 
 
    if (op == '+') { 
        result = num1 + num2; 
        printf("Result: %.2lf\n", result); 
    }  
    else if (op == '-') { 
        result = num1 - num2; 
        printf("Result: %.2lf\n", result); 
    }  
    else if (op == '*') { 
        result = num1 * num2; 
        printf("Result: %.2lf\n", result); 
    }  
    else if (op == '/') { 
        if (num2 != 0) 
            printf("Result: %.2lf\n", num1 / num2); 
        else 
            printf("Error! Division by zero not allowed.\n"); 
    }  
    else if (op == '%') { 
        if ((int)num2 != 0) 
            printf("Result: %d\n", (int)num1 % (int)num2); 
        else 
            printf("Error! Division by zero not allowed.\n"); 
    }  
    else { 
        printf("Invalid operator '%c'. Please use +, -, *, /, or %%.\n", op); 
    } 
 
    return 0; 
}