#include <stdio.h>
#include <stdlib.h>
int Fun(int *array2,int row);

int main()
{
    int row,j;
    printf("Enter row value:");
    scanf("%d",&row);
    int array[row];

    for(int i=0;i<row;i++)
    {
            printf("Enter Value:");
            scanf("%d",&array[i]);
    }
    int *array2=&array;

    j=Fun(array2,row);
    printf("Sum is %d\n",j);
    return 0;
}

int Fun(int *array2,int row)
{
    int k=0,sum;
    for(int i=0;i<row;i++)
    {
        printf("You Enter value is:%d\n",*(array2+i));
       k+=*(array2+i);
    }
    sum=k;
    return k;
}
