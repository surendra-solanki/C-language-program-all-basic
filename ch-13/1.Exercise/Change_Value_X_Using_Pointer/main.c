///////1. Write a program to change a value of X from 10.5 to 255.6 using a pointer.
#include <stdio.h>

int main()
{
    float x=10.5,*y=&x;
    printf("Value of X is:%.2f\n",x);
    printf("Value of y is:%.2f\n",*y);
    *y=255.6;
    printf("Value of new x is:%.2f\n",x);

    return 0;
}
