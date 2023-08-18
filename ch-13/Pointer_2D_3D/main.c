#include <stdio.h>
#include <stdlib.h>
 //////////////////////All Sum of pointer for 2D,3D,and function pointer are in file Function_Pointer.////////////////////////
/*
int main()
{
    int array[2][5]={{5,12,25,7,66},{47,8,24,18,74}};
    int*ptr,**ptr1;
    ptr=&array;
    ptr1=&ptr;
    for(int i=0;i<10;i++)
    {
        printf("\nValue: %d",*(*ptr1+i));
    }

    return 0;
}
*/

/*
int main()
{
    int array[2][5]={{5,12,25,7,66},{47,8,24,18,74}};
    int**ptr1;
    ptr1=&array;
    for(int i=0;i<10;i++)
    {
        printf("\nValue%d: %d",i+1,*((int*)ptr1+i));
    }

    return 0;
}
*/

/*
int main()
{
    int array[2][2][5]={{{5,12,25,7,66},{47,8,24,18,74}},{{6,13,26,8,67},{48,9,25,19,75}}};
    int *ptr,**ptr1;
    ptr=&array;
    ptr1=&ptr;
    for(int i=0;i<20;i++)
    {
        printf("\nValue%d: %d",i+1,*((int*)*ptr1+i));
    }

    return 0;
}
*/


int main()
{
    int array[2][2][5]={{{5,12,25,7,66},{47,8,24,18,74}},{{6,13,26,8,67},{48,9,25,19,75}}};
    int**ptr1;
    ptr1=&array;
    for(int i=0;i<20;i++)
    {
        printf("\nValue%d: %d",i+1,*((int*)ptr1+i));
    }

    return 0;
}

