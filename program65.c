//Search in a sorted array using binary search.

#include <stdio.h>

int main() 
{
    int n,value,i,low,high,mid;//declaration
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];//declaring array
    printf("Enter %d sorted elements: \n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &value);

    low = 0;
    high = n - 1;
    int found = 0;

    while(low <= high) 
    {
        mid = (low + high) / 2;

        if(arr[mid] == value) 
        {
            printf("Element found at position %d\n", mid + 1); // +1 for 1-based index
            found = 1;
            break;
        }
        else if(arr[mid] > value) 
        {
            high = mid - 1;   // search left half
        }
        else 
        {
            low = mid + 1;    // search right half
        }
    }

    if(found==0) 
    {
        printf("Element not found in array.\n");
    }

    return 0;
}
