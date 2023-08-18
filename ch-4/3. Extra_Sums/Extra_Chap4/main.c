#include <stdio.h>
#include <stdlib.h>

float Add(float x,float y);
float Sub(float x,float y);
float Multy(float x,float y);
float Div(float x,float y);
int Modulas(int x,int y);

    int main()
{
    float x,y;
    printf("Enter Value For X and Y\n");
    scanf("%f%f",&x,&y);
    printf("Addition = %.2f\n",Add(x,y));
    printf("Subtraction =%.2f\n",Sub(x,y));
    printf("Multiplication =%.2f\n",Multy(x,y));
    printf("Division =%f\n",Div(x,y));
    printf("Modula =%d\n",Modulas(x,y));

    return 0;
}

float Add(float x,float y)
{
    return x+y;
}

float Sub(float x,float y)
{
    return x-y;
}

float Multy(float x,float y)
{
    return x*y;
}

float Div(float x,float y)
{
    return x/y;
}

int Modulas(int x,int y)
{

    return x%y;
}
