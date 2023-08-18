//////1. Write a program to print below pattern using FOR LOOP:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter number");
    scanf("%d",&x);

    for(int i=1;i<=x;i++)   //rows
    {
        for(int j=x ;j>i;j--)   //left side space
        {
           printf(" ");
        }
        for(int k=1;k<=i;k++)  // *,middle & right side space
        {
          printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
