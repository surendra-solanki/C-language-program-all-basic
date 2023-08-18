#include <stdio.h>
#include <stdlib.h>
 int y;
int Post_Incre(int y)
{
    printf("post_Increment = %d\n",y++);
    return 0;
}

int Pre_Incre(int y)
{
    printf("pre_Increment = %d\n",++y);
    return 0;
}

int Post_Decre(int y)
{
   printf("post_Decrement = %d\n",y--);
    return 0;

    return 0;
}

int Pre_Decre(int y)
{
   printf("pre_Decrement = %d\n",--y);
    return 0;
}



int main()
{   //int y;
    printf("Enter value for y: \n");
    scanf("%d",&y);

    Post_Incre(y);
    printf("\n");
    Pre_Incre(y);
    printf("\n");
    Post_Decre(y);
    printf("\n");
    Pre_Decre(y);

    return 0;
}



