#include <stdio.h>
#include <stdlib.h>
/*
int Call_Table(int a);
void Sum(int Call_Table);
int Average(int Sum(int Call_Table(a)));

int main()
{
    int a;
    printf("Enter Number For table\n");
    scanf("%d",&a);
    //Call_Table(a);
    //Sum(Call_Table(a));
    Average(Sum(Call_Table(a)));
    return 0;
}

int Call_Table(int a)
{
    int b;
    float c=0;
   for(b=1;b<=10;b++)
   {
       printf("%d X %d=%d\n",a,b,a*b);
       c=c+(a*b);
   }
   //printf("\nsum is %.2f\n",c);
   //printf("\nAverage is %.2f\n",c/10);
   return c;
}

int Sum(int Call_Table)
{
    int d= Call_Table;
    printf("\n\nSum %d",d);
    return d;
}

int Average(int Sum(int Call_Table(a)))
{
    int g= Sum(int Call_Table);
    printf("\n\nAverage = %d",g/10);
    return g;
}
*/

int Table(int );
float Avg(float h);

int main()
{
    int a;
    float h,j;
    printf("Enter Number For table\n");
    scanf("%d",&a);
    h=Table(a);
    j=Avg(h);
    printf("\nAverage Is %.2f\n",j);
    //printf("Sum is %d\nAverage Is %d\n",h,h/10);
    //printf("\nSum is %d\nAverage is %d",Table(a)/10,Table(a));
    return 0;
}

int Table(int a)
{
    int c=0;
    for(int b=1;b<=10;b++)
    {
    printf("%d X %d=%d\n",a,b,a*b);
    c=c+(a*b);
    }
    printf("\nSum Is %d\n",c);
    return c;
}


float Avg(float h)
{
    float j = h/10;
    return j;
}
