//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
  double SP,CP,amount,percentage;
  printf("Enter Cost Price:");
  scanf("%lf", &CP);
  printf("Enter Selling price:");
  scanf("%lf", &SP);
  if(SP>CP)//profit
  {
    amount=SP-CP;
    percentage=(amount/CP)*100;
    printf("Profit Percentage=%lf", percentage);
  }
  else if(CP>SP)//loss
  {
    amount=CP-SP;
    percentage=(amount/SP)*100;
    printf("Loss Percentage=%lf", percentage);
  }
  else
  {
    printf("No profit, No loss");
  }
  return 0;
}