#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="Riddhi";
    int i,j;
    //printf("%s", name[0]);
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
    return 0;
}
