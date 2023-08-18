#include<stdio.h>
#include<stdlib.h>


int x =5;
int y =4;
float z = 4.2;

int sum(int x,int y);
int sub(int x,int y);
float divs(float z,int y);
int multy(int x,int y);
float divident(float z,int y);
int leftshift(int x,int y);
int rightshift(int x,int y);
int logicand(int x,int y);
int logic_or(int x,int y);
int logic_not(int x);
int logic_xor(int x,int y);


int main ()
{
printf("SUM = %d\n",sum(x,y));
printf("SUB = %d\n",sub(x,y));
//printf("%.3f\n",divs(z,y));
divs(z,y);
printf("MULTY =%d\n",multy(x,y));
printf("DIVIDENT =%.2f\n",divident(z,y));
printf("LEFTSHIFT =%d\n",leftshift(x,y));
printf("RIGHTSHIFT =%d\n",rightshift(x,y));
printf("LOGIC AND =%d\n",logicand(x,y));
printf("LOGIC OR =%d\n",logic_or(x,y));
printf("LOGIC NOT =%d\n",logic_not(x));
printf("LOGIC XOR =%d\n",logic_xor(x,y));

return 0;
}
int sum(int x,int y)
{
   int add = x+y;

    return add;
}

int sub(int x,int y)
{
   int subtract = x-y;

    return subtract;
}


float divs(float z,int y)
{
   float division = z/y;
    printf("THE DIVISION = %.3f\n",division);
    return 0;
}


int multy(int x,int y)
{
   int multiply = x*y;

    return multiply;
}


float divident( float z,int y)
{
   float divi = x%y;

    return divi;
}

int leftshift(int x,int y)
{
   int shift = x<<y;
    return shift;
}

int rightshift(int x,int y)
{
   int shift = x>>y;
    return shift;
}


int logicand(int x,int y)
{
   int and= x&y;
    return and;
}


int logic_or(int x,int y)
{
   int or= x | y;
    return or;
}


int logic_not(int x)
{
   int not = (~x);
    return not;
}


int logic_xor(int x,int y)
{
   int xor= x^y;
    return xor;
}
