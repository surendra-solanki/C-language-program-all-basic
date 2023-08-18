#include <stdio.h>
#include <stdlib.h>
void fun_and ();
void fun_or ();
void fun_not ();
 int x,y;
int main()
{

    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    fun_and ();
    fun_or ();
    fun_not ();
/*
    if(x&&y)
    {
        printf("You have enter x=%d, y=%d",x,y);
    }
    else if (x||y)
    {
        printf("You have enter x=%d, y=%d",x,y);
    }
        else if (!(x &&y))
    {
        printf("You have enter x=%d, y=%d",x,y);
    }
    */

    return 0;
}



void fun_and ()
{
    if(x&&y)
    {
        printf("FOr AND cond You have enter x=%d, y=%d\n",x,y);
    }
    else
    {
     printf("For AND cond You have enter zero value\n");
    }
}


void fun_or ()
{
    if(x||y)
    {
        printf("For OR cond You have enter x=%d, y=%d\n",x,y);
    }
    else
    {
     printf("For OR You have enter zero value\n");
    }
}

void fun_not ()
{
    if(!(!(x&&y)))
    {
        printf("For NOT cond You have enter x=%d, y=%d\n",x,y);
    }
    else
    {
     printf("for not You have enter zero value\n");
    }
}
