#include <stdio.h>
#include <stdlib.h>


int Odd(int a[],int i);
int Even(int a[],int i);

int main()
{
    int i,j,k,l;
    printf("Enter number:");
    scanf("%d",&i);
    int a[i];
    for( j=0;j<i;j++)
    {
        printf("\nEnter Value:");
        scanf("%d",&a[j]);
    }
    k=Odd(a,i);
    printf("\nSum Of Odd Value is: %d\n",k);

    l=Even(a,i);
    printf("\nSum Of Even Value is: %d\n",l);

    return 0;
}


int Odd(int a[],int i)
{
  int sum =0;
  for(int k=0;k<i;k++)
  {
      if(a[k]%2!=0)
      {
          printf("\nOdd Value is: %d",a[k]);
          sum+=a[k];
      }
  }
  return sum;
}

int Even(int a[],int i)
{
  int sum =0;
  for(int k=0;k<i;k++)
  {
      if(a[k]%2==0)
      {
          printf("\nEven Value is: %d",a[k]);
          sum+=a[k];
      }
  }
  return sum;
}

