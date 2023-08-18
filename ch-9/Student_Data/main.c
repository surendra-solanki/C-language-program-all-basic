#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n,a[m][n],k=0,avg;
    //float k=0,avg;
    printf("Enter Student Number");
    scanf("%d",&m);
    printf("Enter Student number of subject");
    scanf("%d",&n);

    for(int i=0;i<m;i++)  //for three student
    {
        printf("\n\nStudent %d",i+1);

        for(int j=0;j<n;j++)
        {
            printf("\nEnter Marks of Subject%d: ",j+1); //marks enter for six subject
            scanf("%d",&a[i][j]);
            k+=a[i][j];
        }
         avg=k/n;
        printf("\nAverage of student%d is %.2d\n",i+1,avg);
        k=0;
    }

    return 0;
}


/*
int main()
{
    int i,j,n,a[6];
    printf("Enter Number of Student");
    scanf("%d",&n);

    for(i=0;i<n;i++)  //for three student
    {
        float k=0,avg;
        printf("\n\nStudent %d",i+1);

        for(j=0;j<=5;j++)
        {
            printf("\nEnter Marks of Subject%d: ",j+1); //marks enter for six subject
            scanf("%d",&a[j]);
            k+=a[j];
            avg=k/6.0;
        }
        printf("\nAverage of student%d is %.2f\n",i+1,avg);
    }
    return 0;
}
*/

