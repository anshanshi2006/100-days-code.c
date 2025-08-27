//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the first value a=");
    scanf("%d", &a);
    printf("Enter the second value b=");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;//swapping numbers
    printf("values after swapping:\n");
    printf(" a= %d \n b=%d \n",a,b);//displaying output
    return 0;
}
    