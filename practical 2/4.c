#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);   

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(%d && %d) = %d\n", a, b, (a && b)); // Logical AND
    printf("(%d || %d) = %d\n", a, b, (a || b)); // Logical OR
    printf("!(%d) = %d\n", a, !a);               // Logical NOT for first number
    printf("!(%d) = %d\n", b, !b);               // Logical NOT for second number

    return 0;
}
