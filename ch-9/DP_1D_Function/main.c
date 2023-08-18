#include <stdio.h>
#include <stdlib.h>
int Fun(int a[],int p);

int main()
{
    int p=4,m;
    int a[]= {2,7,14,5};
    m=Fun(a,p);
    printf("Sum is :%d\n",m);
    return 0;
}

int Fun(int a[],int p)
{
    int sum,k=0;
    int **array=&a;
    for(int i=0;i<p;i++)
    {
     printf("Value is:%d\n",*((int*)a+i));
     k+= *((int*)a+i);
    }

     sum=k;

    return sum;
}
