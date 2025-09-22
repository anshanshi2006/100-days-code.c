//Reverse an array without taking extra space.

#include <stdio.h>
int main()
{
  int n,temp,i,start,end;
  printf("enter the size of array elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("enter array elements:\n");
  for ( i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  start=0,end=n-1;
  while(start<end)//reversing array
  {
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;//updating position of element
    end--;
  }
  printf("reversed array is:");
  for ( i = 0; i < n; i++)//displaying reversed array
  {
    printf("%d ", arr[i]);
  }
  return 0;

}