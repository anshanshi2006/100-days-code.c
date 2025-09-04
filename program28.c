//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n,i,pr=1;//declaration
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=2;i<=n;i+=2)//for loop
    {
        pr=pr*i;//calculating product
    }
    printf("Product of even numbers from 1 to %d : %d", n,pr);//displaying output
    return 0;
}