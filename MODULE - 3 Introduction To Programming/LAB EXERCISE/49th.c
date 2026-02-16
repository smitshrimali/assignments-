// Q.49 Write a C program that implements a simple number guessing game. The 
// program should generate a random number between 1 and 100, and the user 
// should guess the number within a limited number of attempts. 


#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main() { 
    int secretNumber, guess, attempts = 0; 
    const int maxAttempts = 7; 
 
    srand(time(NULL));  
    secretNumber = rand() % 100 + 1;  
 
    printf("Guess the number between 1 and 100. You have %d attempts.\n", 
maxAttempts); 
 
    while (attempts < maxAttempts) { 
        printf("Enter your guess: "); 
        scanf("%d", &guess); 
        attempts++; 
 
        if (guess == secretNumber) { 
            printf("Congratulations! You guessed the number in %d attempts.\n", 
attempts); 
            break; 
        } else if (guess < secretNumber) { 
            printf("Too low. Try again.\n"); 
        } else { 
            printf("Too high. Try again.\n"); 
        } 
    } 
 
    if (attempts == maxAttempts && guess != secretNumber) { 
        printf("Sorry! You've exhausted all attempts. The number was %d.\n", 
secretNumber); 
    } 
 
    return 0; 
} 