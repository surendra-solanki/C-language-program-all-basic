#include <stdio.h>
#include <stdlib.h>
void Arithmetic_Operator(int x,int y);
int main()
{
   //1. Enter values of variables x and y in runtime using scanf then
   //perform Addition, Subtraction, Multiplication and Division print
   //the outcome of each operation.
   int x,y;
   printf("Enter value for x and y:");
   scanf("%d\n%d",&x,&y);
   Arithmetic_Operator(x,y);
    return 0;
}

void Arithmetic_Operator(int x,int y)
{
    printf("\nAddition operator for X and Y :%d\n",(x+y));
    printf("Substraction operator for X and Y :%d\n",(x-y));
    printf("Multiplication operator for X and Y :%d\n",(x*y));
    printf("Division operator for X and Y :%d\n",(x/y));
    printf("Modulas operator for X and Y :%d\n",(x%y));
}
