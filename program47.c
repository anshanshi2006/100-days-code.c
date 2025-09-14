/*Write a program to print the following pattern:
*
**
***
****
***** */

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)//for rows
    {
      for(j=1;j<=i;j++)//for columns
      {
        printf("*");
      }
      printf("\n");
    }
    return 0;
}
