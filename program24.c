//Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main()
{
    int units,bill=0;//declaration and initialisation
    printf("Enter the number of units consumed:");
    scanf("%d", &units);
    if(units>=0 && units<=100)
    {
     bill=units*5;
    } 
    else if(units>=100 && units<=200)
    {
        bill=(100*5)+(units-100)*9;
    }
    else
    {
        bill=(100*5) + (100*9) + (units-200)*16;
    }
    printf("Total electricity bill= ₹%d\n", bill);//displaying output
    return 0;
}