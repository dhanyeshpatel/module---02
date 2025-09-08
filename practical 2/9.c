#include <stdio.h>

int main() {
    // --- Part 1: One-dimensional array ---
    int arr[5], i;

    printf("Enter 5 integers for 1D array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered (1D array): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // --- Part 2: Two-dimensional array (3x3 matrix) ---
    int matrix[3][3], row, col, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf("%d", &matrix[row][col]);
            sum += matrix[row][col];  // Adding elements to sum
        }
    }

    printf("3x3 Matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("Sum of all elements in the matrix = %d\n", sum);

    return 0;
}
