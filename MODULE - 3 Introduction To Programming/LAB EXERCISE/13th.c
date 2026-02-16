// Q.13 Write a C program to create a file, write a string into it, close the file, then 
// open the file again to read and display its contents. 

#include <stdio.h>
int main() {
    FILE *file;
    char str[100];

    // Create and write to the file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter a string to write to the file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);

    // Open the file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    fclose(file);

    return 0;
}