#include <stdio.h>
#include <stdlib.h>

void Fun(int *ptr);
int main()
{
    int *ptr,*k;
    int array[]={7,5,12,25,4};
    ptr=&array;
    //ptr=&array[0];
    Fun(ptr);
    return 0;
}

void Fun(int*ptr)
{
    for(int i=0;i<5;i++)
    {
     printf("\n Val: %d",*(ptr+i));
    }
}


/*
int Fun();
int main()
{
    int *p;
    p=Fun();
    for(int i=0;i<5;i++)
    {
        printf("val: %d\n",*(p+i));
    }
    return 0;
}

int Fun()
{
    static int array[]={7,5,12,25,4};
    return &array;
}
*/
