#include <stdio.h>
#include <stdlib.h>
void fun_add ();
void fun_sub ();
void fun_multiply ();
void fun_division ();

int x,y;
int main()
{
    //1. Write a program to calculate 11+22,11-22,11*22 and 11/22 and
    //print it.

    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
     fun_add ();
     fun_sub ();
     fun_multiply ();
     fun_division ();

    return 0;
}

void fun_add ()
{
    printf("Addition of X and Y is %d\n",x+y);
}

void fun_sub ()
{
    printf("Substraction of X and Y is %d\n",x-y);
}
void fun_multiply ()
{
    printf("Multiplication of X and Y is %d\n",x*y);
}
void fun_division ()
{
    printf("Division of X and Y is %f\n",(float)x/(float)y);
}
