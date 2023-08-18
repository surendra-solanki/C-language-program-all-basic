#include <stdio.h>
#include <stdlib.h>

int main()
{   //matrix multiplication code
    //initialise two dimensional matrix
    int x[2][2], y[2][2], z[2][2];
    int i,j, a,b;
    for(i=0;i<2;i++) //for raw
    {
        for(j=0;j<2;j++) // for colomns
        {
            printf("Enter 2x2 X matrix\t");
            scanf("%d",&x[i][j]);
            printf("Enter 2x2 Y matrix\t");
            scanf("%d",&y[i][j]); //matrix assignment in runtime
        }

    }
    printf("X=\n");
    for(a=0;a<2;a++) //for raw
    {
        for(b=0;b<2;b++) // for colomns
        {
            //printf("%d",x[i][j]);
            printf("%d\t",x[a][b]);
        }
        printf("\n");

    }
    printf("Y=\n");
    for(a=0;a<2;a++) //for raw
    {
        for(b=0;b<2;b++) // for colomns
        {

            //printf("%d",x[i][j]);
            printf("%d\t",y[a][b]);
        }
        printf("\n");
    }

     for(a=0;a<2;a++) //for raw
    {
        for(b=0;b<2;b++) // for colomns
        {
            for(i=0;i<2;i++)
            {
                z[a][b]=z[a][b]+x[a][i]*y[i][b]; //calculation for matrix multiplication
            }
        }
    }
    for(a=0;a<2;a++) //for raw
    {
        for(b=0;b<2;b++) // for colomns
        {
            //printf("%d",x[i][j]);
            printf("%d\t",z[a][b]);
        }
        printf("\n");
    }
    return 0;
}
