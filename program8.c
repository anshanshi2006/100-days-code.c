//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the number upto which sum is required:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)//to increase the no. till n is achieved
    {
     sum=sum+i;//calculating sum
    }
    printf("Sum upto n natural numbers= %d",sum);//displaying output
    return 0;
}