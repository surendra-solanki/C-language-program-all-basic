#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int i=1;

    printf("enter value for x = ");
    scanf("%d",&x);

    printf("%d th table \n",x);
    do
    {
      printf("%d X %d = %d\n",x,i++,x*i);
    }

    while(i!=11);
    return 0;
}

