//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int i,n,fact=1;//declaration
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)//for loop
    {
        fact=fact*i;//calculating factorial
    }
    printf("Factorial of %d= %d", n,fact);//displaying output
    return 0;
}