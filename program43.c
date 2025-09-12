//Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int num,fact,t,i,digit,sum=0;//declaration
    printf("Enter a positive number: ");
    scanf("%d", &num);
    t=num;//flag variable
    if(num>0)//only positive number is allowed
    {

     while(t>0)
     {
      fact=1;
        digit=t%10;
      for(i=1;i<=digit;i++)
      { 
        fact=fact*i;//calculating factorial
      }
      sum=sum+fact;//storing sum
      t=t/10;
     }
     if(num==sum)//checing condition of strong number
     {
     printf("%d is a strong number", num);
     }
     else
     {
        printf("%d is not a strong number", num);
     }
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}