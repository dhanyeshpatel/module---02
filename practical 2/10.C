#include <stdio.h>

int main() {
    int num = 10;      // Normal integer variable
    int *ptr;          // Pointer declaration

    ptr = &num;        // Pointer stores the address of num

    printf("Original value of num: %d\n", num);
    printf("Address of num (stored in ptr): %p\n", ptr);

    // Modify value using pointer
    *ptr = 25;

    printf("New value of num after modification through pointer: %d\n", num);

    return 0;
}
