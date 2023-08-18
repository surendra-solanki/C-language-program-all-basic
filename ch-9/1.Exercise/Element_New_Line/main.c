//////////Write a program to make array A={1,2,3,4,5} and print each element in a newline.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={11,22,33,44,55};
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

     for(int i=0;i<=4;i++)
    {
        printf("Element = %d\n",a[i]);
        printf("Address of Element %d\n",&a[i]);
    }


    return 0;
}
