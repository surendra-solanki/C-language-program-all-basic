#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int = X,Y,Z;
    //int = add, sub, multiy, div,
    int x, y, z;
    printf("Enter integer numbers only for X ,Y ,Z = ");
    scanf("%d %d %d",&x,&y,&z);

    printf("You Enter \n X=%d \n Y=%d \n Z=%d\n",x,y,z);

    if(x>y)
    {
        if(x>z)
        {
            printf("Biggest number is  x= %d\n",x);
        }
        else
        {
              printf("Biggest number is  y= %d\n",y);
        }
    }
    else
    {
         if(y>z)
        {
            printf("Biggest number is  y= %d\n",y);
        }
        else
        {
              printf("Biggest number is  z= %d\n",z);
        }
    }
    return 0;
}
