//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main()
{
    int num1,num2,i,HCF;//declaration
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    if(num1<=num2)
    {
     for(i=1;i<=num1;i++)
     {
       if(num1%i==0 && num2%i==0)//calculating hcf
       {
        HCF=i;//updating the value of hcf
       }
     }
    }
    else
    {
     for(i=1;i<=num2;i++)
     {
       if(num1%i==0 && num2%i==0)
       {
        HCF=i;
       }
     }
    }
    printf("HCF OF %d and %d = %d", num1,num2,HCF);//displaying output
    return 0;
}