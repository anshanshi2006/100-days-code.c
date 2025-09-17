//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() 
{
    int n, i;//declaration
    printf("Enter number of elements: ");
    scanf("%d", &n);//size of array
    int arr[n];  // declaring array of size n
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);//reading array elements
    }
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);//printing array elements
    }

    return 0;
}
