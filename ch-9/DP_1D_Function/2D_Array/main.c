#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row,coulm;
    printf("Enter 2D_Array row and coulmn:");
    scanf("%d %d",&row,&coulm);

    int array[row][coulm];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coulm;j++)
        {
            printf("Enter Value:");
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    int *array1=array;
    //for(int *p=&a[0][0];p<=&a[1][1];p++)
    for(int k=0;k<row*coulm;k++)
    {
     printf(" Value of array1 %d::%d\n",*(array1+k),&(array1[k]));
    }

    return 0;
}

/*
int main()
{
    int i,j;
    printf("Enter rows and columns:\n");
    scanf("%d\n%d",&i,&j);
    int a[i][j];

    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("Enter Value:");
            scanf("%d",&a[k][l]);
        }
    }
    int *ptr;
    ptr=&a;
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("\nReference Value:%d",*ptr++); ////////*(*(a+k)+l));
        }
    }
    return 0;
}
*/
