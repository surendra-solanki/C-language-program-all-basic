
#include <stdio.h>
#include <stdlib.h>
int *Fun();

int main()
{
    int *ptr;
    ptr=Fun();
    printf("\n");
    for(int j=0;j<10;j++)
    {
        printf("New Value of element : %d :::::::%d\n",*(ptr+j),(ptr+j));
    }
    return 0;
}

int *Fun()
{
    static int array[]={5,7,9,1,3,8,47,58,69,41};

    for(int x=0;x<10;x++)
    {
        printf("Address of element :  %d::::::%d\n",array[x],&array[x]);
    }
    return array; ///here we can use address(&) keyword or without address keyword also its run both are true.
}
