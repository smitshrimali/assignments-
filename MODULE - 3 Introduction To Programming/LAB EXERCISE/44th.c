// Q.44 Modify the program to find the longest word in the sentence. 


#include <stdio.h> 
 
int stringLength(char str[]) { 
    int len = 0; 
    while (str[len] != '\0') len++; 
    return len; 
} 
 
int main() { 
    char str[200], longest[100]; 
    int i = 0, start = 0, maxLen = 0, len, currLen; 
 
    printf("Enter a sentence: "); 
    fgets(str, sizeof(str), stdin); 
 
    len = stringLength(str); 
    if (str[len - 1] == '\n') str[len - 1] = '\0'; 
    len--; 
 
    while (i <= len) { 
        if (str[i] == ' ' || str[i] == '\0') { 
            currLen = i - start; 
            if (currLen > maxLen) { 
                maxLen = currLen; 
                for (int j = 0; j < currLen; j++) 
                    longest[j] = str[start + j]; 
                longest[currLen] = '\0'; 
            } 
            start = i + 1; 
        } 
        i++; 
    } 
 
    printf("Longest word: %s\n", longest); 
 
    return 0; 
}