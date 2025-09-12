//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main()
{
    int i,num,denom;//declaration
    float sum=0,n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    num=2;
    denom=3;
    for(i=1;i<=n;i++)//number of terms
    {
      sum=sum+(float)num/denom;//calculating sum
      num=num+2;//updating value of numerator
      denom=denom+4;//updating value of denominator
    }
    printf("sum is %.2f", sum);//displaying output
    return 0;
}