// Q.40 Write the program without using built-in string handling functions.  


#include <stdio.h> 
int stringLength(char str[]) { 
    int length = 0; 
    while (str[length] != '\0') { 
        length++; 
    } 
    return length; 
} 
void reverseString(char str[]) { 
    int left = 0; 
    int right = stringLength(str) - 1; 
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