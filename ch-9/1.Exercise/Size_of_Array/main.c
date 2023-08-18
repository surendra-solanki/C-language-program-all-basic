/////Write a program to enter size of array and elements of array in run time, print the array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={10,52,23,4,0,62,5,865};
    printf("size of Array = %d\n",sizeof(a));
    printf("Number of Element(Length) = %d\n",sizeof(a)/sizeof(a[0]));
    printf("Size of an Element = %d\n",sizeof(a[0]));
    return 0;
}
