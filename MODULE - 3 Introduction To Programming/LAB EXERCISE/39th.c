// Q.39 Write a C program that takes a string as input and reverses it using a 
// function. 

#include <stdio.h> 
#include <string.h> 
void reverseString(char str[]) { 
    int left = 0; 
    int right = strlen(str) - 1; 
    char temp; 
 
    while (left < right) { 
        temp = str[left]; 
        str[left] = str[right]; 
        str[right] = temp; 
 
        left++; 
        right--; 
    } 
} 
 
int main() { 
    char str[100]; 
 
    printf("Enter a string: "); 
    scanf("%s", str); 
 
    reverseString(str); 
 
    printf("Reversed string: %s\n", str); 
 
    return 0; 
}