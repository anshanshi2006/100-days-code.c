//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n%2==0)//condition to check even no.
    {
        printf("Number is even");

    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}