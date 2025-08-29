//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    ch=toupper(ch);//to convert input into uppercase
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')//condition to check vowels
    {
        printf("Character is a vowel");
    }
    else
    {
      printf("Character is a consonant");
    }
    return 0;
}