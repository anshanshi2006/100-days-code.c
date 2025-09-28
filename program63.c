//Merge two arrays.

#include <stdio.h>

int main()
{
    int n1, n2, i;//declaration
    printf("Enter size of first array: ");// Input first array
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: "); // Input second array
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    int merged[n1 + n2]; // Merged array
    for (i = 0; i < n1; i++)  // Copy elements of arr1
    {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++)  // Copy elements of arr2
    {
        merged[n1 + i] = arr2[i];
    }
    printf("Merged Array:\n");// Print merged array
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }
    return 0;
}
