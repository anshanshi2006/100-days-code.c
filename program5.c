//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float Celcius,Fahrenheit;
    printf("Enter the temperature in celcius:");
    scanf("%f", &Celcius);//input from user
    Fahrenheit=(Celcius*9/5+32);//converting temperature into fahrenheit
    printf("Temperature in Fahrenheit= %f",Fahrenheit);
    return 0;
}