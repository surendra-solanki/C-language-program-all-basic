#include <stdio.h>
#include <stdlib.h>



int main()
{
int row,coulm,table;
    printf("Enter 3D_Array row and coulmn:");
    scanf("%d %d %d",&table,&row,&coulm);

    int array[table][row][coulm];

    for(int i=0;i<table;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<coulm;k++)
            {
                printf("Enter value:");
                scanf("%d",&array[i][j][k]);
            }
        }
    }
    printf("\n\n");

     for(int i=0;i<table;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<coulm;k++)
            {
                printf("Address is %d\n",&array[i][j][k]);
            }
        }
    }
printf("\n\n");

    int *array2 = array;

      for(int l=0;l<table*row*coulm;l++)
    {
        printf("Address is %d::Array 3D Value is %d\n",(array2+l),*(array2+l));
    }

    return 0;
}
