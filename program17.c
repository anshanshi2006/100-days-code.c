//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
     double a,b,c,D,root1,root2,imagpart,realpart;
     printf("Enter coefficients a,b,c for quadratic equation:\n");
     scanf("%lf %lf %lf", &a ,&b ,&c);
     D=b*b-4*a*c;//calculating discriminant
     if(D>0)//real and distinct
     {
      root1=(-b+sqrt(D))/2*a;
      root2=(-b-sqrt(D))/2*a;
      printf("roots are real and distinct:%lf and %lf", root1,root2);
     }
     else if(D==0)//real and equal
     {
      root1=root2=-b/2*a;
      printf("root are real and equal:%lf and %lf", root1, root2);
     }
     else//complex roots
     {
      realpart=-b/2*a;
      imagpart=sqrt(-D)/2*a;
      printf("root are complex:%lf + %lf and %lf + %lf", realpart,imagpart,realpart,imagpart);
     }
     return 0;
}