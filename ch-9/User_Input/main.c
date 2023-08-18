#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],i,Ncount=0,count=0;
    for(i=0;i<=4;i++)
    {
    printf("enter value");
    scanf("%d",&a[i]);

    if(a[i]<0)
    {
      Ncount++;
    }
    else
    {
      count++;
    }
   }
   printf("Negative %d\n",Ncount);
   printf("Positive %d",count);
    return 0;
}

