//Find the second largest element in an array.

#include <stdio.h>
int main()
{
    int n, i;//declaration
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int first = -1, second = -1; //small initial values

    for(i = 0; i < n; i++) 
    {
        if(arr[i] > first) 
        {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -1) 
    {
        printf("Second largest does not exist (all elements are same).\n");
    } else 
    {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}