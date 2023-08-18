#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a[]={11,22,36,5,2};
    int *p=a;
    for(int i=0;i<5;i++)
    printf(" %d ",*(p++));
    return 0;
} //output = 11 22 36 5 2
*/

/*
int main()
{
    int a[5];
    *a=10;
    printf("A is%d",a[0]);
    return 0;
}   // A is 10
*/

/*
int main()
{
    int j;
    int array[2][3]={{12,27,45},
                     {18,55,44}};

    int *ref;
    ref=&array;
                 printf("%d",*(ref+4));
                 for(int j=0;j<6;j++)
                 {
                    printf(" %d ",ref[j]);
                 }
                 printf("\n");
                 for(int j=0;j<6;j++)
                 {
                    printf(" %d ",*(ref+j));
                 }
    return 0;
}
*/

/*
int main()
{
    int array[2][3]={{12,27,45},
                     {18,55,44}};

    int *reff;
    int *ref = &reff;
    ref=&array;

    for(int j=0;j<6;j++)
                 {
                    printf(" %d ",*(*(ref+j)));
                 }
    return 0;
}                   //op=12 27 45 18 55 44
*/

/*
int main()
{
    int a[]={11,22,36,5,2};
    int sum =0,*p;

    for(p=&a[0];p<=&a[4];p++)
    {
        sum += *p;
    }
    printf("Sum Is %d",sum);
    return 0;               //op=76
}
*/

/*
int main()
{
    int a[]={11,22,36,5,2};
    int sum =0,*p;

    for(p=a;p<=a+4;p++)
    {
        sum += *p;
    }
    printf("Sum Is %d",sum);
    return 0;                //op=76
}
*/

int main()
{
    int a[]={11,22,36,5,2};
    printf("%d",a+1);  //accessesing addressvof a
    return 0;
}
