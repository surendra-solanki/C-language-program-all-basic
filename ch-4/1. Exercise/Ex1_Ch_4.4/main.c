#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Swap two number using XoR
    int x,y,z;
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);

    printf("x = %d, y = %d\n",x,y);
    /*
    z =(x^y);
    x =(~x);
    y =(~y);
    x = z&&y;
    y = z&&x;
    */

    x = x^y;
    y = x^y;
    x = x^y;

    printf("x = %d, y = %d\n",x,y);



    return 0;
}
