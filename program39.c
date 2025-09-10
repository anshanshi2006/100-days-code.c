//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    int num,digit,prod=1;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    while (num>0)
    {
        digit= num%10;//last digit
        if (num%2!=0)
        {
           prod=prod*digit;//calculating product
        }
        num=num/10;//removing last digit
    }
    printf("product of odd digits= %d", prod);//displaying output
    return 0;
}