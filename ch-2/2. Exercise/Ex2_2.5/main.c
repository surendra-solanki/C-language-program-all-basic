#include <stdio.h>
#include <stdlib.h>

int fun(int *x,int *y)
{
    *x=20;
    *y=10;
    printf("%d and,%d",*x,*y);
    return 0;
}
int main()
{
  printf("Size of Int= %d bytes\n",sizeof(int));    //4
  printf("Size of Float= %d bytes\n",sizeof(float)); //4
  printf("Size of Double= %d bytes\n",sizeof(double)); //8
  printf("Size of Long = %d bytes\n",sizeof(long));    //4
  printf("Size of Long Double= %d bytes\n",sizeof(long double));  //16

  int x=10 , y=20;
  fun(&x,&y);
  printf("\n%d,%d",x,y);
  return 0;
}
