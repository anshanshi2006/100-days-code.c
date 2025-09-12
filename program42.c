//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int num,i,sum=0;//declaration
    printf("ENTER NUMBER:");
    scanf("%d", &num);
    for(i=1;i<num;i++)
    {
      if(num%i==0)//divisors of num
      {
        sum=sum+i;//calculating sum
      }
    }
    if(num==sum)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
    return 0;
}
