// Q.37 Write a C program that takes a number as input and checks whether it is a 
// palindrome using a function. 

#include <stdio.h> 
int isPalindrome(int num) { 
    int original = num; 
    int reversed = 0, remainder; 
 
    while (num != 0) { 
        remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
        num /= 10; 
    } 
 
    return (original == reversed); 
} 
 
int main() { 
    int number; 
 
    printf("Enter a number: "); 
    scanf("%d", &number); 
 
    if (isPalindrome(number)) 
        printf("%d is a palindrome.\n", number); 
    else 
        printf("%d is not a palindrome.\n", number); 
 
    return 0; 
}