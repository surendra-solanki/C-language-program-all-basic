
//11. WAP to print all numbers between 1 to 50 which are divided by

#include <stdio.h>
#include <stdlib.h>
 void Divide_Fun(int i);

int main()
{
    int i;
    printf("Enter Value for i ");
    scanf("%d",&i);
    Divide_Fun(i);
    return 0;
}

void Divide_Fun(int i)
{
    for(int j=1;j<=i;j++)
  {
      if(j%7==0)
      {
          printf("\nThis Number Is Divisible by 7= %d",j);
      }
  }
}
