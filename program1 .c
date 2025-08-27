//Q1: Write a program to input two numbers and display their sum.

   #include <stdio.h>

   int main()
   {
    int a,b,sum;//declaration of variables
    printf("enter the first number:");
    scanf("%d", &a);//initialisation
    printf("enter the second number:");
    scanf("%d", &b);//initialisation
    sum=a+b;//sum obtained
    printf("the sum of two numbers %d and %d is: %d \n",a,b,sum);//displaying the result
    return 0;
   }
