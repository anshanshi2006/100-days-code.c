//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    float length,breadth,area,perimeter;//declaration
    printf("Enter the length:");
    scanf("%f", &length);
    printf("Enter the breadth:");
    scanf("%f", &breadth);
    area=length*breadth;//calculating area
    perimeter=2*(length+breadth);//calculating perimeter
    printf(" area= %f \n perimeter=%f \n",area,perimeter);//displaying output
    return 0;
}

