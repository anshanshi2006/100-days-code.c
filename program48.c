/*Write a program to print the following pattern:
1
12
123
1234
12345 */

#include <stdio.h>

int main()
{
    int i,j;//declaration
    for(i=1;i<=5;i++)//for rows
    {
        for(j=1;j<=i;j++)//for columns
        {
            printf("%d", j);
        }
        printf("\n");
    }
  return 0;
}