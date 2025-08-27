//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>//including math library to use pow function

int main()
{
    float principal,rate,time,SimpleInterest,CompoundInterest;
    printf("Enter the value of principal:");
    scanf("%f", &principal);
    printf("Enter the value of rate of interest:");
    scanf("%f", &rate);
    printf("Enter the value of time(in years):");
    scanf("%f", &time);
    SimpleInterest=(principal*rate*time)/100;//calculating simple interest
    CompoundInterest=principal * pow((1 + rate / 100), time)-principal;//calculating compound interest
    printf(" Simple Interest= %f \n Compound Interest= %f \n", SimpleInterest,CompoundInterest);//displaying output
    return 0;
}