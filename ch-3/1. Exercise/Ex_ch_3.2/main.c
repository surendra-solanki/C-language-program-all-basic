#include <stdio.h>
#include <stdlib.h>

int main()
{
int x, y, z;
printf("Enter value for x y z : ");
scanf("%d %d %d",&x,&y,&z);

if(x<y)
{
    if(x<z)
    {
        printf("x is smallest number with %d",x);
    }
    else if(z<x)
    {
       printf("z is smallest number with %d",z);
    }
}
else if(y<x)
{
   printf("y is smallest number with %d",y);
}
else
{
    printf("You have enter two same value");
}

    return 0;
}
