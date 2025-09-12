//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int num,t,last,count=0,first,newnum,middle,power;

    printf("Enter the number: ");
    scanf("%d", &num);

    last = num % 10;       // last digit
    t = num;               // copy of num

    while(t > 0) {
        count++;
        t = t / 10;
    }

    power = (int)pow(10, count - 1);  // value of first digit
    first = num / power;              // extract first digit
    middle = num % power;             // remove first digit
    middle = middle / 10;             // remove last digit

    newnum = last * power + middle * 10 + first;

    printf("New number is %d\n", newnum);
    return 0;
}
