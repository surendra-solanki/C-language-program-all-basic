/////41. WAP to print the percentage of a student, total number of subjects are six.(use array)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j=0,avg;
    int i,a[6];

    for(i=0;i<=5;i++)
    {
        printf("Enter Marks of Subject%d:",i+1);
        scanf("%d",&a[i]);
        j+=a[i];
    }

    avg= (j/6);
    printf("\nAverage of six subject is %.2f\n",avg);
    return 0;
}
