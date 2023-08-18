#include <stdio.h>
#include <stdlib.h>

int Fun2(int x,int y);
int Fun_Arg1(int h,int z);

int main()
{
    int x,y,z,h,g;
    printf("Enter Two Value For Substraction\n");
    scanf("%d\n%d\n%d",&x,&y,&z);
    h=Fun2(x,y);
    g=Fun_Arg1(h,z);
    printf("\n%d",g);
    return 0;
}


int Fun_Arg1( int h,int z)
{
    int w = h+z;
    return w;
}

int Fun2(int x,int y)
{
    int v=x-y;
    return v;
}
