/*  Write a program to print the following pattern:
*****
*****
*****
*****
*****  */

#include <stdio.h>

int main()
{
    int i,j;//declaration
    for ( i = 1; i <=5; i++)//loop for number of lines
    {
      for(j=1;j<=5;j++)//loop for number of stars
      {
        printf("*");//displaying output
      }
      printf("\n");//to print same pattern in new line
    }
    return 0;
}