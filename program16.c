//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main()
{
    int a,b,c,max;//declaration
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);
    if(a==b && b==c)//checking if all are equal
    {
        printf("All numbers are equal");
        return 0;
    }
    else if(a>=b && a>=c)//check if a is largest
    {
      max=a;
    }
    else if(b>=a && b>=c)//check if b is largest
    {
      max=b;
    }
    else//check if c is largest
    {
     max=c;
    }
    printf("largest of them=%d",max);//displaying output
    return 0;

}