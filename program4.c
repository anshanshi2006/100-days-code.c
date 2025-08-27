//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main()
{
    float radius,area,Circumference;
    printf("Enter the radius:");
    scanf("%f", &radius);
    area=3.14*radius*radius;//calculating area 
    Circumference=2*3.14*radius;//calculating circumference
    printf(" Area= %f \n Circumference= %f \n", area,Circumference);//displaying output
    return 0;
}