#include <stdio.h>
#include <stdlib.h>
void Funct_Relat_Operator(int x,int y);
void Arithmetic_Operator(int x,int y);
void Logical_Operator(int x, int y);
void Assignment_Operator(int x,int y);
void Bitwise_Operator(int x,int y);

int x,y;
int main()
{
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    Funct_Relat_Operator(x,y);
    Arithmetic_Operator(x,y);
    Logical_Operator(x,y);
    Assignment_Operator(x,y);
    Bitwise_Operator(x,y);
    return 0;
}

void Funct_Relat_Operator(int x,int y)
{
    printf("Assignment Operator for value X and Y :%d \n",(x==y));
    printf("Not Operator for vale  X and Y :%d \n",(x!=y));
    printf("Greater than Operator for value X and Y :%d \n",(x>y));
    printf("Less than Operator for value X and Y :%d \n",(x<y));
    printf("Greater than or Equal to Operator for value X and Y :%d \n",(x>=y));
    printf("Less than or Equal to Operator for value X and Y :%d \n",(x<=y));
}

void Arithmetic_Operator(int x,int y)
{
    printf("\nAddition operator for X and Y :%d\n",(x+y));
    printf("Substraction operator for X and Y :%d\n",(x-y));
    printf("Multiplication operator for X and Y :%d\n",(x*y));
    printf("Division operator for X and Y :%d\n",(x/y));
    printf("Modulas operator for X and Y :%d\n",(x%y));
}

void Logical_Operator(int x,int y)
{
    printf("\nAnd Logical Operator for X and Y :%d\n",(x&&y));
    printf("Or Logical Operator for X and Y :%d\n",(x||y));
    printf("Not Logical Operator for X and Y :%d\n",(!(x&&y)));
}

void Assignment_Operator(int x,int y)
{
    printf("\nSimple Assignment Operator for X and Y :%d\n",(x=y));
    printf("Addition Assignment Operator for X and Y :%d\n",(x+=y));
    printf("Substraction Assignment Operator for X and Y :%d\n",(x-=y));
    printf("Multiplication Assignment Operator for X and Y :%d\n",(x*=y));
    printf("Division Assignment Operator for X and Y :%d\n",(x/=y));
    printf("Modulas Assignment Operator for X and Y :%d\n",(x%=y));
}

void Bitwise_Operator(int x,int y)
{
    printf("\nLeft Shift Bitwise Operator for X and Y :%d\n",(x<<y));
    printf("Right Shift Bitwise Operator for X and Y :%d\n\n",(x>>y));
    printf("AND Bitwise Operator for X and Y :%d\n",(x&y));
    printf("OR Bitwise Operator for X and Y :%d\n",(x|y));
    printf("NOT Bitwise Operator for X :%d\n",(~x));
    printf("NOT Bitwise Operator for Y :%d\n",(~y));
}







