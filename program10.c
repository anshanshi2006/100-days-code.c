//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
 
int main()
{
    int time,hours,minutes,seconds;//declaration
    printf("Enter the total time in seconds:");
    scanf("%d", &time);
    hours=time/3600;//converting into hours
    minutes=(time%3600)/60;//converting into minutes
    seconds=time%60;//converting into seconds
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}