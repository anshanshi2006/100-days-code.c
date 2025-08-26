Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
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
