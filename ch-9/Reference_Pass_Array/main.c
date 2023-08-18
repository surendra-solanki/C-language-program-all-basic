#include <stdio.h>
#include <stdlib.h>
/*
void Fun1(int a[],int i);
void Fun2(int *a[],int *i);

int main()
{
    int i;
    printf("Enter Number:");
    scanf("%d",&i);
    int a[i];
    for(int j=0;j<i;j++)
    {
        printf("Enter Value:");
        scanf("%d",&a[j]);
    }

    Fun1(a,i);
    Fun2(&a,&i);
    return 0;
}

void Fun1(int a[],int i)
{
    for(int j=0;j<i;j++)
    {
        printf("\nFunction1 call %d",a[j]);
    }
}

void Fun2(int *a[],int *i)
{
    for(int j=0;j<*i;j++)
    {
        printf("\nReference Call %d",&a[j]);
    }
}
*/

#include <stdio.h>

int main()
{
    int i;
    printf("Enter Number:");
    scanf("%d",&i);
    int a[i];
    for(int j=0;j<i;j++)
    {
        printf("Enter Value:");
        scanf("%d",&a[j]);
    }

       for(int j=0;j<i;j++)
    {
        printf("%d\n",&a[j]);
    }

    for(int k=0;k<i;k++)
    {
     int *b;
     b=&a;
     printf("\nReferencre %d",*(b+k));   /////////*(b+k) is address of a+0,for k=1 is a+1....
    }

     for(int k=0;k<i;k++)
    {
     int *b;
     b=&a[k];
     printf("\nDereferencre %d",*b);   //////*b is equal to &a[k] likewise if k=1 then *b=&a[k] which is equal to*b=1000 so *(1000)=value in pointer
    }

    int *c=&a;
    printf("\nVal  %d",*(c+3)); ////here +1 is eqal to 1*byte of data type
    return 0;
}
