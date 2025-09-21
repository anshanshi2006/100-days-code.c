//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
    int i,n,positive=0,negative=0,zero=0;//declaration
    printf("enter size of array: "); 
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        positive++;
        else if(arr[i]<0)
        negative++;
        else
        zero++;
    }
    printf("Number of positive elements in this arrray are: %d\n", positive);
    printf("Number of negative elements in this arrray are: %d\n", negative);
    printf("Number of zeroes in this arrray are: %d\n", zero);
    return 0;
}
