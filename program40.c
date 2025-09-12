//Write a program to find the 1’s complement of a binary number and print it.
 #include <stdio.h>

int main() {
    long num, result = 0, place = 1;//declaration
    int digit;

    printf("Enter a binary number: ");
    scanf("%ld", &num);

    while (num > 0)
    {
        digit = num % 10;         // extract last binary digit
        if (digit == 0)
            result =result + 1 * place;  // replacing 0 with 1
        else
            result =result + 0 * place;  // replacing 1 with 0
            
        num = num / 10;
        place =place*10;              // shifting place value
    }

    printf("1's Complement: %ld\n", result);

    return 0;
}