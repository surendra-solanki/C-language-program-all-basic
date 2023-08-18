//////Write a program to change above array A={1,2,3,4,5} to A={10,20,30,40,50} and print each element in a newline./////////////
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={1,2,3,4,5};
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",A[i]*10);
    }
    return 0;
}
