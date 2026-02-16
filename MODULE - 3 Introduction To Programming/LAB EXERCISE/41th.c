// Q.41 Write a C program that takes a string from the user and counts the number 
// of vowels and consonants in the string. 
 

#include <stdio.h> 
 
int stringLength(char str[]) { 
    int len = 0; 
    while (str[len] != '\0') len++; 
    return len; 
} 
 
int main() { 
    char str[100]; 
    int vowels = 0, consonants = 0, i, len; 
 
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
    len = stringLength(str); 
    if (str[len - 1] == '\n') str[len - 1] = '\0'; 
 
    for (i = 0; i < len; i++) { 
        char ch = str[i]; 
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { 
            if (ch >= 'A' && ch <= 'Z') 
                ch = ch + 32; 
 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                vowels++; 
            else 
                consonants++; 
        } 
    } 
 
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants); 
    return 0; 
}