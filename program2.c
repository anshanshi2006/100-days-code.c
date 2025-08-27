//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int a,b,sum,difference,product;//declaration
    float quotient;
    printf("Enter first number: ");
    scanf("%d", &a);//input from user
    printf("Enter second number: ");
    scanf("%d", &b);//input from user
    sum=a+b;//calculating sum
    difference=a-b;//calculating difference
    product=a*b;//calculating product
    printf(" sum= %d \n difference= %d \n product= %d \n ",sum,difference,product);//displaying output
    if(b!=0)//test case to avoid undefined case
    {
      quotient=a/b;//calculating quotient
      printf("quotient= %f",quotient);
      return 0;
    }
    else
    {
      printf("divison by 0 is undefined give another value");
      return 0;
    }
    
}