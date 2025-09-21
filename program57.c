//Find the sum of array elements

#include <stdio.h>
int main()
{
    int n,i,sum=0;//declaration
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];//declaring an array of size n
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];//calculating sum
    }
    printf("sum of array elements= %d",sum);//displaying output
    return 0;
}
