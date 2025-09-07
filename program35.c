//Write a program to print all factors of a given number.

#include <stdio.h>

int main()
{
    int num,i;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Factors are: ");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)//calculating factors
        {
            printf("%d,", i);//printing factors
        }
    }
    return 0;
}