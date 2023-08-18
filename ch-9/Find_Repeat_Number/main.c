#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,count=0;
    for(i=0;i<5;i++)
    {
    printf("enter value");
    scanf("%d",&a[i]);
    if(a[i]==1)
    count++;
    }
    printf("Number of Ones is %d",count);
    return 0;
}
