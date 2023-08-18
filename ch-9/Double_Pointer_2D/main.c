#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,coul;
    printf("Enter row and Coulmn value\n");
    scanf("%d %d",&row,&coul);
    int array[row][coul];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coul;j++)
        {
            printf("Enter Value:");
            scanf("%d",&array[i][j]);
        }
    }

    int **ptr=array;

    for(int i=0;i<6;i++)
    {
        printf("Value is %d\n",*((int*)ptr+i));
    }
    return 0;
}
