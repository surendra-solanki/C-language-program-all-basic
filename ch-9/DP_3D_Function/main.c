#include <stdio.h>
#include <stdlib.h>
int fun(int array[],int table,int row,int coul);

int main()
{
    int table,row,coul,j;
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
    j=fun(array,table,row,coul);
    printf("Sum Is %d\n",j);
    return 0;
}

int fun(int array[],int table,int row,int coul)
{
    int **array2=array;
    int k=0,sum;
    for(int i=0;i<table*row*coul;i++)
    {
        printf("value is %d\n",*((int*)array2+i));
        k+= *((int*)array2+i);
    }
    sum=k;
    return sum;
}
