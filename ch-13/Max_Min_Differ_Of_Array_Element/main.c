//////54. WAP that accepts array pointer (size 5) elements from the
//////keyboard and print out the difference of the maximum and
//////minimum values of these four numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter element number: ");
    scanf("%d",&x);
    int *arr[x];
    for(int i=0;i<x;i++)
    {
        printf("Enter Element%d: ",i+1);
        scanf("%d",&arr[i]);
    }
        int *min,*max;
            min= &arr[0];
            max= &arr[0];

    for(int j=0;j<x;j++)
    {
        if(arr[j]<*min)
        {
            min=&arr[j]; //before this we are doing like this : *min=arr[j];
        }
        if(arr[j]>*max)
        {
            max=&arr[j];
        }
        if(x-1==j)
        {
            printf("Maximum is: %d\n",*max);
            printf("Minimum is: %d\n",*min);
            printf("Diff:%d",*max-*min);
        }
    }

    return 0;
}

