#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
   int i=1,j=3,k=1;
   while(i<4)
   {
       while(j>i)
       {
        printf("  ");
        j--;
       }
       while(k<=(2*i)-1)
       {
        printf("* ");
        k++;
       }
       printf("\n");
       i++;
   }
    return 0;
}
*/

/*
int main()
{
 int i,j,k,x;
 printf("Enter number");
 scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        for(j=(x-1);j>i;j--)
        {
            printf("  ");
        }

        for(k=1;k<=2*i-1;k++)
        {
            printf("* "); //k>=j-i
        }

        printf("\n");
    }
    return 0;
}
*/

int main()
{
  int i,j,k,x;
  printf("Enter number");
  scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        for(j=1;j>x;j++)
        {
            printf("  ");
        }
        for(k=x;k<=x;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
