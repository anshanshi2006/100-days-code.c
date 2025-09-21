//Search for an element in an array using linear search.

#include <stdio.h>
int main()
{
    int i,n,loc=-1,value;//declaration
    printf("enter size of array: "); 
    scanf("%d", &n);
    int arr[n];
    printf("enter the value to be searched: "); 
    scanf("%d", &value);
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            loc=i;
        }
    }
    if(loc==-1)
    printf("value not found");
    else
    printf("value found on %d", loc);
    return 0;
}