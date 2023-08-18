#include <stdio.h>
#include <stdlib.h>
int fun(int array[],int row,int coul);

int main()
{
    int row,coul,j;
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
    j=fun(array,row,coul);
    printf("Sum Is %d\n",j);
    return 0;
}

int fun(int array[],int row,int coul)
{
    int **array2=array;
    int k=0,sum;
    for(int i=0;i<row*coul;i++)
    {
        printf("value is %d\n",*((int*)array2+i));
        k+=*((int*)array2+i);
    }
    sum=k;
    return sum;
}
