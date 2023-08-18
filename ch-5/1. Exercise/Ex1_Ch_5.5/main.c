#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Square(int i);
int main()
{
    int i,k;
    printf("Enter Value\n");
    scanf("%d",&i);
    k=Square(i);
    printf("k = %d",k);
    return 0;
}

int Square(int i)
{
    int s,j;
    while(i>=1)
    {
       s=i*i;
       printf("%d\n",s);
        j=j+s;
       i--;
    }

      //printf("%d",j);
      return j;
}
