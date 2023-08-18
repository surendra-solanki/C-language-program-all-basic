///////2.Write a program: Function with two arguments and one return value which return division of two numbers.

#include <stdio.h>
#include <stdlib.h>
float Fun_Call(float x,float y);

int main()
{
    float x,y,z;
    printf("Enter Value for X and Y\n");
    scanf("%f\n%f",&x,&y);
    z=Fun_Call(x,y);
    printf("%f",z);
    return 0;
}
float Fun_Call(float x,float y)
{
   float div=x/y;
    return div;
}
