#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int var =10;
    int var2=25;
    int **ptr2,**ptr3;;
    ptr2=&var;
    ptr3=&ptr2;

    printf("Address of var is:%d\n",&var);
    printf("Value of *ptr2 is:%d\n",*ptr2);
    printf("Address of ptr2 is:%d\n",&ptr2);
    printf("Value of *ptr2 is:%d\n",&ptr3);

    return 0;
}
*/

/*
int main()
{
    int c =28;
    int *b=&c;
    int **s=&b;
    printf("Address %d\n",&c);
    printf("value %d\n",*s);
    printf("value %d",**s);
    return 0;
}
*/


int main()
{
    int a[3]={2,8,14};
    int*c=a;
    //int **c=&a;
    printf("%d\n",sizeof(int**));
    for(int i=0;i<3;i++)
    {
        printf("Value Is %d\n",*(c+i));

    }

    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("Value Is of %d\n",*(c++));
    }
    return 0;
}

