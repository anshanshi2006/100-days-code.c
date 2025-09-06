//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int num,binary=0,rem,i=1;//declaration
    printf("Enter the number:");
    scanf("%d", &num);
    if(num==0)
    {
        printf("binary equivalent=0");//binary of 0=0
        return 0;
    }
    
    while(num>0)
        {
          rem=num%2;//remainder
          binary=rem*i+binary;//calculating binary equivalent
          i=i*10;//place
          num=num/2;//
        }
        printf("binary equivalent=%d", binary);//displaying output
    return 0;
}
   