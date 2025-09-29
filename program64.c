//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
    long num;
    int count[10] = {0};  // frequency of digits 0-9
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%ld", &num);
    while (num > 0)  //Count frequency of digits
    {
        digit = num % 10;       // extract last digit
        count[digit]++;         // increment its count
        num=num/10;              // remove last digit
    }

    for (int i = 0; i < 10; i++)  //Find max frequency digit
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);//displaying output
    return 0;
}