//Insert an element in an array at a given position.

#include <stdio.h>

int main() 
{
    int n, i, x, pos;//declaration
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n+1];  // assume enough space for extra element
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1) 
    {
        printf("Invalid position!\n");
        return 0;
    }

    
    for(i = n; i >= pos; i--) // Shift elements to right
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x; // insert element
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
