//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int n,s;//declaration
    printf("Enter the number:");
    scanf("%d", &n);

    s=n*n;//formula=n*n for first n odd numbers

    printf("Sum of first %d odd numbers:%d",n, s);
    return 0;
}