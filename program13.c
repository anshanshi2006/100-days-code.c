//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    
    if((year%4==0 && year%100 !=0) || year%400==0)//condition of leap year
    {
        printf("Year is a leap year \n");
    }
    else
    {
        printf("Not a leap year \n");
    }
    return 0;
}