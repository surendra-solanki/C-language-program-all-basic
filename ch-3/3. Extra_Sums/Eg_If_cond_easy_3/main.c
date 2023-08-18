#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,i; //for biggest number
    printf("Enter value for x,y,z,i: \n");
    scanf("%d %d %d %d",&x,&y,&z,&i);


    if((x>y)&&(x>z)&&(x>i))
    {
        printf("X is biggest number : %d",x);
    }
    else if ((y>z)&&(y>x)&&(y>i))
    {
        printf("Y is biggest number : %d",y);
    }
    else if ((z>x)&&(z>y)&&(z>i))
    {
        printf("Z is biggest number : %d",z);
    }
    else if ((i>x)&&(i>y)&&(i>z))
    {
        printf("I is biggest number : %d",i);
    }


    /*
    if((x>y )&& (z>i))
    {
        if(x>z)
        {
         printf("x is biggest %d",x);
        }
        else
        {
         printf("z is biggest %d",z);
        }

    }
    else if ((x<y )&& (z<i))
    {
           if(y<i)
        {
         printf("i is biggest %d",i);
        }
        else
        {
         printf("y is biggest %d",y);
        }

    }
*/
    return 0;
}
