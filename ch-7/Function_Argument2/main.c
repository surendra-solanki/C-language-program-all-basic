#include <stdio.h>

int Fun3(int Fun1,int Fun2);
int Fun1(int x,int y);
int Fun2(int x,int y);


int main()
{
    int x,y,h;
    printf("Enter Two Value For Substraction\n");
    scanf("%d\n%d",&x,&y);
    h= Fun3(Fun1(x,y),Fun2(x,y));
    printf("%d",h);
    return 0;
}

int Fun1(int x,int y)
{
    int w = x+y;
    return w;
}


int Fun2(int x,int y)
{
    int v=x-y;
    return v;
}

int Fun3(int Fun1,int Fun2)
{
    int d=Fun1*Fun2;
    return d;
}
