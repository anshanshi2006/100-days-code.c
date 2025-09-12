//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    float num=1,denom,sum=0;//declaration
    int i,n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)//number of terms
    {
     if(i==1)
     denom=1;
     else if(i==2)//special case
     denom=4;
     else
     denom=i*2;
     sum=sum+(num/denom);//calculating sum
     num=num+2;
    }
    printf("approx sum= %f",sum);//output
    return 0;
}