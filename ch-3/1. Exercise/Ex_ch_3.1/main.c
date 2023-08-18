#include <stdio.h>
#include <stdlib.h>

int main()
{
int w,x,y,z;
printf("Enter value for w x y z : ");
scanf("%d %d %d %d",&w,&x,&y,&z);

if(((w>x) && (w>y)) || ((y>x) && (y>z)))
{
    if(w>y)
    {
        printf("Biggest number is w =%d ",w);
    }else if(y>w)
    {
      printf("Biggest number is y =%d ",y);
    }
}
else if(((x>z) || (x<z)) || ((z>x) || (z<x)))
{
    if(x>z)
    {
        printf("Biggest number is x =%d ",x);
    }else if(z>x)
    {
      printf("Biggest number is z =%d ",z);
    }

}

    return 0;
}
