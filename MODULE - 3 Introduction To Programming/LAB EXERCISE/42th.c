// Q.42 Extend the program to also count digits and special characters. 


#include <stdio.h> 
 
int length(char str[]) { 
    int len = 0; 
    while (str[len]) len++;   
    return len; 
} 
 
int main() { 
    char str[100]; 
    int vowels = 0, consonants = 0, digits = 0, special = 0, i; 
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
 
    int len = length(str); 
    if (str[len - 1] == '\n') str[len - 1] = '\0'; 
    len--; 
 
    for (i = 0; i < len; i++) { 
        char ch = str[i]; 
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { 
            if (ch >= 'A') ch += 32; 
            if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') 
                vowels++; 
            else 
                consonants++; 
        } else if (ch >= '0' && ch <= '9') { 
            digits++; 
        } else if (ch != ' ') { 
            special++; 
        } 
    } 
 
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpecial characters: %d\n", 
vowels, consonants, digits, special); 
    return 0; 
}