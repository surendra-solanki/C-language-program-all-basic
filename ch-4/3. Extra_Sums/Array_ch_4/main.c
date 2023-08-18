#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]=" SURENDRA SOLANKI";
    int i,j;
    //printf("%s", name[0]);
    for(i=;i<17;i++)
    {
        for(j=;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n%d.",i);
    }

    return 0;
}
