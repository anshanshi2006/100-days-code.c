//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main()
{
    float a,b,c;//declaration
    printf("Enter all three sides:\n");
    scanf("%f\n %f\n %f", &a, &b, &c);
    if(a==b && b==c)//all sides equal
    {
        printf("Equilateral");
    }
    else if(a==b || b==c || a==c)//any two sides equal
    {
        printf("Isosceles");
    }
    else//all sides unequal
    {
        printf("Scalene");
    }
    return 0;
}