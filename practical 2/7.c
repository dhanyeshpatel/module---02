#include <stdio.h>
int main() 
{
    int i;
    printf("Using break statement (stop at 7):\n");
    for (i = 1; i <= 10; i++)
     {
        if (i == 7) 
        {
            break;
        }
        printf("%d\n", i);
    }
    
    // Using continue statement

    printf("Using continue statement (skip 5):\n");
    for (i = 1; i <= 10; i++)
     {
        if (i == 5) 
        {
            continue; 
        }
        printf("%d\n", i);
    }
    return 0;
}
