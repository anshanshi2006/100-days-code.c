//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
 int num1,num2,i,HCF,LCM;
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
    LCM=(num1*num2)/HCF;//calculating lcm
    printf("LCM of %d and %d= %d", num1,num2,LCM);//displaying output
    return 0;
}