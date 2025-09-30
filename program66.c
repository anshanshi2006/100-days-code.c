//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() 
{
    int n, i, x, pos;//declaration
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];  // enough space for extra element
    printf("Enter %d sorted elements: \n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);
    for(i = n - 1; (i >= 0 && arr[i] > x); i--) // Find position to insert
    {
        arr[i + 1] = arr[i];  // shift right
    }
    arr[i + 1] = x; // insert element
    n++; // increase size
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}