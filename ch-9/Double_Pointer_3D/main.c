#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table,row,coul;
    printf("Enter table,row and Coulmn value\n");
    scanf("%d %d %d",&table,&row,&coul);
    int array[table][row][coul];

    for(int k=0;k<table;k++)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<coul;j++)
            {
                printf("Enter Value:");
                scanf("%d",&array[k][i][j]);
            }
        }
    }

    int **ptr=array;

    for(int i=0;i<table*row*coul;i++)
    {
        printf("Value is %d\n",*((int*)ptr+i));
    }
    return 0;
}
