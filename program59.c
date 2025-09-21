//Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
    int i,n,even=0,odd=0;//declaration
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1;i<=n;i++)//to check even or odd number
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("odd numbers are %d ", odd);
    printf("even numbers are %d ", even);
    return 0;
}