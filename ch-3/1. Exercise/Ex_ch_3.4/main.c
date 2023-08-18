#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
  printf("Enter number x & y ");
  scanf("%d %d ",&x , &y);
  printf("you have enter %d and %d\n",x,y);

  if((x == 0) || (y == 0))
  {
      printf(" you have enter zero vale\n");
  }
  else if((x !=0 ) ||(y !=0 ))
  {
    printf("Multiplication of x and y is : %d\n",x*y);
    printf("Division of x and y is : %d\n",x/y);

  }
    return 0;
}
