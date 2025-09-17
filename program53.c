/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */

#include <stdio.h>
int main()
{
    int i,star,j;//declaration
    for(i=1;i<=9;i++)
    {
        if(i==1 || i==9)
        star=1;
        else if(i==2 || i==8)
        star=3;
        else if(i==3 || i==7)
        star=5;
        else if(i==4 || i==6)
        star=7;
        else
        star=9;
        for(j=1;j<=star;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
} 