//Write a program to check if a number is prime.

#include <stdio.h>

int main()
{
    int i,num,t;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)//divisible by some number
        {
            t=1;//flag variable
        }
        else
        {
            t=0;
        }
    }
    if(t==1)
    {
      printf("%d is not a prime number", num);
    }
    else
    {
    printf("%d is a prime number", num);
    }
    return 0;
}