//Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main()
{
    int num,rem,sum=0,t;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    t=num;//flag variable
    while(t>0)
    {
        rem=t%10;//last digit
        sum=sum+(rem*rem*rem);//adding cubes of all digits
        t=t/10;//removing last digit
    }
    if(num==sum)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}