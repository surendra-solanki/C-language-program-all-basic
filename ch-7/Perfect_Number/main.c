#include <stdio.h>
#include <stdlib.h>

void Perfect_Num(int i);

int main()
{
    int i;
    printf("Enter Value\n");
    scanf("%d",&i);
    Perfect_Num(i);
    return 0;
}

void Perfect_Num(int i)
{
    int m,j,l=0,k=2;
    while(k<=i)
    {
    j=i%k;
    if(i%k==0)
    {
        l=i/k;
        m=m+l;
    }
    k++;
    }

    if(m==i)
    {
        printf("This is perfect number");
    }
    else if(m!=i)
    {
        printf("This is not perfect number");
    }
}
