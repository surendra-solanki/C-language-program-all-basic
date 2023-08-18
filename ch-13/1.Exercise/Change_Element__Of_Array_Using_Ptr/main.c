//////2. Write a program to change the second element of array X={10, 20, 30, 40, 50}, to 5 using a pointer.
#include <stdio.h>

int main()
{
    int x[5]={10,20,30,40,50};
    printf("%d,%d,%d,%d,%d\n",x[0],x[1],x[2],x[3],x[4]);
    int *ptr;
    ptr=&x;
    *(ptr+1)=*(x+3);
    printf("Second Element Value:%d\n",x[1]);
    printf("%d,%d,%d,%d,%d\n",x[0],x[1],x[2],x[3],x[4]);
    return 0;
}
