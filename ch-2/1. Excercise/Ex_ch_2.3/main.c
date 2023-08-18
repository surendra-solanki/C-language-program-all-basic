#include <stdio.h>
#include <stdlib.h>

int main()
{
  for(int i=1;i<=4;i++)
  {
    for(int j=1;j<=i;j++)
    {
       printf("*\t");
    }
  printf("\n");
  }
    return 0;
}


/*
int main()
{
  for(int i=5;i>=0;i--)
  {
    for(int j=1;j<=i;j++)
    {
       printf(" * ");
    }
  printf("\n");
  }
    return 0;
}
*/
