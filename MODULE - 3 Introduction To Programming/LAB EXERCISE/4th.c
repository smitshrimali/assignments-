// Q.4 Write a C program that accepts two integers from the user and performs
// arithmetic, relational, and logical operations on them. Display the results.

#include <stdio.h>
int main()
{   

    // arithmetic operator
    int a, b, c;
    printf("\n enter a:");
    scanf("%d", &a);
    printf("\n enter b:"); 
    scanf("%d", &b);
    c = a % b;
    printf("modulus is %d", c);
    c = a + b;
    printf("\n addition is %d", c);
    c = a - b;
    printf("\n subtraction is %d", c);
    c = a * b;
    printf("\n multiplication is %d", c);
    c = a / b;
    printf("\n division is %d", c);

    
    //logical operator
        printf("\n a&&b is %d",(a>b&&a>c));
        printf("\n a||b is %d",(a>b || a>c));
        printf("\n a<b is %d",a<b);
        printf("\n !a<b is %d",!(a<b)); 


    // relational operator
        printf("\n a==b is %d",a==b); 
        printf("\n a!=b is %d",a!=b);
        printf("\n a>b is %d",a>b);
        printf("\n a<b is %d",a<b);
        printf("\n a>=b is %d",a>=b);
        printf("\n a<=b is %d",a<=b);   
}