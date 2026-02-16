// Q.24 Allow the user to input the range of the multiplication table (e.g., from 1 to 
// N). 

#include <stdio.h>
int main() {
    int num, i, range;
    printf("\n Enter an integer: ");
    scanf("%d", &num);
    printf("\n Enter the range for the multiplication table: ");
    scanf("%d", &range);

    printf("\n Multiplication table of %d up to %d:\n", num, range);
    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}