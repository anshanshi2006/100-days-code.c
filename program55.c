//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main()
{
    int i,j,n,t;//declaration
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        t=0;//resetting value of t for every i
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            t++;//flag variable
        }
        if(t==2)//prime no. has onlky two divisors,1 and itself
        {
         printf("%d ", i);
        }
    }
    return 0;
}