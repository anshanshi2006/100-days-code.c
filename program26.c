//Write a program to print numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n,i;//declaration
    printf("Enter the maximum number");
    scanf("%d", &n);
    for(i=1;i<=n;i++)//for loop
    {
        printf("%d \n", i);//printing numbers vertically
    }
return 0;
}