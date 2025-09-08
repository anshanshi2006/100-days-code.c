//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main()
{
  int num,digit,sum=0;//declaration
  printf("Enter the number:");
  scanf("%d", &num);
  while(num>0)
  {
    digit=num%10;//last digit
    sum=sum+digit;//adding all the digits
    num=num/10;//removing last digit
  }
  printf("Sum of digits =%d",sum);//displaying output
  return 0;
}