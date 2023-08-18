#include <stdio.h>
void Call(int *a,int *b,int *c);
void Call2(int *c,int *d);
void Call3(int *a,int *b,int *c);

int main()
{
    int a,b,c,d;
    Call(&a,&b,&c);
    printf("Sum = %d\n",c);
    Call2(&c,&d);
    printf("Average = %d",d);
    return 0;
}

void Call(int *a,int *b,int *c)
{
    *a=15,*b=10;
    *c=*a+*b;
}

void Call3(int *a,int *b,int*c)
{
    *a=15,*b=5;
    *c=(*a+*b);
}

void Call2(int *c,int *d)
{
    ///*d = Call3(&a,&b,&c)/2;
    *d= *c/2;

}
