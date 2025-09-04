//Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int rev=0,num,digit;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    while(num!=0)//while loop
    {
        digit=num%10;//last digit
        rev=rev*10+digit;//calculating reverse
        num=num/10;//removing last digit
    }
    printf("Reversed number= %d", rev);//displaying output
    return 0;
}