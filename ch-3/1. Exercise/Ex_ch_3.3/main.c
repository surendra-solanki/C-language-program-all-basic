#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    printf("You Enter X=%d  Y=%d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("Swap Value Now X=%d  Y=%d",x,y);

 /* int x,y,z,w;

  printf("Enter value for x y : ");
  scanf("%d %d",&x,&y);
  printf("You have enter value \n x = %d,\n y = %d, \n",x,y);

  z = x;
  x = y;
  printf("Now,\n");
  printf(" x = %d,\n",x);
   w = z;
   y = w;
     printf(" y = %d,",y);
     */

    return 0;
}
