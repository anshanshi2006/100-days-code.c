//Delete an element from an array.

#include <stdio.h>

int main() 
{
    int n, i, pos;//declaration
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) 
    {
        printf("Invalid position!\n");
        return 0;
    }
    for(i = pos - 1; i < n - 1; i++) // Shift elements left
    {
        arr[i] = arr[i + 1];
    }

    n--;  // reduce size

    printf("Array after deletion: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
