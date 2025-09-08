#include <stdio.h>
#include <string.h>   // Required for strcat() and strlen()

int main() {
    char str1[100], str2[100];   // Arrays to store strings

    // Input two strings from user
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters added by fgets()
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate strings
    strcat(str1, str2);

    // Display concatenated string and its length
    printf("\nConcatenated String: %s\n", str1);
    printf("Length of concatenated string: %lu\n", strlen(str1));

    return 0;
}
