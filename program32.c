//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int digit,rev=0,num,t;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    t=num;//t as flag variable
    while(t>0)
    {
        digit=t%10;//last digit
        rev=rev*10+digit;//calculating reverse number
        t=t/10;//removing last digit
    }
    if(num==rev)//condition of palindrome
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}