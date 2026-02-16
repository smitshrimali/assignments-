// Q.36 Implement both an iterative and a recursive version of the factorial function 
// and compare their performance for large numbers. 

#include <stdio.h> 
#include <time.h> 
unsigned long long factRec(int n) { 
    if (n <= 1) return 1; 
    return n * factRec(n - 1); 
} 
unsigned long long factIter(int n) { 
    unsigned long long result = 1; 
    for (int i = 2; i <= n; i++) { 
        result *= i; 
    } 
    return result; 
} 
 
int main() { 
    int n; 
    printf("Enter a non-negative integer: "); 
    scanf("%d", &n); 
 
    clock_t start = clock(); 
    unsigned long long rec = factRec(n); 
    double timeRec = (double)(clock() - start) / CLOCKS_PER_SEC; 
 
    start = clock(); 
    unsigned long long iter = factIter(n); 
    double timeIter = (double)(clock() - start) / CLOCKS_PER_SEC; 
 
    printf("Recursive factorial: %llu (Time: %fs)\n", rec, timeRec); 
    printf("Iterative factorial: %llu (Time: %fs)\n", iter, timeIter); 
 
    printf("\n Note: Recursive method has overhead with function calls and risks stack overflow on large n.\n"); 
    printf("Iterative method is generally faster and safer for large inputs.\n"); 
 
    return 0; 
}