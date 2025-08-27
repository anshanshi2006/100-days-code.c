//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf("%d", &a);//to input value of a
    printf("Enter the value of b=");
    scanf("%d", &b);//to input value of b
    a=a+b;
    b=a-b;
    a=a-b;//swapping numbers
    printf("Values after swapping:\n");
    printf(" a= %d \n b= %d \n",a,b);
    return 0;
}