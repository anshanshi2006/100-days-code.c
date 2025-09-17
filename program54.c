/*Write a program to print the following pattern:

*

***

*****
*******
***

* */

#include <stdio.h>

int main() 
{
    int i, j;

    // Top half (1, 3, 5, 7 stars)
    for (i = 1; i <= 7; i += 2) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");

        // Add gaps as per rules
        if (i == 1 || i == 3 || i == 7) 
        {
            printf("\n\n"); // 2 blank lines
        }
    }
    for (i = 3; i >= 1; i -= 2) // Bottom half (3, 1 stars)
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
        if (i == 3)//last gap
        {
            printf("\n"); // 1 blank line
        }
    }

    return 0;
}
