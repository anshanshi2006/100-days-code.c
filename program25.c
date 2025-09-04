//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int a,b;
    char operator;//declaration
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter operator from +,-,*,%%,/ : ");
    scanf(" %c", &operator);
    printf("Enter second number:");
    scanf("%d", &b);
    switch(operator)//switch case
    {
        case '+'://addition
        {
            printf("Result: %d\n", a+b);
            break;
        }
        case '-'://subtraction
        {
            printf("Result: %d\n", a-b);
            break;
        }
        case '*'://multiplication
        {
            printf("Result: %d\n", a*b);
            break;
        }
        case '/'://division
        {
            if(b==0)
            {
                printf("Division by zero is undefined");
            }
            else
            {
                printf("Result: %d\n",a/b);
                break;
            }
        }
        case '%'://modulus
        {
            if(b==0)
            {
                printf("modulus by zero is undefined");
            }
            else
            {
                printf("Result: %d\n",a % b);
                break;
            }
        }
    }
    return 0;
}
