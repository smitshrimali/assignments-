// Q.50 Provide hints to the user if the guessed number is too high or too low. 


#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main() { 
    int secret, guess; 
    srand(time(NULL)); 
    secret = rand() % 100 + 1; 
    printf("Guess a number between 1 and 100:\n"); 
 
    do { 
        scanf("%d", &guess); 
if (guess < secret) 
printf("Too low\n"); 
else if (guess > secret) 
printf("Too high\n"); 
} while (guess != secret); 
printf("That's right!\n"); 
return 0; 
}