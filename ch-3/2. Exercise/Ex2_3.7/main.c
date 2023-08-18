#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Write a program to swap two numbers. Ex. if x=7 and y=10 after
   //swapping x=10 and y=7.
   int x ,y;
    printf("Enter Value For X and Y :");
    scanf("%d %d",&x,&y);
    printf("X=%d,Y=%d\n",x,y);
    x=x+y;//x=6 y= 5  11
    y=x-y;//11-5=6 x=6 y=
    x=x-y;
    printf("X=%d,Y=%d",x,y);
    return 0;
}
