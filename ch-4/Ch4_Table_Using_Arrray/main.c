#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, y, x[10];
    //Enter value of y at run time
    printf("Enter No.\n");
    scanf("%d",&y);
    printf("You Enter %d\n",y);
    //Table of the entered value with help of array
    j=1;
    for(i=1;i<=10;i++)
    {

        x[j]=y*i;

        printf("%dx%d =%d\n",y,j,x[j]);
        j++;
    }
    return 0;
}
