#include <stdio.h>
#include <stdlib.h>
int fun_swap();
int fun_swaap();
int x,y;

int main()
{
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    printf("You Enter X=%d  Y=%d\n",x,y);
     fun_swap();
     //fun_swaap();
    return 0;
}

int fun_swap()
{
    x = x+y;
    y = x-y;
    x = x-y;

    printf("Now its Swap Value X=%d Y=%d \n",x,y);
    return 0;
}
/*int fun_swaap()
{
    y = (y/y)*x;
    printf("Now its Swap Value Y=%d\n",y);
    return 0;
}
*/
