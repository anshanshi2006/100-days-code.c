//Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main()
{
    int days;//declaration
    printf("Enter number of late days:");
    scanf("%d", &days);
    if(days>=1 && days<=5)
    {
      printf("Fine ₹%d\n", days * 2);
    }
    else if(days<=10)
    {
        printf("Fine ₹%d\n", days * 4);
    }
    else if(days<=30)
    {
        printf("Fine ₹%d\n" , days * 6);
    }
    else
    {
        printf("Membership Cancelled");
    }
    return 0;
}