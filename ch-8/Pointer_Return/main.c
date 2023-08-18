#include <stdio.h>
#include <stdlib.h>

int Call(int *a)
{
    *a=225;
    return a;
}

int main()
{
    int a,*b;
    b=Call(&a);
    printf("Return Pointer %d",*b); //derefference pointer
    return 0;
}
