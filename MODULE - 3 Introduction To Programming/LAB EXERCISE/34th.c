// Q.34 Modify the program to calculate the Nth Fibonacci number using both 
// iterative and recursive methods. Compare their efficiency. 

#include <stdio.h>
// Recursive method to calculate Fibonacci number
int fibonacci_recursive(int n) {
    if (n == 0)      
        return 0; 
    else if (n == 1)   
        return 1; 
    else    
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2); 
}
// Iterative method to calculate Fibonacci number
int fibonacci_iterative(int n) {
    if (n == 0)      
        return 0; 
    else if (n == 1)   
        return 1; 
    else {
        int a = 0, b = 1, fib;
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        return fib;
    }
}
int main() {
    int n;
    printf("Enter the term number to calculate Fibonacci: ");
    scanf("%d", &n);

    // Calculate Fibonacci using recursive method
    int fib_recursive = fibonacci_recursive(n);
    printf("Fibonacci number at term %d (recursive): %d\n", n, fib_recursive);

    // Calculate Fibonacci using iterative method
    int fib_iterative = fibonacci_iterative(n);
    printf("Fibonacci number at term %d (iterative): %d\n", n, fib_iterative);

    return 0;
}   