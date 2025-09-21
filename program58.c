//Find the maximum and minimum element in an array.

#include <stdio.h>
int main()
{
    int n,i,max,min;//declaration
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];//declaring an array
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];//assuming first element as maximum and minimum
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)//condition for maximum
        {
            max=arr[i];
        }
        else if(arr[i]<min)//condition for minimum
        {
            min=arr[i];
        }
    }
    printf("maximum and minimum elements are: %d %d", max,min);
    return 0;
}
