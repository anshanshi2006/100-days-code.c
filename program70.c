//Rotate an array to the right by k positions.

#include <stdio.h>

int main() 
{
    int n, k, i;//declaration
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n; 

    int temp[k];
    for (i = 0; i < k; i++)// copy last k elements into temp
        {
            temp[i] = arr[n - k + i];
        }


    for (i = n - 1; i >= k; i--)    // shift remaining elements to right
       {
            arr[i] = arr[i - k];
       } 

    for (i = 0; i < k; i++)   //move temp elements to front
       {
        arr[i] = temp[i];
       } 

    printf("Array after rotation: ");//display rotated array
    for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    return 0;
}
