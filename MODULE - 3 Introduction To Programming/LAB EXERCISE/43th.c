// Q.43 Write a C program that counts the number of words in a sentence entered 
// by the user. 


#include <stdio.h> 
 
int main() { 
    char sentence[200]; 
    int i = 0, words = 0; 
 
    printf("Enter a sentence: "); 
    fgets(sentence, sizeof(sentence), stdin); 
 
    while (sentence[i] != '\0') { 
        if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\0' && 
sentence[i + 1] != '\n') 
            words++; 
        i++; 
    } 
 
    if (i > 0 && sentence[0] != '\n') 
        words++; 
 
    printf("Number of words: %d\n", words); 
 
    return 0; 
} 