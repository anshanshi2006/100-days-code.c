/*Write a program to print the following pattern:
*****
****
***
**
* */

#include <stdio.h>
int main()
{
    int i,j;//declaration
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
          printf("*");
        }
        printf("\n");
    }
    return 0;
}