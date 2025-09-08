#include <stdio.h>
#include <stdlib.h>   // For exit()

int main() {
    FILE *fp;
    char str[100] = "Hello, this is a file handling example in C!";
    char buffer[100];

    // Step 1: Create and open file in write mode
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    // Step 2: Write string to file
    fprintf(fp, "%s", str);
    printf("String written to file successfully.\n");

    // Step 3: Close file
    fclose(fp);

    // Step 4: Open file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    // Step 5: Read contents from file and display
    printf("\nContents of the file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Step 6: Close file
    fclose(fp);

    return 0;
}
